/*
      Note: 'ifndef', 'define' have to all be the same name
             and must have the '_H' at the end, but can be
             name whatever. Also, #endif must included on a new
             line, making the header file.
*/

#ifndef EXAMPLE_H
#define EXAMPLE_H
#endif

#include <iostream>

using namespace std;

class Example_Class {
public:
     auto hello() { return "Hey you, you're finally awake."; }     
};