#define LEDstrip 13


void setup()
{
  // the signal wire of the sound sensor is connected to digital pin 7
  pinMode(7, INPUT);

  // the ledstrip negative wire is connected to digital pin 13
  pinMode(LEDstrip, OUTPUT);

}

void loop()
{
  // The sound sensor is used to send a signal to the microcontroller.
  // The microcontroller reads the state of the signal. 
  // If it is in '0', the letstrip is dimmed for 10ms.

  boolean soundstate = digitalRead(7);
  if (soundstate == 1) {
    analogWrite(LEDstrip, 255);
    delay(10);
  }
  else {
    analogWrite(LEDstrip, 0);
  }
}
