#include <iostream>
using namespace std;

void degiskendegistir(int &ref)
{
	ref = 20;
}

int main()
{
	int a = 10;
	
	cout << "a nin degeri : " << a << endl;

	degiskendegistir(a);

	cout << "a nin yeni degeri : " << a << endl;
}