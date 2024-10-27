#include <iostream>
using namespace std;
#include <math.h>;
int main()
{
	float y, z, dob;
	cout << "Enter y:\n";
	cin >> y;
	dob = 1;
	for (int(k) = 1; k <= 5; k++) {
		dob *= log(k * y);
	}
	z = (pow(y, 5) + dob);
	cout << "z = " << z;
}
