//Source.cpp
#include "Complex.h"
#include "ComplexDiy.h"
#include <iostream>

using namespace std;

int main()
{
	Complex k;
	cin >> k;
	cout << k;
	cout << "matematychni dii vykonuiutsia dlia takyh znachen: x1=2, y1=4, x2=5, y2=6" << endl;
	ComplexDiy b(2,4,5,6);
	b.Sub();
	b.Div();
	b.Conj1();
	b.Conj2();
	cout << " pershe chyslo bilshe za druhe? " << endl;
	if (k.GetIm1() > k.GetIm2())
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	cout << " pershe chyslo menshe za druhe? " << endl;
	if (k.GetIm1() < k.GetIm2())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cout << " chysla rivni? " << endl;
	if (k.GetIm1() == k.GetIm2())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}