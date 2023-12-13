#include <iostream>

using namespace std;

void main()
{
	string sys_username = "furkan.gklk";
	string sys_passaword = "123789";

	string username;
	string passaword;

	cout << "Kullanici adini giriniz : ";
	cin >> username;

	cout << "Parolanizi giriniz : ";
	cin >> passaword;

	if (sys_username == username && sys_passaword == passaword)
		cout << "Giris yapildi.." << endl;

	else if (sys_username != username && sys_passaword == passaword)
		cout << "Kullanici adi hatali!!" << endl;

	else if (sys_username == username && sys_passaword != passaword)
		cout << "Parola hatali!!" << endl;

	else
		cout << "Kullanici adi ve Parola hatali!!" << endl;
}