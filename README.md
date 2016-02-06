# SuperMarioStepper
Super Mario Theme played using two stepper motors and Stepper.h library.

SuperMarioStepper1.pde contains a code for a melody.
DigitalWrite(14, HIGH) sends a starting signal to the second Arduino.

SuperMarioStepper2.pde contains a code for a bassline.
while(digitalRead(14) == HIGH) ensures to start at the same time.

If you don't have two Arduinos, you can just delete those lines and play them one at the time.