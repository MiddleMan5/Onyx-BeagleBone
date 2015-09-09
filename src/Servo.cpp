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
static long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

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
    _time = map(time, 0, 255, 5000, 1);
}

void Servo::move(int pulse) {
    if (_isInvert) _position = map(pulse, 600, 2400, 2400, 600);
    else _position = pulse;
    //SSC.servoMoveTime(_pin,_position,_time); //Greater time means slower speed (DUH!)
}