#include <iostream>

using namespace std;

void main()
{
	string sys_username = "frkn.gklk";
	string sys_password = "123789";

	string kullan�c�ad�;
	string parola;

	while (true)
	{
		cout << "Kullanici adini giriniz : ";
		cin >> kullan�c�ad�;

		cout << "Parolanizi giriniz : ";
		cin >> parola;

		cout << "\n";

		if (kullan�c�ad� == sys_username && parola == sys_password)
		{
			cout << "Hosgeldiniz " << kullan�c�ad� << endl;
			break;
		}

		else if (kullan�c�ad� != sys_username && parola == sys_password)
		{
			cout << "Kullanici adini hatali girdiniz!! Tekrar deneyiniz." << endl;
			cout << "\n";
		}
		
		else if (kullan�c�ad� == sys_username && parola != sys_password)
		{
			cout << "Parolanizi hatali girdiniz!! Tekrar deneyiniz." << endl;
			cout << "\n";
		}
		
		else
		{
			cout << "Kullanici adini ve Parolanizi hatali girdiniz!! Tekrar deneyiniz." << endl;
			cout << "\n";
		}
	}
}