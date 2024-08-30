#include <iostream>
using namespace std;
//Print number in decresing order

void print_decreasing(int n)
{
	if (n == 1)
		cout << "1" << endl;
	else
	{
		cout << n << endl;
		print_decreasing(n - 1);
	}
		
}
//Print number in increasing order

void print_increasing(int n)
{
	if (n == 1)
	{
		cout << "1" << endl;
	}
	else
	{
		print_increasing(n - 1);
		cout << n << endl;
	}
}

//print increasing and decreasing

void print_increasing_decreasing(int n)
{
	if (n == 1)
	{
		cout << "1" << endl;
		return;
	}
	cout << n << endl;
	print_increasing_decreasing(n - 1);
	cout << n << endl;
}


// Recursively print the factorial of a number
int recursive_factorial(int n)
{
	if (n == 1)
	{
		cout << " = ";
		return 1;
	}
	cout << n <<  " X ";
	return n * recursive_factorial(n - 1);
}

//Print the power of a number recursively

int print_power(int m, int n)
{
	if (n == 1)
		return m;
	return m * print_power(m, n - 1);
}

int print_power_log(int m, int n)
{
	if (n == 0)
		return 1;
	int mpnb2 = print_power_log(m, n / 2);
	int mp = mpnb2 * mpnb2;
	if (n % 2 == 1)
		mp *= m;
	
	return mp;
}

void printzz(int n)
{
	if (n == 0)
		return;
	cout << " Pre :" << n << endl;
	printzz(n - 1);
	cout << " In: " << n << endl;
	printzz(n - 1);
	cout << " Post: " <<  n << endl;
	printzz(n - 1);
	cout << " Out: " << n << endl;
}

void l01recursionmain()
{
	printzz(2);

}