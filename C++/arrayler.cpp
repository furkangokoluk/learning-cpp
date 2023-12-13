#include <iostream>
using namespace std;

int main()
{
	string array[5];

	for (int i = 0 ; i < 5; i++)
	{
		cout << "Girmek istediginiz " << i+1 << ". metini yaziniz : ";

		cin >> array[i];
	}
	
	cout << "\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Girdiginiz " << i + 1 << ". metin : " << array[i] << endl; 
	}
}