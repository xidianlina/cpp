#ifndef CPMV_H_
#define CPMV_H_

#include <iostream>
#include <string>

using namespace std;

class Cpmv
{
public:
	struct Info
	{
		string qcode;
		string zcode;
	};
private:
	Info *pi;
public:
	Cpmv();
	Cpmv(string q, string z);
	Cpmv(const Cpmv &cp);
	Cpmv(Cpmv &&mv);
	~Cpmv();
	Cpmv &operator=(const Cpmv &cp);
	Cpmv &operator=(Cpmv &&mv);
	Cpmv operator+(const Cpmv &obj)const;
	void Display()const;
};

Cpmv::Cpmv()
{
	pi = new Info;
	pi->qcode = "Nothing";
	pi->zcode = "Nothing";
	cout << "Default constructor called:\n";
	Display();
}

Cpmv::Cpmv(string q, string z)
{
	pi = new Info;
	cout << "String constructor called:\n";
	pi->qcode = q;
	pi->zcode = z;
	Display();
}

Cpmv::Cpmv(const Cpmv &cp)
{
	pi = new Info;
	cout << "Copy constructor called:\n";
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	Display();
}

Cpmv::Cpmv(Cpmv &&mv)
{
	pi = new Info;
	cout << "Move constructor called:\n";
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi->qcode = "Nothing";
	mv.pi->zcode = "Nothing";
	Display();
}

Cpmv::~Cpmv()
{
	cout << "Destruct called!\n";
	delete pi;
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
	cout << "Copy assignment operator called:\n";
	if (this == &cp)
		return *this;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	Display();
	return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv)
{
	cout << "Move assignment operator called:\n";
	if (this == &mv)
		return *this;
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi->qcode = "Nothing";
	mv.pi->zcode = "Nothing";
	Display();
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj)const
{
	cout << "Plus assignment operator called!\n";
	Cpmv temp;
	temp.pi->qcode = pi->qcode + obj.pi->qcode;
	temp.pi->zcode = pi->zcode + obj.pi->zcode;
	return temp;
}

void Cpmv::Display()const
{
	cout << pi->qcode << "," << pi->zcode << endl;
}
#endif