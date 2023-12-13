#include <iostream>
using namespace std;

class Nokta
{
public:
	int x, y;

	const int t;
	Nokta(int, int, int);
};


Nokta::Nokta(int x = 10, int y = 20, int t = 0) : t(t) // t ifadesi bu kullan�mla istedi�imiz say�ya atanabilir..
{
	this->x = x;
	this->y = y;
	// this->t = t  const bir ifade oldugu icin degistirelemez!.
}

int main()
{
	Nokta A(10, 20, 30);

	cout << "x : " << A.x << "\n" << "y : " << A.y << "\n" << "t : " << A.t << endl;
	
	// A.t = 3   const bir ifade oldugu icin degistirelemez!.
 }