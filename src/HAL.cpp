/* 
 * File:   Host.cpp
 * Author: Quinn
 * 
 * Created on September 4, 2015, 1:38 PM
 */

#include "../include/HAL.h"

//Host::Host() {
//}
//
//Host::Host(const Host& orig) {
//}
//
//Host::~Host() {
//}
using namespace std;

HAL::HAL() {


}

void HAL::GPIO(int gpio, bool val) //creates an output StringStream that is piped to the system command. Executes gpio script.
{
    ostringstream conversion;
    conversion
            << "/root/Projects/Onyx/gpio "
            << gpio
            << " "
            << val;
    const std::string& tmp = conversion.str();
    const char* cstr = tmp.c_str();
    if (check())system(cstr);
}

//long HAL::map(long x, long in_min, long in_max, long out_min, long out_max) {
//    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
//}

bool HAL::check() {
    return (system(NULL));
}