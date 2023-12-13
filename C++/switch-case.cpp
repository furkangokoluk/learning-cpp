#include <iostream>
using namespace std;

int main()
{	
	float a, b, sonu�;
	int i�lem;

	while (true)
	{

		cout << "Islem yapilacak sayilari giriniz :" << endl;

		cin >> a;
		cin >> b;


		cout << "\nToplama -> 1 \nCikar -> 2 \nCarp -> 3 \nBol -> 4 \n\nYapmak istediginiz islemi seciniz : ";

		cin >> i�lem;

		cout << "\n";


		switch (i�lem)
		{
		case 1:
			sonu� = a + b;
			cout << "Toplam : " << sonu�;
			break;

		case 2:
			sonu� = a - b;
			cout << "Cikartim : " << sonu�;
			break;

		case 3:
			sonu� = a * b;
			cout << "Carpim : " << sonu�;
			break;

		case 4:
			sonu� = a / b;
			cout << "Bolum : " << sonu�;
			break;
		}
		cout << "\n---------------------------------------------------------------\n1";
	}
}