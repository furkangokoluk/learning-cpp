#include <iostream>
using namespace std;

class Nokta2;

class Nokta
{
private:
	int x;
public:
	int getX();
	void setX(int);

	friend void Foo(Nokta&);                //!!

	void setY(Nokta2&);
};

class Nokta2
{
private:
	int y;
public:
	int getY();
	void setY(int);

	friend class Nokta;                    //!!
}; 

int Nokta::getX() { return x; }
void Nokta::setX(int _x) { x = _x; }

void Nokta::setY(Nokta2& refB) { refB.y = 100; }   //!!

void Foo(Nokta& refA) { refA.x = 0; }              //!!

int Nokta2::getY() { return y; }
void Nokta2::setY(int _y) { y = _y; }

int main()
{
	Nokta A;
	A.setX(3);
	cout << A.getX() << endl;
	Foo(A);
	cout << A.getX() << endl;

	Nokta2 B;
	B.setY(4);
	cout << B.getY() << endl;

	A.setY(B);
	cout << B.getY() << endl;
}