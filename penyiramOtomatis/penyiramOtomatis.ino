#define machinePin 05 // PIN DINAMO
#define ledPin 04 // PIN LED
void setup() {
  pinMode(machinePin,OUTPUT);
  pinMode(ledPin,OUTPUT);
}
void loop() {
  digitalWrite(ledPin ,LOW);
  digitalWrite(machinePin ,HIGH);

  delay(10000); 
            
  digitalWrite(ledPin ,HIGH);
  digitalWrite(machinePin ,LOW);

  delay(20000);
}
