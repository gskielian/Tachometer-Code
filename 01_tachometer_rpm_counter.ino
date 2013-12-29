/*
simply change the number of obstructions per revolution
in order to adjust to your tachometer.

*/

int obstructions_per_rotation = 18;
int previous_state = 0;
volatile int state;

void setup() {

  Serial.begin(9600);
  attachInterrupt(0, count, RISING);

}

void loop() {

  previous_state = state;
  delay(100);
  Serial.println((previous_state - state)/0.1);

}

void count()
{  
   state++;
}
