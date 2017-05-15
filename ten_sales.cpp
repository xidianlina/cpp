/*
#include <iostream>
#include "ten_sales.h"

SALES::Sales::Sales()
{
	sales[0] = sales[1] = sales[2] = sales[3] = 0.0;
	sales_average = 0.0;
	sales_max = 0.0;
	sales_min = 9999.0;
}

SALES::Sales::Sales(const double *s, const int n)
{
	if (n < QUARTERS)
	{
		double max = 0.0;
		double min = 9999.0;
		double average = 0.0;
		for (int i = 0; i < n; i++)
		{
			sales[i] = s[i];
			max = max > s[i] ? max : s[i];
			min = min < s[i] ? min : s[i];
			average += s[i];
		}
		for (int i = n; i < QUARTERS; i++)
			sales[i] = 0.0;
		sales_max = max;
		sales_min = min;
		sales_average = average / n;
	}
	else
	{
		double max = 0.0;
		double min = 9999.0;
		double average = 0.0;
		for (int i = 0; i < QUARTERS; i++)
		{
			sales[i] = s[i];
			max = max > s[i] ? max : s[i];
			min = min < s[i] ? min : s[i];
			average += s[i];
		}
		sales_max = max;
		sales_min = min;
		sales_average = average / QUARTERS;
	}
}

void SALES::Sales::setSales()
{
	double max = 0.0;
	double min = 9999.0;
	double average = 0.0;
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "Enter a double: ";
		std::cin >> sales[i];
		std::cin.get();
		max = max > sales[i] ? max : sales[i];
		min = min < sales[i] ? min : sales[i];
		average += sales[i];
	}
	sales_max = max;
	sales_min = min;
	sales_average = average / QUARTERS;
}

void SALES::Sales::showSales() const
{
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < QUARTERS; i++)
		std::cout << sales[i] << "\t";
	std::cout << std::endl;
	std::cout << "Max: " << sales_max << std::endl;
	std::cout << "Min: " << sales_min << std::endl;
	std::cout << "Average: " << sales_average << std::endl;
}
*/