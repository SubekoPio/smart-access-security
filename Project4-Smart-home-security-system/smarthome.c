// --- Pin Definitions ---
const int doorSwitchPin = 2; // Slide switch to simulate door
const int pirSensorPin = 3;  // PIR Motion Sensor
const int greenLedPin = 4;   // Normal Status LED
const int redLedPin = 5;     // Alarm LED

// --- Variables ---
int doorState = 0;   // To store the status of the door
int motionState = 0; // To store the status of the PIR sensor

void setup() {  
  // Initialize Output Pins (LEDs)
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
   
  // Initializing Input Pins
  // using INPUT_PULLUP for the switch. 
  // This means: Logic LOW (0) = Switch Connected to GND (Door Closed)
  //             Logic HIGH (1) = Switch Open (Door Open)
  pinMode(doorSwitchPin, INPUT_PULLUP); 
  
  pinMode(pirSensorPin, INPUT);

  // Start Serial Monitor to see the states of doors.
  Serial.begin(9600);
}

void loop() {
  // 1. Read the sensors
  doorState = digitalRead(doorSwitchPin);
  motionState = digitalRead(pirSensorPin);

  // Debugging output ( helps see what's happening in Serial Monitor)
  Serial.print("Door Status: ");
  Serial.print(doorState == LOW ? "CLOSED" : "OPEN");
  Serial.print(" | Motion: ");
  Serial.println(motionState == HIGH ? "DETECTED" : "NONE");

  // 2. Logic Implementation based on Project Requirements
  
  // SCENARIO A: Normal status LED when door is closed
  if (doorState == LOW) { 
    // Door is CLOSED (Switch connected to GND)
    digitalWrite(greenLedPin, HIGH); // Turn ON Green LED
    digitalWrite(redLedPin, LOW);    // Ensure Alarm is OFF
  } 
  
  // SCENARIO B: Alarm LED when motion is detected WHILE door is open
  else {
    // Door is OPEN (Switch not connected to GND)
    digitalWrite(greenLedPin, LOW); // Turn OFF Green LED (System not normal)

    if (motionState == HIGH) {
      // Motion detected AND Door is Open
      digitalWrite(redLedPin, HIGH); // Turn ON Alarm LED
    } else {
      // Door is open, but no motion
      digitalWrite(redLedPin, LOW);  // Alarm OFF
    }
  }

  // Small delay for stability
  delay(0);
}




