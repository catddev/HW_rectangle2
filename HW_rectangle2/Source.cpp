#include "rectangle.h"
#include "Vector.h"

int main() {
	ifstream in_file("in.txt");
	Vector v;
	double a, b;
	while (!in_file.eof()) {
		in_file >> a >> b;
		v.add(Rectangle(a, b));
	}

	for (int i = 0; i < v.size(); i++)
		v[i].print();

	Vector v1;
	v1 = v;
	
	if (v[0] == v1[0]) cout << "equal" << endl;
	else cout << "are not equal" << endl;

	if (v[1] < v[3]) cout << "smaller" << endl;
	if (v[5] > v[2]) cout << "greater" << endl;

	v1[0]+=100;
	v1[5] -= 4;

	v1[0].print();//?
	v1[5].print();//?

	system("pause");
}