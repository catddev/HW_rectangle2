#include "Vector.h"

Vector::Vector(int buf_size)
{
	this->buf_size = buf_size;
	cur_size = 0;
	els = new Rectangle[buf_size];
}

Vector::~Vector()
{
	delete[] els;
}

Vector::Vector(const Vector & obj)
{
	buf_size = obj.cur_size;
	cur_size = obj.cur_size;
	els = new Rectangle[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
}

void Vector::add(Rectangle el)
{
	if (buf_size == 0) {
		buf_size = 4;
		els = new Rectangle[buf_size];
	}
	else {
		if (buf_size == cur_size) {
			buf_size *= 2;
			Rectangle*tmp = new Rectangle[buf_size];

			for (int i = 0; i < cur_size; i++) {
				tmp[i] = els[i];
			}
			delete[]els;
			els = tmp;
		}
	}
	els[cur_size++] = el;
}

int Vector::size()
{
	return cur_size;
}

Rectangle& Vector::operator[](int index) //ОБЯЗАТЕЛЬНО ПО ССЫЛКЕ чтобы можно было изменять исходное значение, а не временную копию
{
	return els[index];
}

Vector Vector::operator=(const Vector & obj)
{
	this->cur_size = this->buf_size = obj.cur_size;
	this->els = new Rectangle[buf_size];
	for (int i = 0; i < cur_size; i++)
		els[i] = obj.els[i];

	return (*this);
}