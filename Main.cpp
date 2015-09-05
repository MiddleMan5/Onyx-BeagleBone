/* 
 * File:   Main.cpp
 * Author: Quinn Mikelson
 *
 * Created on August 2, 2015, 12:23 PM
 */
#include "cstdlib"
using namespace std;
#include "include/Onyx.h"

Onyx MK1; //Initialize Onyx Class

int Main() {
    cout << "Onyx Initializing...";
    endl(cout);
    MK1.setMode(STARTUP);
    cout << "Onyx Initialized. Program Start.";
    endl(cout);
    MK1.setMode(STANDBY);
    return 0;
}

