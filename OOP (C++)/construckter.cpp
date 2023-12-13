#include <iostream>
using namespace std;

class Nokta
{
private:
	int x, y;

public:
	//Nokta();
	Nokta(int, int);

	int getX();
	int getY();

	void setX(int);
	void setY(int);
};

/*Nokta::Nokta()
{
	x = 10;
	y = 10;
} */

Nokta::Nokta(int x = 0, int y = 0)
{
	if (x > 0)
		this->x = x;
	else
		this->x = 0;

	if (y > 0)
		this->y = y;
	else
		this->y = 0;
}

int Nokta::getX()
{
	return x;
}

int Nokta::getY()
{
	return y;
}

void Nokta::setX(int x)
{
	if (x > 0)
		this->x = x;
	else
		this->x = 0;
}

void Nokta::setY(int y)
{
	if (y > 0)
		this->y = y;
	else
		this->y = 0;
}

int main()
{
	Nokta A;
	A.setX(-4);
	A.setY(3);

	Nokta B(2,-6);

	cout << A.getX() << "," << A.getY() << endl;
	cout << B.getX() << "," << B.getY() << endl;
}
