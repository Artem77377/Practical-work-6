#include <iostream>
#include <iomanip>
using namespace std;
#include "math.h"
int main()
{
	float x, y, x1, x2, h;
	cout << "Enter [x1; x2] and step h\n";
	cin >> x1 >> x2 >> h;
	cout << "****************WHILE****************" << endl;
	x = x1;
	while (x <= x2 + h)
	{
		y = (log(pow(x, 34)) + pow(x, 2) + 2);
		cout << setw(10) << "x = " << x << setw(15) << "y = " << y << endl;
		x += h;
	}
	cout << "****************DO_WHILE***************" << endl;
	x = x1;
	do
	{
		y = (log(pow(x, 2)) + pow(x, 2) + 90);
		cout << setw(10) << "x = " << x << setw(15) << "y = " << y << endl;
		x += h;
	} while (x <= x2 + h);
}
