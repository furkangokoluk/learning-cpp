#include <iostream>
using namespace std;

class Insan
{
protected:
    string tc;
    string isim;
    string soyisim;

public:
    Insan(string tc = "", string isim = "", string soyisim = "") : tc(tc), isim(isim), soyisim(soyisim) {}
    string getTc() { return tc; }
    string getIsim() { return isim; }
    string getSoyisim() { return soyisim; }
    void setTc(string tc) { this->tc = tc; }
    void setIsim(string isim) { this->isim = isim; }
    void setSoyisim(string soyisim) { this->soyisim = soyisim; }
};

class Ogrenci : public Insan
{
private:
    string ogrenciNo;

public:
    Ogrenci(string ogrenciNo = "", string tc = "", string isim = "", string soyisim = "") : ogrenciNo(ogrenciNo), Insan(tc, isim, soyisim) {}
    string getOgrenciNo() { return ogrenciNo; }
    void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }
    void yazdir()
    {
        cout << "Ogrenci No: " << ogrenciNo << "  TC: " << tc << "  Ismi: " << isim << "  Soyismi: " << soyisim << " " << endl;
    }
};

int main()
{
    Ogrenci kisi("2107231030", "22255689762", "Furkan", "Gokoluk");
    kisi.yazdir();

    return 0;
}
