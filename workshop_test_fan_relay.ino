void setup() {
  // setup pin 7 (relay - fan control) as an output port
  pinMode(7, OUTPUT);
  
  // sets up the communication between arduino and computer with cable
  Serial.begin(9600);

  // wait 5 seconds before printing setup complete
  delay(5000);
  Serial.println("Setup completed");
}

void loop() {
  // relay set up to be normally closed for plant health
  digitalWrite(7, LOW);   // turn the fan on (HIGH is the voltage level)
  Serial.println("Fan ON!");
  delay(10000);  // wait for 10 seconds
  
  digitalWrite(7, HIGH);    // turn the fan off by making the voltage LOW
  Serial.println("Fan OFF!");
  delay(5000); 
}

