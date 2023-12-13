#include <iostream>
using namespace std;

class �nsan
{
protected:
	string tc;
	string isim;
	string soyisim;
public:
	�nsan(string tc = "", string isim = "", string soyisim = "") : tc(tc), isim(isim), soyisim(soyisim) {}
	string getTc() { return tc; }
	string get�sim() { return isim; }
	string getSoyisim() { return soyisim; }
	void setTc(string tc) { this->tc = tc; }
	void set�sim(string isim) { this->isim = isim; }
	void setSoyisim(string soyisim) { this->soyisim = soyisim; }

};

class ��renci : public �nsan
{
private:
	string ogrenciNo;
public:
	��renci(string ogrenciNo = "", string tc = "", string isim = "", string soyisim = "") : ogrenciNo(ogrenciNo), �nsan(tc, isim, soyisim) {}
	string getOgrenciNo() { return ogrenciNo; }
	void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }
	void yazd�r()
	{
		cout << "Ogrenci No: " << ogrenciNo << "  TC: " << tc << "  Ismi: " << isim << "  Soyismi: " << soyisim << " " << endl;
	}
};

int main()
{
	��renci ki�i("2107231030","22255689762","Furkan", "Gokoluk");
	ki�i.yazd�r();          //private tan�mlansayd� sadece taban s�n�ftan eri�ilebilirdi t�remi� s�n�ftan eri�ilmesine izin verilmezdi.
	
//	ki�i.tc                 protected tan�mland��� i�in sadece taban s�n�f ve t�remi� s�n�f i�inde eri�ilebilir.
}