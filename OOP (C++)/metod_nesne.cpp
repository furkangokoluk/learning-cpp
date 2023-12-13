#include <iostream>
#include <math.h>

using namespace std;

class Nokta
{
private :
	int x, y;
public:
	Nokta(int, int);
	int getX();
	void setX(int);
	int getY();
	void setY(int);
	double uzaklikHesapla(Nokta&);
};

Nokta::Nokta(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Nokta::getX() { return x; }
void Nokta::setX(int x) { this->x = x; }

int Nokta::getY() { return y; }
void Nokta::setY(int y) { this->y = y; }

double Nokta::uzaklikHesapla (Nokta& n)
{
	int xU = pow(n.getX() - x, 2);
	int yU = pow(n.getY() - y, 2);
	
	return sqrt(xU + yU);
}

int main()
{
	Nokta A(3, 4);
	Nokta B(5, 6);

	cout << A.uzaklikHesapla(B) << endl;
}
