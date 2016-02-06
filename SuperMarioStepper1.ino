/*
  Super Mario - 2x Stepper Motor

  Stanley Ondruš 2016
  www.stanleyprojects.com
  www.stanleyondrus.com
*/

#include <Stepper.h>

const int stepsPerRevolution = 400;

Stepper stepper1(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
  pinMode(14, OUTPUT);
  delay(1000);
}

void loop()
{
  digitalWrite(14, HIGH);
  intro();
  verse1();
  verse2();
  bridge();
  intro();
  outro();
}

void intro()
{
  playTone(stepper1, 50, 50);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 40, 50);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 60, 550);
  playTone(stepper1, 30, 600);
}

void verse1()
{
  playTone(stepper1, 40, 400);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 25, 400);
  playTone(stepper1, 34, 200);
  playTone(stepper1, 38, 200);
  playTone(stepper1, 36, 20);
  playTone(stepper1, 34, 200);
  playTone(stepper1, 30, 50);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 60, 50);
  playTone(stepper1, 67, 200);
  playTone(stepper1, 54, 50);
  playTone(stepper1, 60, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 40, 50);
  playTone(stepper1, 45, 20);
  playTone(stepper1, 38, 400);

  playTone(stepper1, 40, 400);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 25, 400);
  playTone(stepper1, 34, 200);
  playTone(stepper1, 38, 200);
  playTone(stepper1, 36, 20);
  playTone(stepper1, 34, 200);
  playTone(stepper1, 30, 50);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 60, 50);
  playTone(stepper1, 67, 200);
  playTone(stepper1, 54, 50);
  playTone(stepper1, 60, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 40, 50);
  playTone(stepper1, 45, 20);
  playTone(stepper1, 38, 800);
}

void verse2()
{
  playTone(stepper1, 60, 30);
  playTone(stepper1, 57, 30);
  playTone(stepper1, 54, 25);
  playTone(stepper1, 47, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 32, 50);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 40, 30);
  playTone(stepper1, 45, 400);

  playTone(stepper1, 60, 30);
  playTone(stepper1, 57, 30);
  playTone(stepper1, 54, 25);
  playTone(stepper1, 47, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 80, 200);
  playTone(stepper1, 80, 30);
  playTone(stepper1, 80, 1000);

  playTone(stepper1, 60, 30);
  playTone(stepper1, 57, 30);
  playTone(stepper1, 54, 25);
  playTone(stepper1, 47, 200);
  playTone(stepper1, 50, 200);
  playTone(stepper1, 32, 50);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 40, 30);
  playTone(stepper1, 45, 400);

  playTone(stepper1, 48, 400);
  playTone(stepper1, 45, 400);
  playTone(stepper1, 40, 1300);
}

void bridge()
{
  playTone(stepper1, 40, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 30);
  playTone(stepper1, 45, 200);
  playTone(stepper1, 50, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 30, 600);

  playTone(stepper1, 40, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 30);
  playTone(stepper1, 45, 200);
  playTone(stepper1, 50, 1400);

  playTone(stepper1, 40, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 40, 30);
  playTone(stepper1, 45, 200);
  playTone(stepper1, 50, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 30, 600);
}

void outro()
{
  playTone(stepper1, 50, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 32, 200);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 53, 200);
  playTone(stepper1, 53, 30);
  playTone(stepper1, 34, 600);

  playTone(stepper1, 38, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 60, 100);
  playTone(stepper1, 53, 50);

  playTone(stepper1, 50, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 30, 600);

  playTone(stepper1, 50, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 32, 200);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 53, 200);
  playTone(stepper1, 53, 30);
  playTone(stepper1, 34, 600);

  playTone(stepper1, 38, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 50, 100);
  playTone(stepper1, 45, 100);
  playTone(stepper1, 40, 1200);


  playTone(stepper1, 50, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 32, 200);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 53, 200);
  playTone(stepper1, 53, 30);
  playTone(stepper1, 34, 600);

  playTone(stepper1, 38, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 68, 100);
  playTone(stepper1, 60, 100);
  playTone(stepper1, 53, 50);

  playTone(stepper1, 50, 30);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 34, 30);
  playTone(stepper1, 30, 600);

  playTone(stepper1, 50, 50);
  playTone(stepper1, 40, 200);
  playTone(stepper1, 30, 400);
  playTone(stepper1, 32, 200);
  playTone(stepper1, 34, 50);
  playTone(stepper1, 53, 200);
  playTone(stepper1, 53, 30);
  playTone(stepper1, 34, 600);

  playTone(stepper1, 38, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 53, 100);
  playTone(stepper1, 50, 100);
  playTone(stepper1, 45, 100);
  playTone(stepper1, 40, 100);
  playTone(stepper1, 30, 100);
  playTone(stepper1, 26, 100);
  playTone(stepper1, 20, 5000);
}

void playTone(Stepper stepperName, int speedStep, int delayTime)
{
  stepperName.setSpeed(speedStep);
  stepperName.step(speedStep);
  delay(delayTime);
}

