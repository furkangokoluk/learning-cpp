#include <iostream>
using namespace std;

int main()
{
	int a = 8;
	a = 1;                  // degisken degeri hatasiz degistirilebiliyor.

	cout << a << endl;

	const int f = 10;

	//f = 20;                  degisken degeri degistirilemiyor.
}