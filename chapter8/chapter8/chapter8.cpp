// chapter8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cassert>

class Stack
{
	int stack[10];
	int length{ 0 };
public:
	void reset()
	{
		for (auto &ref : stack)
			ref = 0;
		length = 0;
	}

	bool push(int i)
	{
		if (length < 10)
		{
			stack[length] = i;
			++length;
			return true;
		}
		else
			return false;
	}

	int pop()
	{
		assert(length > 0 && "length is less than 0");
		return stack[--length];
	}

	void print()
	{
		std::cout << "( ";
		for (int i = 0; i < length; ++i)
		{
			std::cout << stack[i] << " ";
		}
		std::cout << ")\n";
	}
};


int main()
{

	Stack stack;
	stack.reset();

	//stack.pop();  //test assertion

	stack.print();

	
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();
	



	return 0;
}

