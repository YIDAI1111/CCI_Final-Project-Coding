/* This part is writted by Yi Dai,
 * we can light LED by voice; 
 * it is an interesting way to archive remote control.
 * 
 * Originally we planned to add it to the project, 
 * but in the end we had to remove it due to the sensitivity of the sensor, 
 * which was a pity.
 * 
 */
 

int soundPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup () 
{
  Serial.begin (9600);
  pinMode (ledPin, OUTPUT);
}
 
void loop () 
{
  sensorValue = analogRead (soundPin);
  Serial.println (sensorValue, DEC);
  //if sensor goes above max light led (could be buzzer)
  if(sensorValue > 52)
  {
    digitalWrite (ledPin, HIGH);
    delay (1000);
  }
  //switch off LED
  digitalWrite (ledPin, LOW);
  delay (100);
}
