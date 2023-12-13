#include <iostream>
using namespace std;

struct Employee
{
	int �d;
	string name;
	string department;
};

int main()
{
	Employee person1 = { 312,"Furkan","Yazilim" };
	Employee person2 = { 516,"Seyma","Iktisat" };

	Employee* ptr = &person2;
	
	cout << "1. Calisanin bilgileri : " << person1.�d << " " << person1.name << " " << person1.department << endl;
	cout << "2. Calisanin bilgileri : " << ptr->�d << " " << ptr->name << " " << ptr->department << endl;
}