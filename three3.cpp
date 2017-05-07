//#include <iostream>
//
//using namespace std;
//
//const int Minute_per_degree = 60;
//const int Second_per_minutes = 60;
//
//int main()
//{
//	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
//	cout << "First, enter the degrees: ";
//	int degrees;
//	cin >> degrees;
//	cout << "Next, enter the minutes of arc: ";
//	int minutes;
//	cin >> minutes;
//	cout << "Finally, enter the seconds of arc: ";
//	int seconds;
//	cin >> seconds;
//	double latitude = degrees + (minutes + seconds / Second_per_minutes) / Minute_per_degree;
//	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " = "
//		 << latitude << " degrees" << endl;
//
//	return 0;
//}