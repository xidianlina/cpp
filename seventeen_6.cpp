//#include "seventeen_emp.h"
//
//const int MAX = 5;
//const char *file = "a.txt";
//int main(void)
//{
//	abstr_emp *pc[MAX];
//	char ch;
//	ifstream fin;
//	fin.open(file);
//	int i = 0;
//	if (fin.is_open())
//	{
//		cout << "Here are the current contents of the "
//			<< file << " file:\n";
//		int classtype;
//		i = 0;
//		while ((fin >> classtype).get(ch))
//		{
//			switch (classtype)
//			{
//			case Employee:
//				pc[i] = new employee;
//				break;
//			case Manager:
//				pc[i] = new manager;
//				break;
//			case Fink:
//				pc[i] = new fink;
//				break;
//			case Highfink:
//				pc[i] = new highfink;
//				break;
//			}
//			cout << classtype << endl;
//			pc[i]->getall(fin);
//			pc[i++]->ShowAll();
//		}
//	}
//	fin.close();
//	ofstream fout;
//	fout.open(file, ios_base::out | ios_base::app);
//	if (!fout.is_open())
//	{
//		cerr << "Can't open " << file << " file for output.\n";
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "e to employee, m to manager\n"
//		<< "f to fink, h to highfink\n"
//		<< "q to quit: ";
//	int index = 0;
//	while (cin.get(ch).get() && ch != 'q'&&index < MAX)
//	{
//		switch (ch)
//		{
//		case'e':
//			pc[index] = new employee;
//			pc[index]->SetAll();
//			index++;
//			break;
//		case'm':
//			pc[index] = new manager;
//			pc[index]->SetAll();
//			index++;
//			break;
//		case'f':
//			pc[index] = new fink;
//			pc[index]->SetAll();
//			index++;
//			break;
//		case'h':
//			pc[index] = new highfink;
//			pc[index]->SetAll();
//			index++;
//			break;
//		default:
//			cout << "Try again";
//			break;
//		}
//		if (index > MAX)
//			break;
//		cout << "e to employee, m to manager\n"
//			<< "f to fink, h to highfink\n"
//			<< "q to quit: ";
//	}
//	for (i = 0; i< index; i++)
//		pc[i]->writeall(fout);
//	fout.close();
//
//	fin.clear();
//	fin.open(file);
//	if (fin.is_open())
//	{
//		cout << "Here are the current contents of the "
//			<< file << " file:\n";
//		int classtype;
//		i = 0;
//		while ((fin >> classtype).get(ch))
//		{
//			switch (classtype)
//			{
//			case Employee:
//				pc[i] = new employee;
//				break;
//			case Manager:
//				pc[i] = new manager;
//				break;
//			case Fink:
//				pc[i] = new fink;
//				break;
//			case Highfink:
//				pc[i] = new highfink;
//				break;
//			}
//			cout << classtype << endl;
//			pc[i]->getall(fin);
//			pc[i++]->ShowAll();
//		}
//	}
//	cout << "Done.\n";
//
//	return 0;
//}