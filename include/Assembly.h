/* 
 * File:   Assembly.h
 * Author: Quinn Mikelson
 * Represents the mechanical and physical constraints of a robot. Includes dynamic calculations.
 * There is one main assembly called by Assembly "Name" that can assemble(Legs, Arms, Etc.)
 * Created on September 4, 2015, 1:34 PM
 */

#ifndef ASSEMBLY_H
#define	ASSEMBLY_H
#include <math.h>


#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#define PI 3.14159265359

#include "Link.h"
#include "Servo.h"



class Assembly {
//    Assembly();
//    Assembly(const Assembly& orig);
//    virtual ~Assembly();
    int _quadrant;
//    int _numJoints;
//    int _jointMin[_numJoints];
//    int _jointMax[_numJoints];
//    std::vector<int> _jointMin;
//    std::vector<int> _jointMax;
//    std::vector<int> _jointInv;
    int _numLinks;
     
    bool _eeState; //1 means slave
    bool _baseState; // == !_eeState (eeState is controlled, baseState reacts)
   
    
    
    
public:
    //Assembly Specific
    Assembly(); //creates leg assembly with 2 joints and two links of length l1 and l2.
    
    
    void setQuadrant(int quad); //Chooses which joints in the assembly to invert
    
    
    //Joint Specific
    void limit(int joint, int deg); //limit joint (1 or 2 for now) to a freedom of rotation of min to max (in degrees).
    void invert(int joint, bool inv); //set invert value (0 = min->max, 1 = max->min)
    
    //Link Specific
    void setLinkLength(int link,int mm);//Set length in millimeters
    float getLinkLength(int link);
    //End Effector and Base
    void setEEState(bool eeState); //If eeState = 0, End Effector is now reference (0,0) and base is at target (-X,-Y)
    void moveTo(float x, float y); //Moves Slave(base or EE) to defined (X,Y). Defaults to (L1,L2)
    
};

#endif	/* ASSEMBLY_H */

