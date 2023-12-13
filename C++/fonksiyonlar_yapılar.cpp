#include <iostream>
using namespace std;

struct Employee
{
	int id;
	string name;
	string department;
};

void show(Employee person)
{
	cout << "Calisanin bilgileri : " << person.id << " " << person.name << " " << person.department << endl;
}

void ptrshow(Employee* person)
{
	cout << "Calisanin bilgileri : " << person->id << " " << person->name << " " << person->department << endl;
}

int main()
{
	Employee person1 = { 312,"Furkan","Yazilim" };
	show(person1);

	Employee person2 = { 516,"Seyma","Iktisat" };
	ptrshow(&person2);
}