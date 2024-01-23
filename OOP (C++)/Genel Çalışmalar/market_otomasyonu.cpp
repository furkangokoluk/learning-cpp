#include <iostream>
using namespace std;

class Mal
{
    public:
    string malAdi;
    int malFiyati;
    
    Mal(){}

    Mal(string malAdi, int malFiyati)
    {
        this->malAdi = malAdi;
        if (malFiyati < 0)
            this->malFiyati = 0;
        else
            this->malFiyati = malFiyati;
    }
};

class Musteri
{
    public:
    string musteriAdi;
    int musteriPromosyonu;
    float hesaplanmisOdeme;
    float indirimliOdeme;
    Mal sepet[30];
    int urunSayisi = 0;

    Musteri()
    {
        musteriAdi = "Bilinmiyor";
        musteriPromosyonu = 100;
        hesaplanmisOdeme = 0;
        indirimliOdeme = 0;
    }

    Musteri(string musteriAdi)
    {
        this->musteriAdi = musteriAdi;
        musteriPromosyonu = 100;
        hesaplanmisOdeme = 0;
        indirimliOdeme = 0;
    }

    Musteri(string musteriAdi, float musteriPromosyonu)
    {
        this->musteriAdi = musteriAdi;
        if (musteriPromosyonu < 0 || musteriPromosyonu > 100)
        {
            musteriPromosyonu = 100; 
        }
        else
        {
            this->musteriPromosyonu = musteriPromosyonu;
        }
        hesaplanmisOdeme = 0;
        indirimliOdeme = 0;
    }

    void malEkle(string &malAdi, int malFiyati)
    {
        sepet[urunSayisi] = Mal (malAdi, malFiyati);
        urunSayisi++;
        if (malFiyati < 0)
            malFiyati = 0 ;
        hesaplanmisOdeme +=  malFiyati;
        indirimliOdeme = (hesaplanmisOdeme * musteriPromosyonu) / 100;
    }

    void malSil(string MalAdi)
    {
        int i;
        for(i = 0; i < urunSayisi; i ++)
        {
            if (sepet[i].malAdi == MalAdi)
            {
                int silinecekFiyat = sepet[i].malFiyati;
                for(int j = i ; j < urunSayisi ; j++)
                {
                    sepet[j] = sepet[j + 1];
                }
                urunSayisi--;
                hesaplanmisOdeme -= silinecekFiyat;
                indirimliOdeme = (hesaplanmisOdeme * musteriPromosyonu)/100;
            }
        }
    }
    void malListele()
    {
        for (int i = 0; i < urunSayisi; i++)
        {
            cout << i + 1 << ". " << sepet[i].malAdi << "   " << sepet[i].malFiyati << endl;
        }
            cout << "Toplam Tutar: " << hesaplanmisOdeme << endl;
            cout << "Indirimli Tutar: " << indirimliOdeme << endl;
    }
};


int main()
{
    Musteri m1("Furkan");
    Musteri m2("Kardelen",70);
    Musteri m3;

    while (true)
    {
        cout << "(1) " << m1.musteriAdi << "\n(2) " << m2.musteriAdi <<"\n(3) "<< m3.musteriAdi <<"\n" << "(4) Sonlandir\n";
        cout << "Seciniz :";
        int secim;
        int kisi;
        cin >> kisi;

        if(kisi == 4)
            break;

        switch (kisi)
        {
        case 1:
            cout << "(1) Mal Ekle\n(2) Mal Sil\n(3) Mallari Listele\n";
            cout << "Seciniz :";
            cin >> secim;

            if (secim == 1)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                cout << "Malin fiyatini giriniz :";
                int _malFiyati;
                cin >> _malFiyati;
                m1.malEkle(_malAdi, _malFiyati);
            }
            else if (secim == 2)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                m1.malSil(_malAdi);
            }
            else if (secim == 3)
            {
                m1.malListele();
            }
            break;

        case 2:
            cout << "(1) Mal Ekle\n(2) Mal Sil\n(3) Mallari Listele\n";
            cout << "Seciniz :";
            cin >> secim;

            if (secim == 1)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                cout << "Malin fiyatini giriniz :";
                int _malFiyati;
                cin >> _malFiyati;
                m2.malEkle(_malAdi, _malFiyati);
            }
            else if (secim == 2)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                m2.malSil(_malAdi);
            }
            else if (secim == 3)
            {
                m2.malListele();
            }
            break;

        case 3:
            cout << "(1) Mal Ekle\n(2) Mal Sil\n(3) Mallari Listele\n";
            cout << "Seciniz :";
            cin >> secim;

            if (secim == 1)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                cout << "Malin fiyatini giriniz :";
                int _malFiyati;
                cin >> _malFiyati;
                m3.malEkle(_malAdi, _malFiyati);
            }
            else if (secim == 2)
            {
                cout << "Malin adini giriniz :";
                string _malAdi;
                cin >> _malAdi;
                m3.malSil(_malAdi);
            }
            else if (secim == 3)
            {
                m3.malListele();
            }
            break;

        default:
            cout << "Belirtilen Secenklerden Birini Secmediniz!! Tekrar Deneyiniz!!" << endl;
            break;
        }
    }
}