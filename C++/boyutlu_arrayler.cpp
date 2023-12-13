#include <iostream>
using namespace std;

int main()
{
	int matris[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Matris degerini giriniz : ";
			cin >> matris[i][j];
		}
	}

	cout << "\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<  matris[i][j] ;
		}
		cout << "\n";
	}
}