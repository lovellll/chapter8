// chapter8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Point3d.h"
#include "Vector3d.h"




int main()
{
	Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}

