#include "Fixed.hpp"

#define nl << std::endl
#define out std::cout <<

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed e(12);

	a = Fixed(1234.4321f);

	a = b;
	out a nl;

	float fl = 10.5;
	a = fl;
	out a nl;

	int in = 9;
	a = in;
	out a nl;

	char ch = 5;
	a = ch;
	out a nl;

	int x = 5;
	int y = 10;
	
	out x + y + x + x << " xy" nl;
	out a + b + a + a << " ab" nl;
	out a + b + x << " xab" nl;

	out a - b - a - a << " a - b" nl;
	out a - b - y << " a - b - y" nl;

	out a * b * a * a << " a * b" nl;
	out a * b * y << " a * b * y" nl;

	out a / b / a / a << " a / b" nl;
	out a / b / y << " a / b / y" nl;

	a += b;
	out a nl;

	a += y;
	out a nl;

	a -= b;
	out a nl;

	a -= 5.5;
	out a nl;

	a += 2.5;
	out a nl;

	if (a < b)
		out "a < b" nl;
	else if (b < a)
		out "b < a" nl;

	if (a < 12.1)
		out "a < 12.1" nl;
	else if (a < 11.99)
		out "a < 11.99" nl;


	if (a > b)
		out "a > b" nl;
	else if (b > a)
		out "b > a" nl;

	if (a > 12.1)
		out "a > 12.1" nl;
	else if (a > 11.99)
		out "a > 11.99" nl;

	a++;
	out a nl;

	++a;
	out a nl;

	a--;
	out a nl;

	--a;
	out a nl;

	if (a <= b)
		out "a <= b" nl;
	else if (b <= a)
		out "b <= a" nl;
	if (a <= 12.0)
		out "a <= 12.0" nl;

	if (a >= 12.1)
		out "a >= 12.1" nl;
	else if (a >= 11.99)
		out "a >= 11.99" nl;
	if (a >= 12.0)
		out "a >= 12.0" nl;

	if (a == 12)
		out "a == 12" nl;
	if (a == e)
		out "a == e" nl;

	if (a != b)
		out "a != b" nl;
	if (a != 13)
		out "a != 13" nl;
	

	// if (a == e)
	// 	out "a == e ok" nl;
	// else
	// 	out "a == e fail" nl;

	// if (a == 1234.4321f)
	// 	out "a == 1234.4321 ok" nl;
	// else
	// 	out "a == 1234.4321 fail" nl;

	// if (10 == b)
	// 	out "10 == ok" nl;
	// else
	// 	out "10 == b fail" nl;

	// if (a < b)
	// 	out "a < b fail" nl;
	// else
	// 	out "a < b ok" nl;

	// if (b < 10.1)
	// 	out "b < 10.1 ok" nl;
	// else
	// 	out "b < 10.1 fail" nl;

	// if (b < 10.0)
	// 	out "b < 10.0 fail" nl;
	// else
	// 	out "b < 10.0 ok" nl;

	// if (b < 11)
	// 	out "b < 11 ok" nl;
	// else
	// 	out "b < 11 fail" nl;

	// if (a != b)
	// 	out "a != b ok" nl;
	// else
	// 	out "a < b fail" nl;

	// if (b == 10)
	// 	out "b == 10 ok" nl;
	// else
	// 	out "b == 10 fail" nl;

	// if (b <= 10.0)
	// 	out "b <= 10.0 ok" nl;
	// else
	// 	out "b <= 10.0 fail" nl;

	// if (b <= 10.001)
	// 	out "b <= 10.001 ok" nl;
	// else
	// 	out "b <= 10.001 fail" nl;

	// if (b >= 9.99)
	// 	out "b >= 9.99 ok" nl;
	// else
	// 	out "b >= 9.99 fail" nl;

	// if (b <= 11)
	// 	out "b <= 11 ok" nl;
	// else
	// 	out "b <= 11 fail" nl;

	// a = b;
	// out "--->b = " << b nl;
	// out "--->a = " << a nl;

	// double z = 1;
	// double w = 10;
	// Fixed m(10);

	// a += 3;
	// out "a += 3 " << a nl;
	// a += 5.5;
	// out a nl;
	// a -= b;
	// out a nl;
	// a = 15;
	// out a nl;
	// z += a;
	// out z nl;
	// z -= b;
	// out z nl;
	// a = z;
	// if (z == a && a == z)
	// 	out "okay" nl;
	// a = 2;
	// z = z + a;
	// out "z + a : " << z nl;
	// a = a * 2;
	// out "-----> a * 2 : " <<  a nl;
	// a = a / 2;
	// out "-----> a / 2 : " <<  a nl;


	// out "------------------------------" nl;
	// out "m = " << m nl;
	// out "a = " << a nl;
	// out "w = " << w nl;

	// m = m / a;
	// out "-----> m / a : " <<  m nl;
	// m = m * a;
	// out "-----> m * a : " <<  m nl;

	// w = w + a;
	// out "-----> w + a : " <<  w nl;
	// w = w / m;
	// out "m = " << m nl;
	// out "-----> w / m : " <<  w nl;

	// // std::cout << "a is " << a << std::endl;
	// // std::cout << "b is " << b << std::endl;
	// // std::cout << "c is " << c << std::endl;
	// // std::cout << "d is " << d << std::endl;
	
	// // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
