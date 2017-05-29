//#ifndef WINE_H_
//#define WINE_H_
//#include <iostream>
//#include <string>
//#include <valarray>
//
//template<class T1, class T2>
//class Pair
//{
//private:
//	T1 year;
//	T2 bottles;
//public:
//	Pair(const T1 &yr, const T2 &bt) :year(yr), bottles(bt) {}
//	Pair() {}
//	void Set(const T1 &yr, const T2 &bt);
//	int Sum()const;
//	void Show(int y)const;
//};
//
//template <class T1, class T2>
//void Pair<T1, T2>::Set(const T1 &yr, const T2 &bt)
//{
//	year = yr;
//	bottles = bt;
//}
//
//template <class T1, class T2>
//int Pair<T1, T2>::Sum()const
//{
//	return bottles.sum();
//}
//
//template <class T1, class T2>
//void Pair<T1, T2>::Show(int y)const
//{
//	for (int i = 0; i < y; i++)
//		std::cout << "\t" << year[i] << "\t" << bottles[i] << std::endl;
//}
//
//typedef std::valarray<int> ArrayInt;
//typedef Pair<ArrayInt, ArrayInt> PairArray;
//
//class Wine
//{
//private:
//	PairArray yb;
//	std::string fullname;
//	int yrs;
//public:
//	Wine() {}
//	Wine(const char *l, int y, const int yr[], const int bot[]);
//	Wine(const char *l, int y);
//	void GetBottles();
//	std::string &Label();
//	void Show()const;
//	int sum()const;
//};
//#endif
//
//Wine::Wine(const char *l, int y, const int yr[], const int bot[])
//{
//	fullname = l;
//	yrs = y;
//	yb.Set(ArrayInt(yr, yrs), ArrayInt(bot, yrs));
//}
//Wine::Wine(const char *l, int y)
//{
//	fullname = l;
//	yrs = y;
//}
//void Wine::GetBottles()
//{
//	ArrayInt yr(yrs), bt(yrs);
//	std::cout << "Enter " << fullname << " data for " << yrs << " year(s):\n";
//	for (int i = 0; i < yrs; i++)
//	{
//		std::cout << "Enter year: ";
//		std::cin >> yr[i];
//		std::cout << "Enter bottles for that year: ";
//		std::cin >> bt[i];
//	}
//	while (std::cin.get() != '\n')
//		continue;
//	yb.Set(yr, bt);
//}
//std::string &Wine::Label()
//{
//	return fullname;
//}
//void Wine::Show()const
//{
//	std::cout << "Wine: " << fullname << std::endl;
//	std::cout << "\tYear\tBottles\n";
//	yb.Show(yrs);
//}
//int Wine::sum()const
//{
//	return yb.Sum();
//}
//
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	cout << "Enter name of wine: ";
//	char lab[50];
//	cin.getline(lab, 50);
//	cout << "Enter number of years: ";
//	int yrs;
//	cin >> yrs;
//
//	Wine holding(lab, yrs);
//	holding.GetBottles();
//	holding.Show();
//
//	const int YRS = 3;
//	int y[YRS] = { 1993, 1995, 1998 };
//	int b[YRS] = { 48, 60, 72 };
//
//	Wine more("Gushing Grape Red", YRS, y, b);
//	more.Show();
//	cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;
//	cout << "Bye\n";
//
//	return 0;
//}