/* 
 * File:   Host.h
 * Author: Quinn
 *
 * Created on September 4, 2015, 1:38 PM
 */

#ifndef HOST_H
#define	HOST_H

class Host {
public:
//    Host();
//    Host(const Host& orig);
//    virtual ~Host();
    
    Host();
    void pinMode(int gpio, int val);
    void digitalWrite(int gpio, bool val); //High Low etc...
    long map(long x, long in_min, long in_max, long out_min, long out_max);
    bool check();
private:

};

#endif	/* HOST_H */

