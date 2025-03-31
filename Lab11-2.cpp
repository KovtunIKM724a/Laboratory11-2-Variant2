#include <iostream>
using namespace std;



int main()
{

	double* pa, * pb;
	pa = new double;
	pb = new double;


	double a, b;
	cout << "Enter a value in double variable a: ";
	cin >> a;
	cout << "Enter a value in double variable b: ";
	cin >> b;

	*pa = a;
	*pb = b;

	*pa *= 2;

	cout << "An address of var a = " << pa << endl;
	cout << "A value of var a = " << *pa << endl;
	cout << "An address of var b = " << pb << endl;
	cout << "A value of var b = " << *pb << endl;

	delete pa;
	delete pb;
}
