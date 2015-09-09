/* 
 * File:   HAL.h
 * Author: Quinn
 *
 * Created on September 4, 2015, 1:38 PM
 */

#ifndef HAL_H
#define	HAL_H

#define DEBUG(str) do { std::cout << str << std::endl; } while( false )


#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class HAL {
    
    
    
public:
//    Host();
//    Host(const Host& orig);
//    virtual ~Host();
    
    HAL();
    void GPIO(int gpio, bool val); //High Low (On/Off)
    void UART(); //Talk to another system
    void input_recv(const string& input);
    bool check();
    //void ERROR();
};

#endif	/* HOST_H */

