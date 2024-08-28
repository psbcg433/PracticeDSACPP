#include <iostream>
using namespace std;



void baisc_pointer()
{
	//We can print the address of a variable or constant using &
	int a = 10;
	cout << "The value of a is " << a << " and it is stored in memory location " << &a << endl;
	//we can store the address in a pointer variale
	int* addressto_a = &a;
	cout << "The address is stored in this pointer variable: here's the value " << addressto_a << endl;
	// we can also print the value stored in the pointer variable using dereference operator *
	cout << "The value at adress " << addressto_a << " is " << *addressto_a << endl;
	cout << "Incrementing the value of a" << endl;
	a++;
	cout << "Value of a = " << a << endl;
	cout << "Value of &a = " << &a << endl;
	cout << "Value of addressto_a = " << addressto_a << endl;
	cout << "Value of *addressto_a = " << *addressto_a << endl;
	//The memory allocation remains the same
	int twin_a = a;
	cout << "Value of twin_a = " << twin_a << endl;
	cout << "Value of &twin_a = " << &twin_a << endl;
	cout << "Incrementing the value of a" << endl;
	a++;
	cout << "Value of a = " << a << endl;
	cout << "Value of twin_a = " << twin_a << endl;
	//twin_a is taking a sepearte memory allocation and so it is not upgraded
	cout << "Changing the value of *addressto_a" << endl;
	*addressto_a = 120;
	cout << "Value of a = " << a << endl;

}

void pointer_arithmetic()
{
	int number = 10;
	int* numberpointer = &number;
	cout << "Number :" << number << endl;
	cout << "Number Pointer:" << numberpointer << endl;
	cout << "Number Pointer Derederenced:" << *numberpointer << endl;
	numberpointer = numberpointer + 1;
	cout << "Number :" << number << endl;
	cout << "Number Pointer:" << numberpointer << endl;
	cout << "Number Pointer Derederenced:" << *numberpointer << endl;
	//Now the number pointer is pointing to some other memory location
	// It will add 8 (8 byets taken by an integer)

}
void arrays_and_pointer()
{
	int array[10];
	cout << "array:" << array << endl;
	cout << "&array[0]:" << &array[0] << endl;
	//the array variable is a pointer to the starting address of the array
	array[0] = 5;
	cout << "array[0]: " << array[0] << endl;
	cout << "*array: " << *array << endl;
	array[1] = 10;
	cout << "*(array+1): " << *(array+1) << endl;
	cout << "Numeber of elements :" << sizeof(array)/sizeof(*array) << endl;

}
void array_userinput()
{
	int arraylength;
	cout << "ENTER THE LENGTH OF THE ARRAY:";
	cin >> arraylength;
	string* list = new string[arraylength];
	for (int i = 0; i < arraylength; i++)
	{
		cout << "Enter List Item " << i + 1 << ":";
		cin >> * (list + i);
	}
	cout << "\nDISPLAYING YOUR LIST";
	for (int i = 0; i < arraylength; i++)
	{
		cout << "\nLIST ITEM " << i + 1 << ":" << *(list + i);
	}
}

void character_array()
{
	//Array of character of size n+1  because the last character is a null character which determines the
	//end of the array \0 neha\0 rohan\0
	char arr[100] = "apple man";
	//cout << sizeof(arr) << endl;
	int i = 0;
	/*while (arr[i] != '\0')
	{
		cout << arr[i] << " ";
		i++;
	}*/
	i = 0;
	string palinname = "NITINA";
	bool palinflag = true;
	const char* palinarray = palinname.c_str();
	while (i < palinname.length()/2)
	{
		if (palinarray[i] != palinarray[palinname.length() - (i+1)])
		{
			palinflag = false;
			break;
		}
		i++;
	}
	palinflag ? cout << "Palindrome" : cout << "not Palindrome";

}

void chararray_pointer()
{
	int int_array[] = { 1,2,3,4,5 };
	char char_array[] = "abcde";

	cout << "INT ARRAY: " << int_array <<endl;
	cout << "CHAR ARRAY: " << char_array <<endl;

	int* intfindex = &int_array[0];
	cout << intfindex << " " << int_array << endl;
	cout << *intfindex << " " << *int_array << endl;
	
	char* charfindex = &char_array[0];
	cout << charfindex << " " << char_array << endl;
	cout << *charfindex << " " << *char_array << endl;
	while (*charfindex != '\0')
	{
		cout << *charfindex << endl;
		charfindex++;
	}
	//UNLIKE ARRAY THE ARRAYVARIALE WHICH IS POINTONH TOWARDD THE STARTING MEMEORY LOCATION
	// However in case of character pointer it is printing until it finds a null index

	char singlechar = 'a';
	char* pointertosinglechar = &singlechar;
	cout << pointertosinglechar << endl; // howver when it is not an array it is printing some garage value

}


int arraysum(int* a,int len)
{
	int i = 0;
	int sum = 0;
	while (i< len)
	{
		sum += *(a + i);
		i++;
	
	}
	return sum;
}
void pointersandfucn()
{
	
	int array[5] = { 1,2,3,4,5 };

	cout << arraysum(array,5) << endl;

}


void pointerMain()
{

	pointersandfucn();

}
