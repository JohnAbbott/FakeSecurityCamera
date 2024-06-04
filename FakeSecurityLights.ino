/*
 * Stealth Van Fake Security 
 * Copyright Joseph Grey and the person who invented him
 * 
 * Version 1.0 -- January 2024
 * 
 */

int i = 0;
int light = 0;

void setup() { 
  Serial.begin(9600);

  pinMode(D6, OUTPUT); //Pin D6 is defined as output
  pinMode(D5, OUTPUT); //Pin D5 is defined as output
  pinMode(A0,INPUT);  // LDR Sensor output pin connected  
}

void loop()

{ //The main part starts

  digitalWrite(D6, HIGH); //turn on the LED on pin D6
  delay(1000); //wait for 1000 milliseconds
  digitalWrite(D6, LOW); //turn off the LED on pin D6
  digitalWrite(D5, HIGH); //turn on the LED on pin D5
  delay(1000); //wait for 1000 milliseconds
  digitalWrite(D5, LOW); //turn off the LED on pin D5

  i=i+1;
  
  if(i % 10 == 0)
    {
      Serial.print(i);
      Serial.print(" light value: ");
      light= digitalRead(A0); // LDR Sensor output pin connected  
      Serial.println(light); //  see the value in serial mpnitor in Arduino IDE    
    }

}