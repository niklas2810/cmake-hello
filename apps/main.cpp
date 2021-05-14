#include <iostream>

#include "hello.h"

using namespace std;

int main(int argc, char** argv)
{
    string name = argc > 1 ? argv[1] : "Niklas";
    string greeting = generateHelloString(name);

    cout<< greeting << endl;
}