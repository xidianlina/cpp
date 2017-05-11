//#include <iostream>
//#include <cmath>
//
//struct polar {
//	double distance;
//	double angle;
//};
//
//struct rect {
//	double x;
//	double y;
//};
//
//polar rect_to_polar(rect);
//void show_polar(polar);
//
//int main()
//{
//	using namespace std;
//
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y value: ";
//	while (cin >> rplace.x >> rplace.y)
//	{
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers (q to quit): ";
//	}
//	cout << "Done.\n";
//
//	return 0;
//}
//
//polar rect_to_polar(rect xypos)
//{
//	using namespace std;
//
//	polar answer;
//
//	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//
//	return answer;
//}
//
//void show_polar(polar dapos)
//{
//	using namespace std;
//
//	const double PI = 3.14159;
//	const double Rad_to_deg = 180 / PI;
//
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle*Rad_to_deg;
//	cout << " degrees\n";
//}