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
	Kolon& operator=(const Kolon&);
	int& operator[](int);
	void operator()(int, int);
	void ara(int);
	void operator++(int);
	void operator++();
	void operator--(int);
	void operator--();
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

Kolon Kolon::operator+(const Kolon& kref)
{
	if (boyut == kref.boyut)
	{
		Kolon temp(boyut);
		for (int i = 0; i < boyut; i++)
			temp.data[i] = data[i] + kref.data[i];
		return temp;
	}
}

Kolon& Kolon::operator=(const Kolon& kref)
{
	delete[] data;
	boyut = kref.boyut;
	data = new int[boyut];
	for (int i = 0; i < boyut; i++)
		data[i] = kref.data[i];
	return *this;
}

int& Kolon::operator[](int indis)
{
	if (indis >= 0 && indis < boyut)
		return data[indis];
}

void Kolon::operator()(int i, int j)
{
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

void Kolon::ara(int deger)
{
	for (int i = 0; i < boyut; i++)
		data[i] += deger;
}

void Kolon::operator++(int)
{
	ara(1);
}

void Kolon::operator++()
{
	ara(2);
}

void Kolon::operator--(int)
{
	ara(-1);
}

void Kolon::operator--()
{
	ara(-2);
}

int main()
{
	srand(time(NULL));

	Kolon k(5);
	for (int i = 0; i < 5; i++)
		k[i] = rand() % 50;

	k.print();

	k++;

	k.print();

	++k;

	k.print();

	k--;

	k.print();

	--k;

	k.print();
}