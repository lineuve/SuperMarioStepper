/*
  Super Mario - 2x Stepper Motor

  Stanley Ondruš 2016
  www.stanleyprojects.com
  www.stanleyondrus.com
*/

#include <Stepper.h>

const int stepsPerRevolution = 400;

Stepper stepper2(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
  pinMode(14, INPUT);
}

void loop()
{
  while (digitalRead(14) == HIGH)
  {
    intro();
    verse1();
    verse2();
    bridge();
    intro();
    outro();
  }
}

void intro()
{
  playTone(stepper2, 45, 50);
  playTone(stepper2, 45, 200);
  playTone(stepper2, 45, 200);
  playTone(stepper2, 45, 50);
  playTone(stepper2, 45, 200);
  playTone(stepper2, 30, 550);
  playTone(stepper2, 30, 600);
}

void verse1()
{
  playTone(stepper2, 40, 400);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 25, 400);
  playTone(stepper2, 34, 200);
  playTone(stepper2, 38, 200);
  playTone(stepper2, 36, 20);
  playTone(stepper2, 34, 200);
  playTone(stepper2, 30, 50);
  playTone(stepper2, 50, 200);
  playTone(stepper2, 60, 50);
  playTone(stepper2, 67, 200);
  playTone(stepper2, 54, 50);
  playTone(stepper2, 60, 200);
  playTone(stepper2, 50, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 45, 20);
  playTone(stepper2, 38, 400);

  playTone(stepper2, 40, 400);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 25, 400);
  playTone(stepper2, 34, 200);
  playTone(stepper2, 38, 200);
  playTone(stepper2, 36, 20);
  playTone(stepper2, 34, 200);
  playTone(stepper2, 30, 50);
  playTone(stepper2, 50, 200);
  playTone(stepper2, 60, 50);
  playTone(stepper2, 67, 200);
  playTone(stepper2, 54, 50);
  playTone(stepper2, 60, 200);
  playTone(stepper2, 50, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 45, 20);
  playTone(stepper2, 38, 400);
}

void verse2()
{
  playTone(stepper2, 20, 400);
  playTone(stepper2, 30, 300);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 400);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 200);

  playTone(stepper2, 20, 400);
  playTone(stepper2, 25, 400);
  playTone(stepper2, 30, 50);
  playTone(stepper2, 40, 200);

  playTone(stepper2, 27, 200);
  playTone(stepper2, 27, 30);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 30, 200);

  playTone(stepper2, 20, 400);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 400);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 600);

  playTone(stepper2, 32, 400);
  playTone(stepper2, 36, 400);
  playTone(stepper2, 40, 400);

  playTone(stepper2, 30, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 20, 200); 
}

void bridge()
{
  playTone(stepper2, 16, 400);
  playTone(stepper2, 24, 400);
  playTone(stepper2, 32, 200);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 20, 400);
  playTone(stepper2, 10, 200);

  playTone(stepper2, 16, 400);
  playTone(stepper2, 24, 400);
  playTone(stepper2, 32, 200);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 20, 400);
  playTone(stepper2, 10, 200);

  playTone(stepper2, 16, 400);
  playTone(stepper2, 24, 400);
  playTone(stepper2, 32, 200);
  playTone(stepper2, 30, 400);
  playTone(stepper2, 20, 400);
  playTone(stepper2, 10, 200);
}

void outro()
{
  playTone(stepper2, 20, 400);
  playTone(stepper2, 28, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 27, 200);

  playTone(stepper2, 23, 400);
  playTone(stepper2, 27, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 38, 200);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 30, 200);

  playTone(stepper2, 20, 400);
  playTone(stepper2, 28, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 27, 200);

  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 34, 100);
  playTone(stepper2, 38, 100);
  playTone(stepper2, 40, 100);
  playTone(stepper2, 25, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 40, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 25, 100);
  
  playTone(stepper2, 20, 400);
  playTone(stepper2, 28, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 27, 200);

  playTone(stepper2, 23, 400);
  playTone(stepper2, 27, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 38, 200);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 30, 200);

  playTone(stepper2, 20, 400);
  playTone(stepper2, 28, 50);
  playTone(stepper2, 30, 200);
  playTone(stepper2, 40, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 27, 200);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 40, 50);
  playTone(stepper2, 27, 200);

  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 30, 100);
  playTone(stepper2, 34, 100);
  playTone(stepper2, 38, 100);
  playTone(stepper2, 40, 100);
  playTone(stepper2, 20, 100);
  playTone(stepper2, 26, 100);
  playTone(stepper2, 40, 5000);
}

void playTone(Stepper stepperName, int speedStep, int delayTime)
{
  stepperName.setSpeed(speedStep);
  stepperName.step(speedStep);
  delay(delayTime);
}

