#include <iostream>
using namespace std;

class Nokta
{
public:
	int x, y;

	void degerAta(int, int);

	void ekranaYaz();

	bool baslangictaMi();

};

void Nokta::degerAta(int _x, int _y) //Fonksiyon tipi + class ismi + :: + fonksiyon ad�.. �eklinde tan�mlanmal�..!!
{
	x = _x;
	y = _y;
}

void Nokta::ekranaYaz()
{
	if (baslangictaMi() - 1)
		cout << x << "," << y << endl;
}

bool Nokta::baslangictaMi()
{
	if (x == 0 && y == 0)
		return true;
	else
		return false;
}

int main()
{
	Nokta A;
	Nokta B;

	A.degerAta(2, 0);
	A.ekranaYaz();
	if (A.baslangictaMi())
		cout << "A noktasi orjin noktasindadir.." << endl;

	B.degerAta(0, 0);
	B.ekranaYaz();
	if (B.baslangictaMi())
		cout << "B noktasi orjin noktasindadir.." << endl;
}