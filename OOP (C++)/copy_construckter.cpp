#include <iostream>
using namespace std;

class Nokta
{
private: 
	int x, y;
public:
	const int t;
	int* ptr;

	Nokta();
	Nokta(int, int, int);
	Nokta(const Nokta&);
	~Nokta();

	int getX();
	void setX(int);
	int getY();
	void setY(int);
};

int Nokta::getX() { return x; }
void Nokta::setX(int x) { this->x = x; }

int Nokta::getY() { return y; }
void Nokta::setY(int y) { this->y = y; }

Nokta::Nokta() : t(0)
{
	x = 0;
	y = 0;
	ptr = new int(0);
	cout << "Parametresiz kurucu calisti.." << endl;
	cout << "x :" << x << "  y :" << y << "  t :" << t << "  ptr :" << *ptr << endl;
	cout << "\n";
}

Nokta::Nokta(int x, int y, int t) : t(t)
{
	this->x = x;
	this->y = y;
	ptr = new int(1);
	cout << "Parametreli kurucu calisti.." << endl;
	cout << "x :" << x << "  y :" << y << "  t :" << t << "  ptr :" << *ptr << endl;
	cout << "\n";
}


Nokta::Nokta(const Nokta &ref) : t(ref.t)
{
	x = ref.x;
	y = ref.y;
	ptr = new int(*ref.ptr);
	cout << "Kopyalma kurucusu calisti.." << endl;
	cout << "x :" << x << "  y :" << y << "  t :" << t << "  ptr :" << *ptr << endl;
	cout << "\n";
} 

Nokta::~Nokta()
{
	cout << "Yikici calisti.." << endl;
	cout << "x :" << x << "  y :" << y << "  t :" << t << "  ptr :" << *ptr << endl;
	cout << "\n";
	delete ptr;
}

int main()
{
	Nokta A;
	Nokta B(3, 5, 4);
	Nokta C(B);
}