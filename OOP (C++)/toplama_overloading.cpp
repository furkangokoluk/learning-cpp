#include <iostream>
#include <time.h>

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
	int* getData()const;
	void setData(int, int);
	double ortHesapla()const;
	Kolon operator+(const Kolon&);
};

Kolon::Kolon(int boyut = 1) : boyut(boyut)
{
	data = new int[boyut];
}

Kolon::Kolon(const Kolon& kref)
{
	this->boyut = kref.boyut;
	data = new int[boyut];

	for (int i = 0; i < boyut; i++)
		data[i] = kref.data[i];
}

Kolon::~Kolon()
{
	delete[] data;
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

int* Kolon::getData()const
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

Kolon Kolon::operator+(const Kolon& ref)
{
	if (boyut == ref.boyut)
	{
		Kolon temp(boyut);
		for (int i = 0; i < boyut; i++)
			temp.data[i] = data[i] + ref.data[i];
		return temp;
	}
}

int main()
{
	srand(time(NULL));
	Kolon k(3);
	Kolon k2(3);
	for (int i = 0; i < 3; i++)
	{
		k.setData(i, rand() % 50);
		k2.setData(i, rand() % 50);
	}

	k.print();
	k2.print();

	(k + k2).print();
}