#include <iostream>
using namespace std;

int main()
{
	int array[] = { 1,2,3,4,5 };
	int *ptr = array;

	cout << ptr << endl;
	cout << array << endl;

	cout << "----------------------------------------------" << endl;

	cout << ptr + 1 << endl;
	cout << array + 1 << endl;

	cout << "----------------------------------------------" << endl;

	cout << *(ptr + 1) << endl;
	cout << array[1] << endl;

	cout << "----------------------------------------------" << endl;

	cout << ptr[1] << endl;
	cout << array[1] << endl;

	cout << "----------------------------------------------" << endl;

	cout << ptr[3] << endl;
	cout << array[3] << endl;
}