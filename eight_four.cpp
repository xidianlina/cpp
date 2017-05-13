//#include <iostream>
//
//struct box {
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//
//void show_box(const box & b);
//void set_volume(box & b);
//
//int main()
//{
//	using namespace std;
//
//	box b = { "boxs",10,20,30,100 };
//	show_box(b);
//	set_volume(b);
//	show_box(b);
//
//	return 0;
//}
//
//void show_box(const box &b)
//{
//	using namespace std;
//
//	cout << "Made by " << b.maker << endl;
//	cout << "Height = " << b.height << endl;
//	cout << "Width = " << b.width << endl;
//	cout << "Length = " << b.length << endl;
//	cout << "Volume = " << b.volume << endl;
//}
//
//void set_volume(box &b)
//{
//	b.volume = b.height*b.width*b.length;
//}