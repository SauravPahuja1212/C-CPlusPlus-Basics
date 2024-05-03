#include <iostream>
#include "structure-basics/structureBasics.h"
#include "array-basics/arrayBasics.h"
#include "pointer-basics/pointer-basics.h"

using namespace std;

int main() {
    
    //Chapter 1 => Arrays
    cout << "Calling arrayBasics => " << endl;
    arrayBasics();
    cout << "\n\n\n" << endl;
    
    
    //Chapter 2 => Structures
    cout << "Calling structureBasics => " << endl;
    structureBasics();
    cout << "\n\n\n" << endl;
    
    
    //Chapter 3 => Pointers
    cout << "Calling pointerBasics => " << endl;
    pointerBasics();
    cout << "\n\n\n" << endl;
    
    return 0;
}
