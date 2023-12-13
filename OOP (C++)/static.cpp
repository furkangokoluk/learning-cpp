#include <iostream>
using namespace std;

class Nokta
{
private:
	static int i;
public:
	Nokta();
	static void Foo();                 // i static de�i�kenini bir fonksiyon i�inde kullanacaksak fonsiyonuda static tan�malamam�y�z!.
	static void Boo();
	~Nokta();

	static int getI();
	static void setI(int);
};

Nokta::Nokta()
{
	i++;
}

void Nokta::Foo()
{
	i++;
}

void Nokta::Boo()
{
	i++;
}

Nokta::~Nokta()
{
	i--;
}

int Nokta::getI()
{
	return i;
}

void Nokta::setI(int _i)
{
	i = _i;
}

int Nokta::i = 0;

int main()
{
	Nokta A;   //1
	Nokta B;   //2
	A.Foo();   //3
	A.Boo();   //4
	B.Foo();   //5
	B.Boo();   //6
	{
		Nokta C;   //7
		C.Foo();   //8
		C.Boo();   //9
	}              //8

	cout << A.getI() << endl;
}