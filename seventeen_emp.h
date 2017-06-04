//#ifndef EMP_H_
//#define EMP_H_
//
//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//enum classtype{ Employee, Manager, Fink, Highfink };
//
//class abstr_emp
//{
//private:
//	string fname;
//	string lname;
//	string job;
//public:
//	abstr_emp();
//	abstr_emp(const string &fn, const string &ln,
//		const string &j);
//	virtual void ShowAll()const;
//	virtual void SetAll();
//	friend ostream&operator<<(ostream&os, const abstr_emp&e);
//	virtual ~abstr_emp() = 0;
//	virtual void writeall(ofstream&ofs);
//	virtual void getall(ifstream&ifs);
//};
//
//class employee :public abstr_emp
//{
//public:
//	employee();
//	employee(const string &fn, const string &ln,
//		const string &j);
//	virtual void ShowAll()const;
//	virtual void SetAll();
//	virtual void writeall(ofstream&ofs);
//	virtual void getall(ifstream&ifs);
//};
//
//class manager :virtual public abstr_emp
//{
//private:
//	int inchargeof;
//protected:
//	int InChargeOf()const { return inchargeof; }
//	int &InChargeOf() { return inchargeof; }
//public:
//	manager();
//	manager(const string &fn, const string &ln,
//		const string &j, int ico = 0);
//	manager(const abstr_emp&e, int ico = 0);
//	manager(const manager &m);
//	virtual void ShowAll()const;
//	virtual void SetAll();
//	virtual void writeall(ofstream&ofs);
//	virtual void getall(ifstream&ifs);
//	void getInCharge() 
//	{
//		cout << "Enter inchargeof: ";
//		cin >> inchargeof;
//	}
//	void writeInCharge(ofstream&ofs) 
//	{
//		ofs << inchargeof << endl;
//	}
//	void readInCharge(ifstream&ifs)
//	{
//		ifs >> inchargeof;
//	}
//};
//
//class fink :virtual public abstr_emp
//{
//private:
//	string reportsto;
//protected:
//	const string ReportsTo()const { return reportsto; }
//	string&ReportsTo() { return reportsto; }
//public:
//	fink();
//	fink(const string &fn, const string &ln,
//		const string &j, const string &rpo);
//	fink(const abstr_emp&e, const string &rpo);
//	fink(const fink &e);
//	virtual void ShowAll()const;
//	virtual void SetAll();
//	virtual void writeall(ofstream&ofs);
//	virtual void getall(ifstream&ifs);
//	void getReportsTo()
//	{
//		cout << "Enter reportsto: ";
//		cin >> reportsto;
//	}
//	void writeReportsTo(ofstream&ofs)
//	{
//		ofs << reportsto << endl;
//	}
//	void readReportsTo(ifstream&ifs)
//	{
//		ifs >> reportsto;
//	}
//};
//
//class highfink:public manager, public fink
//{
//public:
//	highfink();
//	highfink(const string &fn, const string &ln,
//		const string &j, const string &rpo, int ico = 0);
//	highfink(const abstr_emp&e, const string &rpo, int ico = 0);
//	highfink(const fink &f, int ico = 0);
//	highfink(const manager &m, const string &rpo);
//	highfink(const highfink&h);
//	virtual void ShowAll()const;
//	virtual void SetAll();
//	virtual void writeall(ofstream&ofs);
//	virtual void getall(ifstream&ifs);
//};
//#endif