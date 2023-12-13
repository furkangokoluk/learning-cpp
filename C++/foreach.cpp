#include <iostream>
using namespace std;

int main()
{
	int dizi[] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++)
	{
		cout << dizi[i] << endl;
	}

	cout << "\n---------------------------------------------------------------------\n";

	for (int item : dizi)
	{
		cout << item << endl;
	}
}