// Lab_04_2.cpp
// < Якубенко Олександра>
// Лабораторна робота № 4.3
// . Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 28
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "F" << "    |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
		if (c < 0 && a != 0)
			F = -(a * x * x);
		else
			if (c > 0 && a == 0)
				F = (a - x) / (c * x);
			else
				if (!(c < 0 && a != 0) && !(c > 3 && a == 0))
					F = x / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	cout << "---------------------------" << endl;
	return 0;
}
