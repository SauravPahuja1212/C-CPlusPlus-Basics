#include <iostream>

using namespace std;

/** Definition of an array  */
//An array is collection of same type of values, for example if we want to have a collection of integers than we can have array of integers.
//In array, we can have values of only similar type, once array is declared of a type then it will not be able to hold other type of values.

int main() {
    
    // PART A {
        /** Declaring an array  */
        //Declaration of array, here below we have declared an array of type integer with size of 5
        //Now depending on operating system, integer either can have 2 bytes or 4 bytes, so total size here either be 10 or 20 bytes
        int declarationOfArray[5];
    
        /** Check size of array  */
        //Here below, lets try to print size of above declared array
        cout << "Size of declarationOfArray is => " << sizeof(declarationOfArray) << endl;
    //}
    
    
/**
---------------------------------------------
---------------------------------------------
*/
    
    
    // PART B {
        /** Declaring and initializing array in one row  */
        //Declaration and initialization can be done within the same row as below
        //Here this array below has 5 elements of same type
        int declarationAndInitializationOfArray[5] = {3, 12, 21, 30, 39};

        /** Check size and elements of array */
        //To, check an element in array we need to use indexing in array, so indexing starts from 0
        //Let's see, below we are fetching element which is at index 2
        cout << "Size of declarationAndInitializationOfArray is => " << sizeof(declarationAndInitializationOfArray) << " and element at index 2 is => " << declarationAndInitializationOfArray[2] << endl;
    //}
    
    
/**
---------------------------------------------
---------------------------------------------
*/
    
    
    // PART C {
        /** Declaring and initializing array in one row  */
        //Declaration and initialization can be done separately as well, first declaration and then initialize individual
        //index of array with appropriate value.
        int declarationAndInitializationIndividualElementsArray[5] = {0};
        declarationAndInitializationIndividualElementsArray[0] = 12;

        /** Check size and elements of array */
        //As we have only initialized first element at index 0 but we have sized it to hold 5 elements
        //Let's check element at 0 and 3 index
        cout << "Element at index 0 in declarationAndInitializationIndividualElements is => " << declarationAndInitializationIndividualElementsArray[0] << endl;
        cout << "Element at index 2 in declarationAndInitializationIndividualElements is => " << declarationAndInitializationIndividualElementsArray[2] << endl;
    //}
    
    return 0;
}
