#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sys_username = "frkn.gklk";
    string sys_password = "123789";

    string kullaniciadi;
    string parola;

    while (true)
    {
        cout << "Kullanici adini giriniz: ";
        cin >> kullaniciadi;

        cout << "Parolanizi giriniz: ";
        cin >> parola;

        cout << "\n";

        if (kullaniciadi == sys_username && parola == sys_password)
        {
            cout << "Hosgeldiniz " << kullaniciadi << endl;
            break;
        }
        else if (kullaniciadi != sys_username && parola == sys_password)
        {
            cout << "Kullanici adini hatali girdiniz!! Tekrar deneyiniz." << endl;
            cout << "\n";
        }
        else if (kullaniciadi == sys_username && parola != sys_password)
        {
            cout << "Parolanizi hatali girdiniz!! Tekrar deneyiniz." << endl;
            cout << "\n";
        }
        else
        {
            cout << "Kullanici adini ve Parolanizi hatali girdiniz!! Tekrar deneyiniz." << endl;
            cout << "\n";
        }
    }

    return 0;
}
