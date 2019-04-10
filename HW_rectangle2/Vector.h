#pragma once
#include "rectangle.h"
class Vector {
	Rectangle *els;
	int buf_size;
	int cur_size;

public:
	Vector() :buf_size(0), cur_size(0) {};
	Vector(int buf_size);
	~Vector();
	Vector(const Vector& obj);
	void add(Rectangle el);
	int size();
	Rectangle operator[](int index);
	Vector operator=(const Vector & obj);
};