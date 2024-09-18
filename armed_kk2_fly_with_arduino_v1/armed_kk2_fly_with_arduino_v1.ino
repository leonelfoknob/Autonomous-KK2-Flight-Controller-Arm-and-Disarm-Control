#include <Servo.h>

#define Trottle_pin 5
#define Rudder_pin 3
#define Aileron_pin 6
#define Elevator_pin 9
#define Auxiliary_pin 11

Servo Throttle; // throtle to up and down drone
Servo Rudder; // yaw signyal to arrm or desarm kk2
Servo Aileron;
Servo Elevator;
Servo Auxiliary;


/*
 **********************kk2 v2 pin****************************************
 * ----aileron                                   .m1 .5v .gnd           *
 * ----elevator                                  .m2 .5v .gnd           *
 * ----throttle           [screen]               .m3 .5v .gnd           *
 * ----rudder                                    .m4 .5v .gnd           *
 * ----auxiliaure                                                       *
 * [left_buton]  [center_left_button] [center_right_buton] [right_buton]*
 * **********************************************************************
  
 
le principe pour controler automatique lq carte de controle kk2 fly controler avec l'arduino
pour cela on devra mimer les meme commande que si nous sommes avec une vrai telecommande
1 - televerser le code 
2- brancher le drone y compris la carte kk2 a l alimentation mais en branchant il faudra maintenir les boutons de l estreme droite
et de l estreme gauche du kk2 fly controler jusqua entendre le bruit qui aprouve la calibration des moteur puis lacher
3 - ensuite dans le code comme avec un commande metre le rudder ou yaw a droite pour armer la carte et a gauche pour la desarmer.
4 - des que la carte est armer controler le drone ave le throttle,rudder,elevator et auxiliaire.
*/
void setup()
{
  Throttle.attach(Trottle_pin);
  Rudder.attach(Rudder_pin);
  Aileron.attach(Aileron_pin);
  Elevator.attach(Elevator_pin);
  Auxiliary.attach(Auxiliary_pin);
  
  /*delay(3000);*/
  //set initial positions
  Throttle.writeMicroseconds(2000);  //Throttle up position (this may need to be 2000) for motor calibration
  Rudder.writeMicroseconds(1500);    //Rudder center position
  Aileron.writeMicroseconds(1500);   //Aileron center position
  Elevator.writeMicroseconds(1500);  //Elevator center position
  Auxiliary.writeMicroseconds(1000);//off
  delay(5000);  //wait 5 seconds for system stabilization
  Throttle.writeMicroseconds(1000);//down for motor calibration
  delay(3000); // wait 3 seconde
  Rudder.writeMicroseconds(1000);    //Rudder in right position.  Throttle is already at a minimum  to arm the kk2 fly controler.
  delay(4000); wait after 4s 

/* test cod : give diferent value (speed) to throttle to turn motor and 
and disarm card on last line ( rudder )*/
  Throttle.writeMicroseconds(1300);
  delay(5000);
  Throttle.writeMicroseconds(1200);
  delay(2000);
  Throttle.writeMicroseconds(1150);
  delay(2000);
  Throttle.writeMicroseconds(1140);
  delay(2000);
  Throttle.writeMicroseconds(1130);
  delay(2000);
  Throttle.writeMicroseconds(1120);
  delay(2000);
  Throttle.writeMicroseconds(1000);
  delay(1000);
  Rudder.writeMicroseconds(2000);    //disarm kk2 controler.
  delay(4000);
  
}

void loop()
{
  /*Throttle.writeMicroseconds(1300);*/
}
