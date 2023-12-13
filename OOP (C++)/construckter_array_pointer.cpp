#include <iostream>
using namespace std;

class Nokta
{
private:
	int x, y;
public:
	Nokta();
	Nokta(int, int);


	int getX();
	void setX(int);
	int getY();
	void setY(int);
};

int Nokta::getX() { return x; }
void Nokta::setX(int x) { this->x = x; }

int Nokta::getY() { return y; }
void Nokta::setY(int y) { this->y = y; }

Nokta::Nokta()
{
	x = 0;
	y = 0;
	cout << "Parametresiz kurucu calisti.." << endl;
	cout << "x :" << x << "  y :" << y << endl;
	cout << "\n";
}

Nokta::Nokta(int x, int y)
{
	this->x = x;
	this->y = y;
	cout << "Parametreli kurucu calisti.." << endl;
	cout << "x :" << x << "  y :" << y << endl;
	cout << "\n";
}

int main()
{
	Nokta A;
	Nokta B(3, 5);
}