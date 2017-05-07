//#include <iostream>
//
//using namespace std;
//
//const int Hour_per_day = 24;
//const int Minute_per_hour = 60;
//const int Second_per_minute = 60;
//
//int main()
//{
//	cout << "Enter the number of seconds: ";
//	long long seconds;
//	cin >> seconds;
//	long second = seconds%Second_per_minute;
//	long minute = seconds / Second_per_minute%Minute_per_hour;
//	long hour = seconds / Second_per_minute / Minute_per_hour%Hour_per_day;
//	long day = seconds / Second_per_minute / Minute_per_hour / Hour_per_day;
//	cout << seconds << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds" << endl;
//
//	return 0;
//}