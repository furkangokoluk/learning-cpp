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
	A.setX(-1);
	A.setY(-9);

	cout << A.getX() << "," << A.getY() << endl;
}
