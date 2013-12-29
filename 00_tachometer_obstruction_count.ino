/*
This code uses the rising edge

This simply prints the number of times an obstruction passes through the IR-LED IR-RECEIVER pair.

*/

volatile int state;

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, count, RISING);

}

void loop() {
  Serial.println(state);
  delay(100);
}

void count()
{
   state++;
}
