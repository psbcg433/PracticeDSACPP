#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_map>

using namespace std;

void stliterator()
{
	unordered_map<string, string> umap;
	cout << "Enter the map elements:  Press 0 to quit......" << endl;

	while (1)
	{
		string typi, user;
		cout << "Type: ";
		cin >> typi;
		if (typi == "0")
		{
			break;
		}
		else
		{
			cout << "Username: ";
			cin >> user;
			umap[typi] = user;
	
		}
	}


	//Iterator is a pointer to a data
	unordered_map<string, string>::iterator it;
	it = umap.begin();
	while (it != umap.end())
	{
		cout << "Type: " << it->first << " Name: " << it->second << endl;
		advance(it, 1);
	}
}
void stlarray()
{
	//Fixed size static array
	array<int, 3> arr = { 1,2,3 };
	cout << "Size of Array: " << arr.size() << endl;
	cout << "Element at index 2 : " << arr.at(2) << endl;
	cout << "Is Array Empty : " << arr.empty() << endl;
	cout << "First Element : " << arr.front() << endl;
	cout << "Last Element : " << arr.back() << endl;

}

void stlvector()
{
	//Dynamic array -> when the size exceed a new array is created and previous array elemnets a
	// copied to new array and then old array us dumped

	vector<int> vectorarr;

	// Size -> number of elements in vector
	// Capacity -> number of elements the vector can hold

	cout << "Capacity -> " << vectorarr.capacity() << endl;
	cout << "Size -> " << vectorarr.size() << endl;

	//push_back -> Inserts an element at end

	vectorarr.push_back(2);


	cout << "Capacity -> " << vectorarr.capacity() << endl;
	cout << "Size -> " << vectorarr.size() << endl;
	vectorarr.push_back(3);
	cout << "Capacity -> " << vectorarr.capacity() << endl;
	cout << "Size -> " << vectorarr.size() << endl;
	vectorarr.push_back(5);
	cout << "Capacity -> " << vectorarr.capacity() << endl;
	cout << "Size -> " << vectorarr.size() << endl;

	cout << "Elemets at 2nd Index -> " << vectorarr.at(2) << endl;
	cout << "Elemets at 1st Index -> " << vectorarr.front() << endl;
	cout << "Elemets at Last Index -> " << vectorarr.back() << endl;

	//pop_back -> removes an element from end
	vectorarr.pop_back();
	cout << "Elemets at 1st Index -> " << vectorarr.front() << endl;
	cout << "Elemets at Last Index -> " << vectorarr.back() << endl;

	// another wat to print contents
	for (int i : vectorarr)
	{
		cout << i << " ";
	}

	//on clearing a vector the elements are removed
	// that is the size becomes zero and not the capacity
	vectorarr.clear();
	cout << "\nCapacity -> " << vectorarr.capacity() << endl;
	cout << "Size -> " << vectorarr.size() << endl;

	//Initializing a vector with default size and elements

	cout << endl << endl << endl;
	
	vector<int> dv(5, 1);
	cout << "Capacity of Vector DV: " << dv.capacity() << endl;
	cout << "Size of Vector DV: " << dv.size() << endl;
	for (int i : dv)
	{
		cout << i << " ";
	}
	dv.push_back(21);
	cout << dv.back() << endl; 

	// copying a vector from another vector
	// Its a deep copy
	vector<int>dvc(dv);
	dvc.push_back(22);
	for (int i : dv)
	{
		cout << i << " " ;
	}
	cout << endl;
	for (int i : dvc)
	{
		cout << i << " " ;
	}
	cout << endl;
	// Inserting a value at any posityion
	dvc.insert(dvc.begin() + 2, 3);
	for (int i : dvc)
	{
		cout << i << " ";
	}
}

void stldeque()
{
	// Double ended Queue - Insertion and Deletion from both ends
	// Dynamically allocated
	deque<int> d;
	//Inserting an element from front 
	d.push_front(2);
	//Insertion an elment from back
	d.push_back(3);
	for (int i : d)
	{
		cout << i << " ";
	}
	//Deletion from front
	d.pop_front();
	for (int i : d)
	{
		cout << i << " ";
	}
	d.push_back(1);
	d.push_front(100);
	for (int i : d)
	{
		cout << i << " ";
	}
	//Deletion from back
	d.pop_back();
	for (int i : d)
	{
		cout << i << " ";
	}
	cout << endl;
	d.push_back(1);
	d.push_back(2);
	d.push_back(4);
	d.push_back(5);
	for (int i : d)
	{
		cout << i << " ";
	}
	cout << endl << "After Erase:";
	d.erase(d.begin(), d.begin()+3);
	for (int i : d)
	{
		cout << i << " ";
	}

}

void stllist()
{
	//Creating a Doubly Linked List
	list <int> l;
	//Copying a list to another list
	list <int> newl(l);
	//Intializing a list
	list <int> dnewl(5, 100);
}


void stlstack()
{
	stack <string> s;
	s.push("BM");
	s.push("PB");
	s.push("SN");
	s.push("SP");
	s.push("MS");

	cout << "Top element in stack: " << s.top() << endl;
	cout << "Size of stack: " << s.size() << endl;
	//pop -> Take out the last element
	s.pop();
	cout << s.top() << endl;	
}

void stlqueye()
{
	queue<string> sq;
	sq.push("Meha");
	sq.push("Mon");
	sq.push("Mayan");
	cout << sq.front() << endl;
	sq.pop();
	cout << sq.front() << endl;
}

void stlset()
{
	//Only stores unique elements 
	// done using BST 
	// returns in sorted order
	// unorderd set retuns in unsorted order

	set <int> myset;
	myset.insert(1);
	myset.insert(2);
	myset.insert(2);
	myset.insert(3);
	myset.insert(9);
	myset.insert(2);
	myset.insert(4);
	myset.insert(5);

	for (int i : myset)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << endl << "Printing via MySET Iterator" << endl;

	set<int>::iterator it = myset.begin();
	while (it != myset.end())
	{
		cout << *it << " ";
		advance(it, 1);
	}
	cout << endl << "Using find iterator" << endl;
	auto itr = myset.find(51); // returns iteratort to the element if found otherwise  returns end()
	if (itr != myset.end())
	{
		cout << "Element found";
	}
	else
	{
		cout << "Element not found";
	}
}

void l01stllibrarymain()
{
	stlvector();
}