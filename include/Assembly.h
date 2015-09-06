/* 
 * File:   Assembly.h
 * Author: Quinn Mikelson
 * Represents the mechanical and physical constraints of a robot. Includes dynamic calculations.
 * There is one main assembly called by Assembly "Name" that can assemble(Legs, Arms, Etc.)
 * Created on September 4, 2015, 1:34 PM
 */

#ifndef ASSEMBLY_H
#define	ASSEMBLY_H

class Assembly {
//    Assembly();
//    Assembly(const Assembly& orig);
//    virtual ~Assembly();
    
    int _speed; //Global Assembly Movement Speed factor
    float _Trochanter_X;
    float _Trochanter_Y;

    float _Femur_X;
    float _Femur_Y;
    float _Femur;
    float _L1;

    float _Tibia;
    float _Tarsus;
    float _L2;

    int _quadrant;
    bool _isGroup;
    
public:
    Assembly();
    
    bool assemble(int joints); //Creates and array of #joints and an array of links
    //Creates named class objects to be assembled:
    void Create_Base(); 
    void Create_Joint();
    void Create_Link();
    void Create_End_Effector();
   
    void rotate(int degree);
    void setSpeed(int speed);
    void setMaster();
    void move(int pulse);
    void setQuadrant(int index);
    void moveFootTo(float x, float y);
    
};
class Frame {
    
    
public:
    Frame();
    
};


class Joint {
int _center;
int _freedom;    
public:
    Joint();
    
};

class Link {
    
    
public:
    Link();
    void attach()
};
class End_Affector {
    int _linkLength;
    int _jointFreedom;
    int _jointCenter;
    
    
public:
    End_Affector();
    
};

#endif	/* ASSEMBLY_H */

