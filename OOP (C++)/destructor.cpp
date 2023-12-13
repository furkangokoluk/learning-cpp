#include <iostream>
using namespace std;

class Nokta
{
public:
	Nokta();
	~Nokta();

	int* ptr;
};

Nokta::Nokta()
{
	cout << "Kurucu calisti.." << endl;
	ptr = new int(5);
	cout << *ptr << endl;
}

Nokta::~Nokta()
{
	cout << "Yikici calisti.." << endl;
	delete ptr;
}

int main()
{
	Nokta A;
}
