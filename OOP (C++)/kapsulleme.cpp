#include <iostream>
using namespace std;

class Nokta
{
private:
	int x, y;

public:
	int getX();
	int getY();

	void setX(int);
	void setY(int);
};

int Nokta::getX()
{
	return x;
}

int Nokta::getY()
{
	return y;
}

void Nokta::setX(int _x)
{
	if (_x > 0)
		x = _x;
	else
		x = 0;
}

void Nokta::setY(int _y)
{
	if (_y > 0)
		y = _y;
	else
		y = 0;
}

int main()
{
	Nokta A;
	A.setX(-4);
	A.setY(-3);

	cout << A.getX() << "," << A.getY() << endl;
}
