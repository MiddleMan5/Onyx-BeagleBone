/* 
 * File:   Servo.h
 * Author: Quinn
 *
 * Created on September 4, 2015, 1:34 PM
 */

#ifndef SERVO_H
#define	SERVO_H

class Servo {
    int _pin;
    int _time;
    bool _isInvert;
    bool _isExternal; //is "on" another controller (the ssc-32 that has a different IO pin name)
    bool _isGroup; //Is the servo part of a group?
    int _groupNumber;
    int _position;
public:
//    Servo();
//    Servo(const Servo& orig);
//    virtual ~Servo();
    
    Servo();
    void move(int pulse);
    void setTime(int input); //time it takes to move
    void setGroup(int groupNumber);
    void setMax(int Max);
    void setMin(int Min);
    void invert();
    void setPin(int pin);
    
};

#endif	/* SERVO_H */

