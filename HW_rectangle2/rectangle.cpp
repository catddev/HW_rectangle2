#include "rectangle.h"

Rectangle::Rectangle(double a)
{
	this->a = this->b = a;
}

Rectangle::Rectangle(double a, double b) {
	this->a = a;
	this->b = b;
}

double Rectangle::perimeter()
{
	return 2 * (a + b);
}

double Rectangle::area()
{
	return a * b;
}

void Rectangle::setA(double a)
{
	this->a = a;
}

void Rectangle::setB(double b)
{
	this->b = b;
}

double Rectangle::getA()
{
	return a;
}

double Rectangle::getB()
{
	return b;
}

void Rectangle::print()
{
	cout << a << " " << b << endl;
}

bool Rectangle::operator==(Rectangle obj)
{
	return (area() == obj.area() && perimeter() == obj.perimeter());
}

bool Rectangle::operator>(Rectangle obj)
{
	if (area() > obj.area())
		return true;
	else
		return false;
}

bool Rectangle::operator<(Rectangle obj)
{
	if (area() < obj.area())
		return true;
	else
		return false;
}

Rectangle Rectangle::operator+=(double n)
{
	this->a += n;
	this->b += n;
	return *this;
}

Rectangle Rectangle::operator-=(double n)
{
	this->a -= n;
	this->b -= n;
	return *this;
}
