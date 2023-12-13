#include <iostream>
using namespace std;

class Kolon
{
private:
	int* data;
	int boyut;
public:
	Kolon(int);
	Kolon(const Kolon&);
	~Kolon();

	int getBoyut();
	void setBoyut(int);
	void print();
	int *getData()const;
	void setData(int, int);
	double ortHesapla()const;
};

Kolon::Kolon(int boyut = 1) : boyut(boyut)
{
	data = new int[boyut];
	cout << boyut << " elamanli bir dizi olusturuldu.." << endl;
}

Kolon::Kolon(const Kolon &kref)
{
	cout << "Kopyalama kurucusu calisti.." << endl;

	this->boyut = kref.boyut;
	data = new int[boyut];

	for (int i = 0; i < boyut; i++)
		data[i] = kref.data[i];
}

Kolon::~Kolon()
{
	delete[] data;
	cout << "Yikici calisti, dizi silindi.." << endl;
}

void Kolon::print()
{
	for (int i = 0; i < boyut; i++)
		cout << data[i] << " ";
	cout << "\n" << "\n";
}

int Kolon::getBoyut()
{
	return boyut;
}

void Kolon::setBoyut(int boyut)
{
	this->boyut = boyut;
}

int *Kolon::getData()const
{
	return data;
}

void Kolon::setData(int indis, int deger)
{
	if (indis < boyut)
		data[indis] = deger;
}

double Kolon::ortHesapla()const
{
	int ara = 0;
	for (int i = 0; i < boyut; i++)
		ara += data[i];
	return (double)ara / boyut;
}

int main()
{
	Kolon k(6);

	k.setData(0, 3);
	k.setData(1, 1);
	k.setData(2, 2);
	k.setData(3, 4);
	k.setData(4, 3);
	k.setData(5, 6);
	k.print();

	Kolon k2(k);
	k2.print();

	cout << "k'nin ortalamasi: " << k.ortHesapla() << endl;
}