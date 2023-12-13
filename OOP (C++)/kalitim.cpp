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
	��renci(string ogrenciNo="", string tc = "", string isim="", string soyisim="") : ogrenciNo(ogrenciNo), �nsan(tc,isim,soyisim) {}
	string getOgrenciNo() { return ogrenciNo; }
	void setOgrenciNo(string ogrenciNo) { this->ogrenciNo = ogrenciNo; }
};

int main()
{
	�nsan ki�i1("22255762689", "Furkan", "Gokoluk");
	cout << ki�i1.getTc() << " " << ki�i1.get�sim() << " " << ki�i1.getSoyisim() << endl;
	
	��renci ki�i2("2107231030", "22255762689", "Furkan", "Gokoluk");
	cout << ki�i2.getOgrenciNo() << " " << ki�i2.getTc() << " " << ki�i2.get�sim() << " " << ki�i2.getSoyisim() << endl;
}