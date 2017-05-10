//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	const int Max = 10;
//	vector<double> donation(Max);
//	double val;
//	int i = 0;
//	double sum = 0.0;
//	while (i<10&&cin>>val)
//	{
//		donation[i] = val;
//		sum += val;
//		i++;
//	}
//	double avg = sum / i;
//	cout << "The average of donation is " << avg << endl;
//
//	int cnt = 0;
//	for (int j = 0; j < i; j++)
//	{
//		if (donation[j] > avg)
//			cnt++;
//	}
//	cout << "There are " << cnt << " larger average.\n";
//
//	return 0;
//}