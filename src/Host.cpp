/* 
 * File:   Host.cpp
 * Author: Quinn
 * 
 * Created on September 4, 2015, 1:38 PM
 */

#include "../include/Host.h"

//Host::Host() {
//}
//
//Host::Host(const Host& orig) {
//}
//
//Host::~Host() {
//}

Host::Host() {


}

void Host::pinMode(int gpio, int val) {

}

void Host::digitalWrite(int gpio, bool val) //creates an output StringStream that is piped to the system command. Executes gpio script.
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

long Host::map(long x, long in_min, long in_max, long out_min, long out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

bool Host::check() {
    return (system(NULL));
}