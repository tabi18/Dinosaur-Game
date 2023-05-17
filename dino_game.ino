#include <Servo.h>
Servo servomotor;

int lightvalue=0;
void setup() {
  Serial.begin(9600);
  servomotor.attach(11);
}
void loop() {
  servomotor.write(0);
  lightvalue=analogRead(A5);
  Serial.println(lightvalue);
  if(lightvalue>1022){
   servomotor.write(22);
   delay(100);                                 
   servomotor.write(0);
   delay(100);
}
}
