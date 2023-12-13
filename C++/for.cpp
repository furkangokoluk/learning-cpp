#include <iostream>

using namespace std;

void main()
{
	int sayi;
	int fakt�riyel = 1;

	cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz : ";
	cin >> sayi;

	cout << "\n";

	for (int i = 1; i <= sayi; i++) 
	{
		fakt�riyel *= i;

		cout <<i;
		cout << "! : ";
		cout << fakt�riyel << endl;
	}
}