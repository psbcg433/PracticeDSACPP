#include <iostream>
#include <exception> // Include this to use std::exception
using namespace std;

void incrementdouble(int** p)
{
    (**p)++;
}
void incrementsingle(int* p)
{
    (*p)++;
}

void  doublePointerMain() {
    try {
        int numbervar = 10;                     // Integer variable
        int* locationnumberVar = &numbervar;    // Pointer to the integer variable
        int** locationLNV = &locationnumberVar; // Double pointer pointing to the pointer

        // Output the values and addresses
        cout << "numberVar: " << numbervar << endl;
        cout << "&numberVar: " << &numbervar << endl;
        cout << "locationnumberVar: " << locationnumberVar << endl;
        cout << "*locationnumberVar: " << *locationnumberVar << endl;
        cout << "&locationnumberVar: " << &locationnumberVar << endl;
        cout << "locationLNV: " << locationLNV << endl;
        cout << "*locationLNV: " << *locationLNV << endl;
        cout << "**locationLNV: " << **locationLNV << endl;

        cout << "INCREMENTIONG VIA DOUBLE POINTER::" << endl;
        (**locationLNV)++;
        
        cout << "numberVar: " << numbervar << endl;
        

        cout << "INCREMENTING VIA FUNCTION" << endl;

        int num = 12;
        int* p = &num;
        int** q = &p;
        cout << num << endl;
        incrementdouble(q);
        cout << num << endl;
        incrementsingle(p);
        cout << num << endl;
       
    }
    catch (const std::exception& e) { // Catch by reference to preserve polymorphism
        cout << "Exception caught: " << e.what() << endl;
    }
}
