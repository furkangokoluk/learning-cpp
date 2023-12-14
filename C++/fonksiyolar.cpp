#include <iostream>

using namespace std;

int faktorial(int sayi)
{
    int faktoriyel = 1;

    for (int i = 2; i <= sayi; i++)
    {
        faktoriyel = i * faktoriyel;
    }

    return faktoriyel;
}

int main()
{
    while (true)
    {
        int sayi, sonuc;

        cout << "Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ";
        cin >> sayi;

        sonuc = faktorial(sayi);

        cout << "Faktoriyelin sonucu : " << sonuc << endl;
        cout << "\n";
        cout << "------------------------------" << endl;
        cout << "\n";
    }

    return 0;
}
