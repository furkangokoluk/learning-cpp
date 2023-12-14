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
};

int main()
{
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;
    cout << "Size of Insan: " << sizeof(Insan) << " bytes" << endl;
    cout << "Size of Ogrenci: " << sizeof(Ogrenci) << " bytes" << endl;

    return 0;
}
