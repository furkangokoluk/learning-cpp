#include <iostream>
using namespace std;

int fakt�rial(int sayi)
{
	int fakt�riyel = 1;

	for(int i = 2 ; i <= sayi ; i++)
	{
		fakt�riyel = i * fakt�riyel;
	}

	return fakt�riyel;
}

int main ()
{
	while (true)
	{
		int sayi, sonu�;

		cout << "Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ";
		cin >> sayi;

		sonu� = fakt�rial(sayi);

		cout << "Faktoriyelin sonucu : " << sonu� << endl;
		cout << "\n";
		cout << "------------------------------" << endl;
		cout << "\n";
	}
}