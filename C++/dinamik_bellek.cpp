#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int size;

	cout << "Kac deger saklayacaksiniz : ";
	cin >> size;

	ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". degeri giriniz : ";
		cin >> ptr[i];
	}

	cout << "\n---------------------------------------------------------------------------\n";

	for (int i = 0; i < size; i++)
		cout << i+1 << ". deger : " << ptr[i] << endl;

	delete[] ptr;
}