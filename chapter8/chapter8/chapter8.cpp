// chapter8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <string>
#include <cstdint>

class RGBA
{
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alapha;

public:
	RGBA(std::uint8_t red=0,std::uint8_t green=0,std::uint8_t blue=0,std::uint8_t alapha=255):
		m_red(red),m_green(green),m_blue(blue),m_alapha(alapha)
	{

	}

	void print()
	{
		std::cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) <<
			" b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alapha)<<"\n";
	}
};

int main()
{
	RGBA teal(0, 127, 127);
	teal.print();
	
	RGBA def;
	def.print();


	return 0;

}

