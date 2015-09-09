/* 
 * File:   Link.h
 * Author: Quinn
 *
 * Created on September 6, 2015, 4:59 PM
 */

#ifndef LINK_H
#define	LINK_H
#include "Servo.h"

class Link {



public:
    Link();
    float _length;
    void setLength(float mm);
    
    
    Link(const Link& orig);
    virtual ~Link();

};

#endif	/* LINK_H */

