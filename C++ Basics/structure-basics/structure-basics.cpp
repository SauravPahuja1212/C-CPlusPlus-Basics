#include <iostream>
#include "structureBasics.h"

using namespace std;

/** Definition of structure */
//Structure is collection of similar or dissimilar data members, This is used to create custom types using standard data types

struct Rectangle {
    int length;
    int breadth;
};

int structureBasics() {
    
    //Here we have used above defined custom data type which we called structure
    //Values are assigned according to the sequence of data members declared in structure
    //Here in below initialization, 10 is assigned to length and 5 is assigned to breadth
    Rectangle r1 = {10, 5};
    cout << "Value of length in rectangle is => " << r1.length << endl;
    
    return r1.length * r1.breadth;
}
