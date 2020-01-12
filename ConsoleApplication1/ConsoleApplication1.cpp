#include "pch.h"
#include <iostream>

using namespace std;

class ThreeD
{
	int x, y, z;
public:
	ThreeD();
	ThreeD(int a, int b, int c);
	ThreeD operator+ (ThreeD var2);
	ThreeD operator= (ThreeD var2);
	void show();
};

ThreeD::ThreeD()
{
	x = y = z = 0;
}

ThreeD::ThreeD(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

ThreeD ThreeD::operator+ (ThreeD var2)
{
	ThreeD temp;
	temp.x = x + var2.x;
	temp.y = y + var2.y;
	temp.z = z + var2.z;

	return temp;
}

ThreeD ThreeD::operator= (ThreeD var2)
{
	x = var2.x;
	y = var2.y;
	z = var2.z;

	return *this;
}

void ThreeD::show()
{
	cout << x << ", " << y << ", " << z << "\n" << endl;
}



int main()
{
	setlocale(LC_ALL, "ru");

	ThreeD point1(1, 2, 3), point2(10, 10, 10), point3;
	point1.show();
	point2.show();

	point3 = point1 + point2;
	point3.show();

	point3 = point1 + point2 + point3;
	point3.show();

	point3 = point2 = point1;
	point3.show();
	point2.show();

	system("pause");
	return 0;
}
