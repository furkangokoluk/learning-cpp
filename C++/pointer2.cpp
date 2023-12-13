#include <iostream>
using namespace std;

// call by value

void degisken_degistir(int ay) 
{
	ay = 20;

	cout << "a degiskeninin fonksiyon icindeki degeri : " << ay << endl;

}

//Call By Referance

void degisken_degistir2(int *by)
{
	*by = 20;

	cout << "b degiskeninin fonksiyon icindeki degeri : " << *by << endl;
}

int main()
{
	cout << "Call By Value \n-------------------------------------------------------------" << endl;
	
	int a = 10;

	cout << "a degiskenin degeri : " << a << endl;

	degisken_degistir(a);

	cout << "a degiskeninin fonksiyon bittikten sonraki yeni degeri : " << a << endl;

	cout << "\n";

	cout << "Call By Referance \n-------------------------------------------------------------" << endl;

	int b = 10;

	cout << "b degiskenin degeri : " << b << endl;

	degisken_degistir2(&b);

	cout << "b degiskeninin fonksiyon bittikten sonraki yeni degeri : " << b << endl;
}