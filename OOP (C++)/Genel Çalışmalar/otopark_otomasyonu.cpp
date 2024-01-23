#include <iostream>
#include <string>
using namespace std;

class Arac {
public:
    string plaka;
    string boyut;
    int girisSaat;

    Arac()
    {}

    Arac(string plaka, string boyut, int girisSaat) 
    {
        this->plaka = plaka;
        this->boyut = boyut;
        this->girisSaat = girisSaat;
    }

    int HesaplaUcret(int cikisSaat) 
    {
        int sure;

        if (cikisSaat < girisSaat) 
        {
            sure = (24 - girisSaat) + cikisSaat;
        }
        else {
            sure = cikisSaat - girisSaat;
        }

        int ucret = 0;

        if (boyut == "kucuk") 
        {
            ucret = 4;
        } else if (boyut == "orta") 
        {
            ucret = 6;
        } else if (boyut == "buyuk") 
        {
            ucret = 7;
        }

        if (sure > 3) 
        {
            ucret += (sure - 3) * (boyut == "kucuk" ? 1 : (boyut == "orta" ? 2 : 3));
        }

        return ucret;
    }
};

int main() 
{
    const int kapasite = 20;
    Arac araclar[kapasite];
    int aracSayisi = 0;
    int toplamKazanc = 0;

    while (true) 
    {
        cout << endl;
        cout << "(1) Arac Girisi\n(2) Arac Cikisi\n(3) Sonlandir\n(4) Otoparktaki Mevcut Araclar\n";
        int secim;
        cout <<"Seciniz: ";
        cin >> secim;

        if (secim == 1) 
        {
            if (aracSayisi >= kapasite) 
                cout << "Otoparkta yer YOK!\n";
            else 
            {
                cout << "Aracin plakasini giriniz: ";
                string plaka;
                cin >> plaka;

                cout << "Aracin buyuklugunu giriniz (kucuk, orta, buyuk): ";
                string boyut;
                cin >> boyut;

                cout << "Aracin giris saati: ";
                int girisSaat;
                cin >> girisSaat;

                araclar[aracSayisi] = Arac(plaka, boyut, girisSaat);
                aracSayisi++;
            }
        } 
        else if (secim == 2) 
        {
            cout << "Aracin plakasini giriniz: ";
            string plaka;
            cin >> plaka;

            cout << "Aracin cikis saati: ";
            int cikisSaat;
            cin >> cikisSaat;

            int i;
            for (i = 0; i < aracSayisi; i++) 
            {
                if (araclar[i].plaka == plaka) 
                {
                    int ucret = araclar[i].HesaplaUcret(cikisSaat);
                    cout << "Aracin odemesi gereken meblag: " << ucret;

                    for (int j = i; j < aracSayisi; j++) 
                    {
                        araclar[j] = araclar[j + 1];
                    }
                    aracSayisi--;

                    toplamKazanc += ucret;
                    break;
                }
            }
        } 
        else if (secim == 3) 
        {
            cout << "Kazanilan Toplam Para: " << toplamKazanc << endl;
            break;
        }
        else if (secim ==4)
        {
            cout << endl;
            for (int x = 0; x < kapasite; x++)
            {
             cout << x + 1 << ")" << araclar[x].plaka << " ";
            }
        }
        else
            cout << "Sadece verilen degerler arasindan bir secim yapabilirsiniz!";
    }
    return 0;
}