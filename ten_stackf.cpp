//#include <iostream>
//#include "ten_stackf.h"
//
//Stackf::Stackf()
//{
//	top = 0;
//}
//
//bool Stackf::isempty() const
//{
//	return top == 0;
//}
//
//bool Stackf::isfull() const
//{
//	return top == MAX;
//}
//
//bool Stackf::push(const Item &item)
//{
//	if (top < MAX)
//	{
//		items[top++] = item;
//		return true;
//	}
//	else
//		return false;
//}
//
//bool Stackf::pop(Item &item)
//{
//	if (top > 0)
//	{
//		item = items[--top];
//		return true;
//	}
//	else
//		return false;
//}