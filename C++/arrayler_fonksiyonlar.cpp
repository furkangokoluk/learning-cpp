#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << endl;
}

int main()
{
	int f[] = { 3,1,9,7,5,2,6,0 };

	printArray(f, 8);
}