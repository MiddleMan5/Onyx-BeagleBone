//Onyx library creates classes to represent the various functions and systems of the Onyx Robotic Quadruped.

#ifndef _Onyx_H
#define _Onyx_H

//Onyx Definitions 
#define baudrate 115200             //Symbols per second. Default hardware set 115200
#define sscReturn 0	            //Is SSC32 Connected bi-directionally? (default "0" = no)

//Physical Dimensions //all in floating point millimetres accurate to the thousandth
#define Trochanter_X 61.40
#define Trochanter_Y 4.34 //CAD Model Incorrect!! (But this is)

#define Femur_X 24.29 
#define Femur_Y 50.78 
#define Femur   56.29 //The L1 Value
#define L1 56.29

#define Tibia 41.02
#define Tarsus 62.00 //Tibia + Tarsus = L2 Value
#define L2 103.02

#define Body_Width 139.72
#define Body_Length 106.25
//----------------------------------------------------------------------------
//Servo-Power Relay Pin
#define relayServos 65

//-------------------------------------------------------------------------------------------------------------

//On Off Toggle References

#define OFF     0
#define ON      1
#define TOGGLE  2

#define OUTPUT  1
#define INPUT   0

//Movement Scopes
#define BODY  0
#define LEG   1
#define SERVO 2

//runtime modes
#define REBOOT    0
#define LOWPOWER  1
#define STARTUP   2
#define STANDBY   3
#define STOPPED   4
#define MOVING    5
#define DEBUG     6 
#define VIRTUAL   7
#define SHUTDOWN  8
#define ERROR     9

//move types
#define UP    0
#define DOWN  1
#define LEFT  2
#define RIGHT 3
#define STAND 4
#define SIT   5

#define X   0
#define Y   1
#define Z   2

#define PI 3.14159265359

//Function Definitions
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))

//-Extra Includes-
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "Assembly.h"
#include "Host.h"
#include "Power.h"
#include "Servo.h"



using namespace std;

class Onyx {
private:
    int _attitude; //Needs to be further developed (similar to speed, the robots attitude is a prototype hardware-control emotion) greateer attitude = greater speed
    int _mode;
    int _Z_rotation;
    int _X_rotation;
    int _Y_rotation;

public:
    Onyx();
    void startup();
    void setAttitude(int attitude); //Current servo "Speed Control" - Prototypical function
    void setMode(int mode); //sets runtime state
    void listen();
    void reconnectSSC(); //reinitialize SSC instance communication

    void moveScope(int scope);
    void newMove(int type);
    void move(int type);
    void rotate(int axis, int degree);
    void Log();
};

#endif