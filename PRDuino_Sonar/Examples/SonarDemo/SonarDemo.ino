#include <Sonar.h>

int echoPort    = 4; 
int triggerPort = 5; 

PRDuino::Sonar *sonar;

void setup() 
{ 
  Serial.begin(9600); 
  sonar = new PRDuino::Sonar(triggerPort, echoPort);
} 

void loop() 
{
    sonar->scan();
    
    Serial.print(sonar->getRange(PRDuino::Sonar::SCALE_INC, false)); 
    Serial.println(" inches"); 
    delay(500); 
    
    Serial.print(sonar->getRange(PRDuino::Sonar::SCALE_CM, false)); 
    Serial.println(" centimeters"); 
    delay(500); 
  
    Serial.print(sonar->getRange(PRDuino::Sonar::SCALE_MT, false)); 
    Serial.println(" meters"); 
    delay(500);
}
