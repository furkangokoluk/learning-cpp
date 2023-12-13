#include <iostream>
using namespace std;

int a;

class Nokta
{
private:
	int x, y;
public:
	const int t;
	Nokta(int, int, int);

	int getX()const;
	void setX(int);

	int getY()const;
	void setY(int);
};

int Nokta::getX()const 
{ 
	a = 100;
	return x; 
}
void  Nokta::setX(int x) { this->x = x; }

int Nokta::getY()const 
{ 
	a = 100;  // Bu metotta yaln�z s�n��n harici d���ndaki bir de�i�kene m�dahale edilebilir!.
	return y;
}
void  Nokta::setY(int y) { this->y = y; }

Nokta::Nokta(int x = 10, int y = 20, int t = 0) : t(t)
{
	this->x = x;
	this->y = y;
}


int main()
{
	Nokta A(10, 20, 30);
	cout << "x : " << A.getX() << "\n" << "y : " << A.getY() << "\n" << "t : " << A.t << endl;

	cout << "\n";

	const Nokta B(40, 50, 60);
	//B.setX(3) B.setY(5);       const nesneler i�in kullan�lamaz!.
	//cout << "x : " << B.getX() << "\n" << "y : " << B.getY() << "\n" << "t : " << B.t << endl;      const nesneler i�in kullan�lamaz!.

	cout << "a : " << a << endl;
}