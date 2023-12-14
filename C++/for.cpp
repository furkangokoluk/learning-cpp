#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int faktoriyel = 1;

    cout << "Faktoriyelini bulmak istediginiz sayiyi giriniz : ";
    cin >> sayi;

    cout << "\n";

    for (int i = 1; i <= sayi; i++)
    {
        faktoriyel *= i;

        cout << i;
        cout << "! : ";
        cout << faktoriyel << endl;
    }

    return 0;
}
