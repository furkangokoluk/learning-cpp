#include <iostream>

using namespace std;

void main()
{
	string passaword = "123789";
	string imput;
	

	do
	{
		cout << "Parolayi giriniz : ";
		cin >> imput;

		if (imput != passaword)
			cout << "Parolayi yanlis girdiniz!! Lutfen tekrar deneyiniz.." << endl;


	} while (imput != passaword);

	cout << "Giris yapildi." << endl;
}

