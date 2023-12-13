#include <iostream>
using namespace std;

int main()
{
	int a = 8;
	a = 1;                  // de�i�ken de�eri hatas�z de�i�tirilebiliyor.

	cout << a << endl;

	const int f = 10;

	//f = 20;                  de�i�ken de�eri de�i�tirilemiyor.
}