#include <iostream>

using namespace std;

void main()
{
	int sayi1 = 8;
	int sayi2 = 3;

	cout << "Sayi1 + Sayi2 : " << sayi1 + sayi2 << endl;
	cout << "Sayi1 - Sayi2 : " << sayi1 - sayi2 << endl;
	cout << "Sayi1 * Sayi2 : " << sayi1 * sayi2 << endl;
	cout << "Sayi1 / Sayi2 : " << float(sayi1) / sayi2;


	cout << "\n\n-----------------------------------------------\n\n";


	int f = 2;
	cout << "f'in degeri : " << f << endl;

	f = f + 1;
	cout << "f'in yeni degeri : " << f << endl;

	f += 1;
	cout << "f'in yeni degeri : " << f << endl;

	f++;
	cout << "f'in yeni degeri : " << f << endl;
}