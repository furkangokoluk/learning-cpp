#include <iostream>
using namespace std;

class Nokta
{
public:
	int x, y;

	void degerAta(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	void ekranaYaz()
	{
		if (baslangictaMi() - 1)
			cout << x << "," << y << endl;
	}

	bool baslangictaMi()
	{
		if (x == 0 && y == 0)
			return true;
		else
			return false;
	}
};

int main()
{
	Nokta A;
	Nokta B;
	Nokta* C = &B;
	Nokta* D = new Nokta;
	Nokta array[10]; // Normal array tan�mlamas�!!
	Nokta* pArray = new Nokta[10]; // Pointer array tan�mlamas�!!

	A.degerAta(2, 0);
	A.ekranaYaz();
	if (A.baslangictaMi())
		cout << "A noktasi orjin noktasindadir.." << endl;

	B.degerAta(2, 3);
	B.ekranaYaz();
	if (B.baslangictaMi())
		cout << "B noktasi orjin noktasindadir.." << endl;

	C->ekranaYaz();

	D->degerAta(7, 5);
	D->ekranaYaz();
	if (D->baslangictaMi())
		cout << "D noktasi orjin noktasindadir.." << endl;

	for (int i = 0; i < 10; i++)
	{
		array[i].degerAta(i, i + 2);
		(pArray + sizeof(Nokta) * i)->degerAta(i + 2, i + 5); //Pointer arrayler de bir sonraki indekse ge�mek i�in bu y�ntem kullan�l�r.
	}

	for (int i = 0; i < 10; i++)
	{
		array[i].ekranaYaz();
		(pArray + sizeof(Nokta) * i)->ekranaYaz();
	}
}
