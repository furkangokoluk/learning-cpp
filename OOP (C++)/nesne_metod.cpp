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
	Nokta topla(const Nokta&)const;
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

Nokta Nokta::topla(const Nokta& n)const
{
	int Tx = x + n.x;
	int Ty = y + n.y;

	return Nokta(Tx, Ty);
}

int main()
{
	Nokta A(3, 5);
	Nokta B(5, 7);
	Nokta C = A.topla(B);

	cout << C.getX() << "," << C.getY() << endl;
}
