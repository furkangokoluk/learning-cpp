#include <iostream>
using namespace std;

class Nokta
{
private:
	int x;

public:
	int  y;

	void degerAta(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	void ekranaYaz()
	{
		cout << x << "," << y << endl;
	}
};

int main()
{
	Nokta A;

	//A.x = 10;        x private oldugu icin sinif disindan bir yerden erisilip tanimlanamaz!!
	A.y = 20;

	A.degerAta(2, 0);
	A.ekranaYaz();
}