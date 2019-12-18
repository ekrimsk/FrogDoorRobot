/*
 *  Frog Door Code for Frog Maze
 *  Written for Teensy 3.2 with Teensyduino
 * 
 *  Author: 
 *   Erez Krimsky, ekrimsky@stanford.edu
 *   12/04/19
 */

// Input Pin Definitions 
#define A_pin 3
#define B_pin 2
#define C_pin 1
#define D_pin 0

// Output Pin Definitions 

# include <Servo.h> 

Servo doorA; 
Servo doorB; 
Servo doorC; 
Servo doorD; 

void setup() {
  // put your setup code here, to run once:
  doorA.attach(23); 
  doorB.attach(9); 
  doorC.attach(10); 
  doorD.attach(20); 

  pinMode(A_pin, INPUT); 
  pinMode(B_pin, INPUT); 
  pinMode(C_pin, INPUT); 
  pinMode(D_pin, INPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:


  // For robutness -- debounce --- set timer and dont let it change states to quickly 
  // make robust for 1 motor and then copy paste for the 3 others 

  if (digitalRead(A_pin))
  {
    doorA.write(90); 
  } 
  else 
  {
    doorA.write(0); 
  }

   if (digitalRead(B_pin))
  {
    doorB.write(90); 
  } 
  else 
  {
    doorB.write(0); 
  }

    if (digitalRead(C_pin))
  {
    doorC.write(90); 
  } 
  else 
  {
    doorC.write(0); 
  }


  if (digitalRead(D_pin))
  {
    doorD.write(90); 
  } 
  else 
  {
    doorD.write(0); 
  }
    
  delay(50); 
}
