#include <iostream>

using namespace std;

void main()
{
	int sayi1, sayi2, islem;

	cout << "1. islem = Toplama Islemi" << endl;
	cout << "2. islem = Cikarma Islemi" << endl;
	cout << "3. islem = Carpma Islemi" << endl;
	cout << "4. islem = Bolme Islemi" << endl;
	cout << "\n";

	cout << "Islemi giriniz : ";
	cin >> islem;

	cout << "Hesap yapmak istediginiz 2 adet sayiyi giriniz : ";
	cin >> sayi1 >> sayi2;

	cout << "\n";

	if (islem == 1)
		cout << "Toplamlari : " << sayi1 + sayi2 << endl;

	else if (islem == 2)
		cout << "Farklari : " << sayi1 - sayi2 << endl;

	else if (islem == 3)
		cout << "Carpimlari : " << sayi1 * sayi2 << endl;

	else if (islem == 4)
		cout << "Bolumleri : " << float(sayi1) / sayi2 << endl;
	
	else
	cout << "Gecersiz islem girdiniz!!";
}