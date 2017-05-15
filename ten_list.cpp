//#include <iostream>
//#include "ten_list.h"
//
//bool List::add(const Elem elem)
//{
//	if (isfull())
//		return false;
//	else
//	{
//		data[length++] = elem;
//		return true;
//	}
//}
//
//bool List::isempty() const
//{
//	return length == 0;
//}
//
//bool List::isfull() const
//{
//	return length == SIZE;
//}
//
//void List::visit(void(*pf)(Elem &elem))
//{
//	for(int i=0;i<length;i++)
//		(*pf)(data[i]);
//}