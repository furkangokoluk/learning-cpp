#include <iostream>
using namespace std;

void printArray(const int* ptr1, const int* ptr2)
{
	for (; ptr1 != ptr2; ptr1++)                      // Const olan pointerlarda pointer�n de�erini de�i�tirebiliriz fakat
	{												  // pointer�n g�sterdi�i de�er de�i�tirimeyiz!!
		cout << *ptr1 << endl;
	}
}

int main()
{
	int array[] = { 10,20,30,40,50,60,70,80,90 };

	printArray(array + 2, array + 7);
}