#include <iostream>
#include <math.h>

using namespace std;

class Nokta
{
private:
	int x, y;
public:
	Nokta(int, int);
	int getX();
	void setX(int);
	int getY();
	void setY(int);
	double uzaklikHesapla(Nokta&);
	void ekranayaz();
};


class Cizgi
{
private:
	Nokta baslangic;
	Nokta bitis;
public:
	Cizgi(Nokta, Nokta);
	double uzunluk();
	void yazdir();
};

Cizgi::Cizgi(Nokta baslangic, Nokta bitis) : baslangic(baslangic), bitis(bitis) {}

double Cizgi::uzunluk()
{
	return baslangic.uzaklikHesapla(bitis);
}

void Cizgi::yazdir()
{
	cout << "Baslangic noktasi: ";
	baslangic.ekranayaz();
	cout << "Bitis noktasi: ";
	bitis.ekranayaz();
	cout << "Cizginin uzunlugu: " << uzunluk() << endl;
}

Nokta::Nokta(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Nokta::getX() { return x; }
void Nokta::setX(int x) { this->x = x; }

int Nokta::getY() { return y; }
void Nokta::setY(int y) { this->y = y; }

double Nokta::uzaklikHesapla(Nokta& n)
{
	int xU = pow(n.getX() - x, 2);
	int yU = pow(n.getY() - y, 2);

	return sqrt(xU + yU);
}

void Nokta::ekranayaz()
{
	cout << x << "," << y << endl;
}

int main()
{
	Cizgi AB(Nokta(3, 5), Nokta(7, 1));
	AB.yazdir();
}
