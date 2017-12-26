// chapter8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

class Point3d
{
	double m_x;
	double m_y;
	double m_z;
public:
	void setValues(double x, double y, double z)
	{
		m_x = x;
		m_y = y;
		m_z = z;

	}
	void print()
	{
		std::cout << "<" << m_x << "," << m_y << "," << m_z << ">\n";

	}
};


int main()
{
	Point3d point;
	point.setValues(1.0, 2.0, 3.0);

	point.print();

	return 0;
}

