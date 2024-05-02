#include <iostream>
#include "example_header.h"

using namespace std;

/*
    Note: 
         1. This file, along side the JSON files (Do not edit, unless you
            know what you're doing), is meant to be used in VS Code,
            which is recommened since in the videos, I use CLion has my prefer
            IDE, which cost a monthly subscription. But note this, if you are
            a current college student, you can apply to get a free subscription
            of CLion, along side PyCharm with JetBrains's other products.

         2. Make sure when using the external console, making sure to always to use
            "system("pause")" in some instance because the program might run, but
            display's the console for a split second before closing.

*/
int main() {
    
    auto Example_Instance = new Example_Class{};

    cout << Example_Instance->hello() << endl;

    system("pause");

    return 0;
}