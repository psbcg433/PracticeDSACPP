#include <iostream>
using namespace std;



void towerofhanoi(int n, char source, char destinantion, char helper)
{
	// shall remeber its previous value when the function is called
	static char original_source = source;
	static char original_destination = destinantion;
	static int disccount = n;
	static int move = 0; 

	if (n == 0)
		return;
	towerofhanoi(n - 1, source, helper, destinantion);
	move++;
	cout << "MOVE "<< move <<" :"<<n << " [ " << source << " --> " << destinantion << " ] " << endl;
	towerofhanoi(n - 1, helper, destinantion, source);

	//check for last move
	if (n == disccount && source == original_source && destinantion == original_destination)
		cout << "Total Moves = " << move;

	
}

//printing array backwards
void print_array(int* arr, int indx)
{
	if (indx == 0)
	{
		cout << *(arr + indx) << endl;
		return;
	}
	cout << "Index:" << indx << endl;
	cout << *(arr + indx) << endl;
	print_array(arr, indx - 1);

}

//printing array forward
void print_array_forward(int* arr, int indx, int len)
{
	if (indx == len)
		return;
	cout << *(arr + indx) << endl;
	print_array_forward(arr, indx + 1, len);
}

int maxinarray(int* arr, int indx, int len)
{
	if (indx == len-1)
		return *(arr+indx);
	int misa = maxinarray(arr, indx + 1, len);
	return misa >= *(arr + indx) ? misa : *(arr + indx);
}

int* allindexoccurance(int* arr, int indx, int len, int value,int indxcnt)
{
	
	if (indx == len)
	{
		return new int[indxcnt];
	}
	int* indxarr;
	if (*(arr+indx) == value)
	{
		indxarr = allindexoccurance(arr, indx + 1, len, value, indxcnt + 1);
		*(indxarr + indxcnt) = indx;
		
	}
	else
	{
		indxarr=allindexoccurance(arr, indx + 1, len, value, indxcnt);
		
	}
	return indxarr;
}

int firstindexoccurance(int* arr, int indx, int len, int value)
{
	if (indx == len)
		return -1;
	else if (*(arr + indx) == value)
		return indx;
	else
		return firstindexoccurance(arr, indx + 1, len, value);

}


int lastindexoccurence(int* arr, int indx, int len, int value)
{
	if (indx == len)
		return -1;
	int lastindex = lastindexoccurence(arr, indx + 1, len, value);
	if (lastindex == -1)
	{
		if (*(arr + indx) == value)
		{
			return indx;
		}
		else
		{
			return -1;
		}
	}
}


void l02recursionmain()
{
	int arr[] = { 1,2,3,2,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* indxarr = allindexoccurance(arr, 0, size, 2, 0);
	cout << "Value  found at indices: ";
	for (int i = 0; i <2 ; i++) {
		cout << indxarr[i] << " ";
	}
	cout << endl;

}