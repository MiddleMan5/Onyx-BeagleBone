/* 
 * File:   Servo.cpp
 * Author: Quinn
 * 
 * Created on September 4, 2015, 1:34 PM
 */

#include "../include/Servo.h"

//Servo::Servo() {
//}
//
//Servo::Servo(const Servo& orig) {
//}
//
//Servo::~Servo() {
//}

Servo::Servo() {
    _isExternal = true;
    _isInvert = false;
}

void Servo::setPin(int pin) {
    _pin = pin;
}

void Servo::invert() {
    _isInvert = !_isInvert;
}

void Servo::setTime(int time) {
    _time = BeagleBone.map(time, 0, 255, 5000, 1);
}

void Servo::move(int pulse) {
    if (_isInvert) _position = BeagleBone.map(pulse, 600, 2400, 2400, 600);
    else _position = pulse;
    //SSC.servoMoveTime(_pin,_position,_time); //Greater time means slower speed (DUH!)
}