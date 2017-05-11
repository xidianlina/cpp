//#include <iostream>
//
//const int Seasons = 4;
//
//const char *Snames[] = { "Spring","Summer","Fall","Winter" };
//
//struct expense {
//	double arr[Seasons];
//};
//void fill(expense *);
//void show(const expense);
//
//int main()
//{
//	expense expenses = { 0 };
//	fill(&expenses);
//	show(expenses);
//
//	return 0;
//}
//
//void fill(expense *expenses)
//{
//	using namespace std;
//
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << "Enter " << Snames[i] << " expenses: ";
//		cin >> expenses->arr[i];
//	}
//}
//
//void show(const expense expenses)
//{
//	using namespace std;
//
//	double total = 0.0;
//	cout << "\nEXPENSES\n";
//	for (int i = 0; i < Seasons; i++)
//	{
//		cout << Snames[i] << ": $" << expenses.arr[i] << endl;
//		total += expenses.arr[i];
//	}
//	cout << "Total Expenses: $" << total << endl;
//}