#include <iostream>
using namespace std;

int main()
{
    float a, b, sonuc;
    int islem;

    while (true)
    {
        cout << "Islem yapilacak sayilari giriniz :" << endl;

        cin >> a;
        cin >> b;

        cout << "\nToplama -> 1 \nCikar -> 2 \nCarp -> 3 \nBol -> 4 \n\nYapmak istediginiz islemi seciniz : ";
        cin >> islem;

        cout << "\n";

        switch (islem)
        {
        case 1:
            sonuc = a + b;
            cout << "Toplam : " << sonuc;
            break;

        case 2:
            sonuc = a - b;
            cout << "Cikartim : " << sonuc;
            break;

        case 3:
            sonuc = a * b;
            cout << "Carpim : " << sonuc;
            break;

        case 4:
            sonuc = a / b;
            cout << "Bolum : " << sonuc;
            break;
        }

        cout << "\n---------------------------------------------------------------\n";
    }

    return 0;
}
