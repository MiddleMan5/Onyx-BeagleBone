/* 
 * File:   Main.cpp
 * Author: Quinn Mikelson
 *
 * Created on August 2, 2015, 12:23 PM
 */
#include "include/Onyx.h"
Onyx MK1; //Initialize Onyx Class

int Main() {
    MK1.setMode(STARTUP);
    MK1.setMode(STANDBY);
    
    return 0;
}

