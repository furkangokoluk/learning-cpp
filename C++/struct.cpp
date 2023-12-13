#include <iostream>
using namespace std;

struct Address
{
	int no;
	string cityName;
};

struct Employee
{
	int id = 312;
	string name;
	string department;
	Address* place;
};

int main()
{
	Employee person;
	person.id = 312;
	person.name = "Furkan";
	person.department = "Yazilim";

	Address site;
	site.no = 15;
	site.cityName = "Adana";

	person.place = &site;

	Employee* ptr = &person;

	cout << "Calisanin bilgileri : " << ptr->id << " " << ptr->name << " " 
		<< ptr->department << "\n                      " << ptr->place->no << " " << ptr->place->cityName << endl;
}
