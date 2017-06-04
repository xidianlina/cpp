//#include "seventeen_emp.h"
//
//abstr_emp::abstr_emp() :fname("no one"), lname("no one"), job("no job"){}
//abstr_emp::abstr_emp(const string &fn, const string &ln,const string &j) : fname(fn), lname(ln), job(j){}
//void abstr_emp::ShowAll()const
//{
//	cout << "Firstname: " << fname << endl;
//	cout << "Lastname: " << lname << endl;
//	cout << "Job is: " << job << endl;
//
//}
//void abstr_emp::SetAll()
//{
//	cout << "Enter firstname: ";
//	getline(cin, fname);
//	cout << "Enter lastname: ";
//	getline(cin, lname);
//	cout << "Enter position: ";
//	getline(cin, job);
//}
//ostream&operator<<(ostream&os, const abstr_emp&e)
//{
//	os << e.fname << " " << e.lname << ", " << e.job << endl;
//	return os;
//}
//abstr_emp::~abstr_emp(){}
//void abstr_emp::writeall(ofstream&ofs)
//{
//	ofs << fname << "\n" << lname << "\n" << job << "\n";
//}
//void abstr_emp::getall(ifstream&ifs)
//{
//	getline(ifs, fname);
//	getline(ifs, lname);
//	getline(ifs, job);
//}
//
//employee::employee() :abstr_emp(){}
//employee::employee(const string &fn, const string &ln,const string &j) : abstr_emp(fn, ln, j){}
//void employee::ShowAll()const
//{
//	abstr_emp::ShowAll();
//}
//void employee::SetAll()
//{
//	abstr_emp::SetAll();
//}
//void employee::writeall(ofstream&ofs)
//{
//	ofs << Employee << endl;
//	abstr_emp::writeall(ofs);
//}
//void employee::getall(ifstream&ifs)
//{
//	abstr_emp::getall(ifs);
//}
//
//manager::manager() :abstr_emp(){}
//manager::manager(const string &fn, const string &ln,
//	const string &j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
//{
//
//}
//manager::manager(const abstr_emp&e, int ico) : abstr_emp(e), inchargeof(ico){}
//manager::manager(const manager &m) : abstr_emp(m){}
//void manager::ShowAll()const
//{
//	abstr_emp::ShowAll();
//	cout << "Inchargeof: " << InChargeOf() << endl;
//}
//void manager::SetAll()
//{
//	abstr_emp::SetAll();
//	cout << "Enter inchargeof: ";
//	(cin >> inchargeof).get();
//}
//void manager::writeall(ofstream&ofs)
//{
//	ofs << Manager << endl;
//	abstr_emp::writeall(ofs);
//	ofs << inchargeof << endl;
//}
//void manager::getall(ifstream&ifs)
//{
//	abstr_emp::getall(ifs);
//	ifs >> inchargeof;
//}
//
//fink::fink() :abstr_emp(){}
//fink::fink(const string &fn, const string &ln,const string &j, const string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo){}
//fink::fink(const abstr_emp&e, const string &rpo) : abstr_emp(e), reportsto(rpo){}
//fink::fink(const fink &e) : abstr_emp(e){}
//void fink::ShowAll()const
//{
//	abstr_emp::ShowAll();
//	cout << "Reportsto: " << ReportsTo() << endl;
//}
//void fink::SetAll()
//{
//	abstr_emp::SetAll();
//	cout << "Enter reportsto: ";
//	cin >> reportsto;
//}
//void fink::writeall(ofstream&ofs)
//{
//	ofs << Fink << endl;
//	abstr_emp::writeall(ofs);
//	ofs << reportsto << endl;
//}
//void fink::getall(ifstream&ifs)
//{
//	abstr_emp::getall(ifs);
//	ifs >> reportsto;
//}
//
//highfink::highfink() :abstr_emp(), manager(), fink(){}
//highfink::highfink(const string &fn, const string &ln,
//	const string &j, const string &rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
//{
//
//}
//highfink::highfink(const abstr_emp&e, const string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
//{
//
//}
//highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
//{
//
//}
//highfink::highfink(const manager &m, const string &rpo) : abstr_emp(m), manager(m), fink(m, rpo)
//{
//
//}
//highfink::highfink(const highfink&h) : abstr_emp(h), manager(h), fink(h)
//{
//
//}
//void highfink::ShowAll()const
//{
//	abstr_emp::ShowAll();
//	cout << "InChargeOf: ";
//	cout << manager::InChargeOf() << endl;
//	cout << "ReportsTo: ";
//	cout << fink::ReportsTo() << endl;
//}
//void highfink::SetAll()
//{
//	abstr_emp::SetAll();
//	manager::getInCharge();
//	fink::getReportsTo();
//}
//void highfink::writeall(ofstream&ofs)
//{
//	ofs << Highfink << endl;
//	abstr_emp::writeall(ofs);
//	manager::writeInCharge(ofs);
//	fink::writeReportsTo(ofs);
//}
//
//void highfink::getall(ifstream&ifs)
//{
//	abstr_emp::getall(ifs);
//	manager::readInCharge(ifs);
//	fink::readReportsTo(ifs);
//}