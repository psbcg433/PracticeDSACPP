#include <iostream>
using namespace std;

void understanding2Dmemaloc()
{
	int mdarray[2][3] = { {1,2,3},{3,4,5} };
	cout << mdarray << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << *(*(mdarray + i) + j) << " is same as " << mdarray[i][j] << endl;
			cout << (*(mdarray+i) + j) << " is same as " << &mdarray[i][j]<< endl;
		}
	}
}
void understanding3dmemaloc()
{
	int md3array[3][2][2] = { {{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}} };
	cout << "Printing the elements of the 3d Array:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << *(*(*(md3array + i) + j) + k) << " is same as " << md3array[i][j][k] << endl;
				cout << (*(*(md3array + i) + j) + k) << " is same as " << &md3array[i][j][k] << endl;
			}
		}
	}
}


void mdArrayPointerMain()
{
	
	understanding3dmemaloc();
}