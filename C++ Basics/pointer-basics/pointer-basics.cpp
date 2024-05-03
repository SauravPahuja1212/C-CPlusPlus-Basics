#include "pointer-basics.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

/** Definition of pointer */
//Pointer is an address variable which is referencing to actual data member, pointers are useful when referencing memory in heap

void pointerBasics() {
    
    /** Simple variable pointer */
    //Here below we are creating a data member A of type integer and we will use pointer to point to its address
    int A = 10;
    int *p = &A;
    cout << "Pointer p has value - > " << *p << endl;
    *p = 12;
    cout << "Variable A has updated value - > " << A << endl;
    
    
    /** Array pointer */
    int arr[5] = {2,4,6,8,10};
    int *arrP = arr;
    cout << "Pointer arrP has value at index 0 - > " << arrP[0] << endl;
    arrP[0] = 12;
    cout << "Original array arr has updated value at index 0 - > " << arr[0] << endl;

    
    /** Structure pointer */
    struct Student {
        char firstName[10];
        int rollNo;
    };
    
    Student s1 = {"Saurav", 5};
    Student *stdPointer = &s1;
    
    cout << "Pointer stdPointer has value in firstName as => " << (* stdPointer).firstName << endl; //This is c lang syntax
    cout << "Pointer stdPointer has value in firstName as => " << stdPointer->firstName << endl; //This is c++ lang syntax
    (* stdPointer).rollNo = 12;
    cout << "Original struct s1 has updated value in rollno as => " << stdPointer->rollNo << endl;
    
    
    /** Dynamic memory allocation, C language syntax */
    struct Student* dynamicStructC = (struct Student *)malloc(sizeof(struct Student));
    cout << "Dynamic memory allocated to dynamicStruct is => " << sizeof(dynamicStructC) << " at address => " << dynamicStructC << endl;
    //Free dynamic memory allocated, this is required in order to save and keep memory available for further operations
    delete dynamicStructC;
    
    
    /** Dynamic memory allocation, C++ language syntax */
    struct Student* dynamicStructCPlusPlus = new Student;
    cout << "Dynamic memory allocated to dynamicStructCPlusPlus is => " << sizeof(dynamicStructCPlusPlus) << " at address => " << dynamicStructCPlusPlus << endl;
    //Free dynamic memory allocated, this is required in order to save and keep memory available for further operations
    free(dynamicStructCPlusPlus);
    
    
    /** Reference or alias */
    int original = 10;
    int &refForOriginal = original;
    cout << "Reference &refForOriginal has value => " << refForOriginal << endl;
    refForOriginal = 12;
    cout << "Original variable original has updated value => " << original << endl;
}
