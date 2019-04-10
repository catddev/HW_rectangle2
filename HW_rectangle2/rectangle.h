#pragma once
#include <iostream>
#include<fstream>

using namespace std;

class Rectangle {
	double a;
	double b;
public:
	Rectangle() :a(0), b(0) {}
	Rectangle(double a);
	Rectangle(double a, double b);
	double perimeter();
	double area();

	void setA(double a);
	void setB(double b);
	double getA();
	double getB();
	void print();

	bool operator==(Rectangle obj);
	bool operator>(Rectangle obj);
	bool operator<(Rectangle obj);
	Rectangle operator+=(double n);
	Rectangle operator-=(double n);
};