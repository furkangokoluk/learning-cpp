#include <iostream>
using namespace std;

namespace programci1  //Programci1 i�in tan�mlanan de�erler ve fonskiyonlar� belirtmek i�in..!
{
	int x = 10;
	void foo()
	{
		x = 15;
		cout << x << endl;
	}
}

namespace programci2
{
	int x = 20;
	void foo()
	{
		x = 25;
		cout << x << endl;
	}
}

int main()
{
	cout << programci1::x << endl;  //Programci1 i�in tan�mlanan de�erler ve fonskiyonlar� kullanmak i�in..!
	cout << programci2::x << endl;
	programci1::foo();
	programci2::foo();
}