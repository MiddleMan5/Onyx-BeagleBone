/* 
 * File:   Assembly.cpp
 * Author: Quinn
 * 
 * Created on September 4, 2015, 1:34 PM
 */

#include "../include/Assembly.h"
#include "../include/Servo.h"

//Assembly::Assembly() {
//}
//
//Assembly::Assembly(const Assembly& orig) {
//}
//
//Assembly::~Assembly() {
//}

Link L[2];

Assembly::Assembly() {
    Servo Joint[2];   
    setEEState(0);
}
void Assembly::setLinkLength(int link, int mm) {
    L[link-1].setLength(mm); //Links are 1 Indexed but arrays are Zero indexed. Link 1 = index 0;
}

float Assembly::getLinkLength(int link) {
  return L[link-1]._length; //Links are 1 Indexed but arrays are Zero indexed. Link 1 = index 0;
}

void Assembly::setEEState(bool eeState){
    _eeState = eeState;
    _baseState = !eeState;
}

//void Assembly::rotate(int degree) {
//    Coxa.move(degree * 10 + 1500);
//}

//void Assembly::setSpeed(int speed) {
//    _speed = speed;
//    Coxa.setTime(_speed);
//    Knee.setTime(_speed);
//    Ankle.setTime(_speed);
//}

//void Assembly::move(int pulse) {
//    Knee.move(pulse);
//    Ankle.move(pulse);
//
//    //SSC.executeGroup();
//}

void Assembly::moveTo(float x, float y) { //Inverse Kinematic
    float _L1 = getLinkLength(1);
    float _L2 = getLinkLength(2);
    float theta2 = acos(((x * x)+(y * y)-(_L1 * _L1)-(_L2 * _L2)) / (2 * _L1 * _L2));
    float theta1 = ((-((_L2 * sin(theta2)) * x) + ((_L1 + _L2 * cos(theta2)) * y)) / (((_L2 * sin(theta2) * y) +(_L1 + (_L2 * cos(theta2))) * x)));
    float deg1 = theta1 * 180 / PI; //conversion to degrees
    float deg2 = theta2 * 180 / PI;

    float pulse1 = -(deg1 * 10) + 1500; //offset to mechanical center (0 degrees IK)
    float pulse2 = (deg2 * 10) + 600; //offset to mechanical center (90 degrees IK)

//    Knee.move(pulse1); //conversion to degrees using new variable
//    Ankle.move(pulse2);
//    //SSC.executeGroup();
}

void Assembly::setQuadrant(int quad) {
    _quadrant = quad;

//    if (_quadrant == 1) {
//        index = 16;
//
//    }
//    if (_quadrant == 2) {
//        index = 0;
//        Knee.invert();
//        Ankle.invert();
//    }
//    if (_quadrant == 3) {
//        index = 12;
//    }
//    if (_quadrant == 4) {
//        index = 28;
//        Knee.invert();
//        Ankle.invert();
//    }
//
//    Coxa.setPin(index);
//    Knee.setPin(index + 1);
//    Ankle.setPin(index + 2);

}