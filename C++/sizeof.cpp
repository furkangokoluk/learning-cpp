#include <iostream>
using namespace std;

struct student
{
	int no;
	char letter;
};

int main()
{
	cout << "Integer : " << sizeof(int) << endl;
	cout << "Char : " << sizeof(char) << endl;
	cout << "Double : " << sizeof(double) << endl;
	cout << "Float : " << sizeof(float) << endl;
	cout << "Struct : " << sizeof(student) << endl;
	cout << "String : " << sizeof(string) << endl;
}