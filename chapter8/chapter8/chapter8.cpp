// chapter8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <string>

class Ball
{
	std::string m_color;
	double m_radius;

public:
	Ball(const std::string &color="black", double radius=20.0)
	{
		m_color = color;
		m_radius = radius;

	}

	Ball(double radius)
	{
		m_color = "black";
		m_radius = radius;

	}

	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << "\n";
	}
};

int main()
{
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	return 0;

}

