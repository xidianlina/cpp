//#include <iostream>
//
//const int Max = 5;
//
//double * fill_array(double *, double *);
//void show_array(double *, double *);
//void revalue(double r, double *, double *);
//
//int main()
//{
//	using namespace std;
//	
//	double arr[Max];
//	double *properties = arr;
//
//	double *end = fill_array(properties, properties + Max);
//	show_array(properties, end);
//	if (end)
//	{
//		cout << "Enter revaluation factor: ";
//		double factor;
//		while (!(cin >> factor))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; Please enter a number: ";
//		}
//		revalue(factor, properties, end);
//		show_array(properties, end);
//	}
//	cout << "Done.\n";
//	
//	return 0;
//}
//
//double *fill_array(double *begin, double *end)
//{
//	using namespace std;
//
//	double temp;
//	double *p;
//
//	for (p = begin; p != end; p++)
//	{
//		cout << "Enter value :";
//		cin >> temp;
//		if (!cin)
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Bad input; input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		*p = temp;
//	}
//
//	return p;
//}
//
//void show_array(double *begin, double *end)
//{
//	using namespace std;
//
//	double *p;
//
//	for (p = begin; p != end; p++)
//		cout << "Property : $" << *p << endl;
//}
//
//void revalue(double r, double *begin, double *end)
//{
//	int size = end - begin;
//
//	for (int i = 0; i < size; i++)
//		*(begin + i) *= r;
//}