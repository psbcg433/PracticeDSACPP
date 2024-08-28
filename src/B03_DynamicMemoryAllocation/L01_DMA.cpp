#include <iostream>
using namespace std;

void typecasting()
{
	//Normal variable Typecasting Implictly
	int c = 65;
	char a = c;
	cout << a << endl;

	int* p = &c;
	//char* pc = p; // Compilation error 
	char* pc = (char*)p; // explict type casting

	cout << *pc << endl;


}

void referencevar()
{
	int value = 10;
	int& addressofval = value; // This is  a reference variable 
	cout << "VALUE ::" << value << endl;
	cout << "&VALUE ::" << &value << endl;
	cout << "ADDRESSOFVAL :: " << addressofval << endl;
	cout << "Increasing the value of value ::" << endl;
	value++;
	cout << "VALUE ::" << value << endl;
	cout << "ADDRESSOFVAL :: " << addressofval << endl;
	cout << "Increasing the value of addressval ::" << endl;
	addressofval++;
	cout << "VALUE ::" << value << endl;
	cout << "ADDRESSOFVAL :: " << addressofval << endl;

	
	
}

void dynamicmemoryallocation()
{
	// allocate memory at heap for dynamic memory allocation
	// new keyword is used to allocate a memory at heap

	//int* p = new int;
	//*p = 10;
	//cout << *p << endl;

	// Allocate an array


	int strength;
	cout << "ENTER TOTAL STRENGTH:";
	cin >> strength;
	string* listholder = new string[strength];
	for (int i = 0; i < strength; i++)
	{
		cout << "ENTER ELEMENT:";
		cin >> listholder[i];
	}
	for (int i = 0; i < strength; i++)
	{
		cout << "ELEMENT:" << listholder[i] << endl;
	}
	delete[] listholder; // list holder is not deleted, the memory which was allocated to list holder is freed

	//Dynamically allocated memory needs to be manually realesd


}

void dynamic2dmemoryallocation() {
	int row, column;
	cout << "Enter the ROW AND COLS: ";
	cin >> row >> column;

	// Dynamically allocating a 2D array
	string** members = new string * [row];
	for (int i = 0; i < row; i++) {
		members[i] = new string[column];
		for (int j = 0; j < column; j++) {
			if (j == 0) {
				cout << "Enter Member Type: ";
				cin >> *(*(members+i)+j);
				*(*(members + i) + j) += ": ";
			}
			else {
				cout << "Enter member for [" << i << "] [" << j << "]: ";
				cin >> *(*(members + i) + j);
			}
		}
	}

	cout << endl << "||||||||MEMBERSHIP LIST||||||||||" << endl;

	// Printing the membership list without re-allocating
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << *(*(members + i) + j) << " ";
		}
		cout << endl;
	}

	// Properly deallocating the memory
	for (int i = 0; i < row; i++) {
		delete[] members[i];  // Delete each row
	}
	delete[] members;  // Delete the array of row pointers
	


}

void dmamain()
{
	dynamic2dmemoryallocation();
}