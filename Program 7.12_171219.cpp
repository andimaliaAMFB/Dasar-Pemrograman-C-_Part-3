//Program 7.12
#include <iostream>
#include <iomanip>
using namespace std;

double getRadius();
double square(double);

int main()
{
	const double PI = 3.14159;
	double rad;
	cout << fixed << showpoint << setprecision(2);
	cout << "Program ini untuk menghitung luas lingkaran.\n";
	rad = getRadius();
	cout << "Luasnya adalah: " << PI * square(rad) << endl;
	return 0;
}

double getRadius()
{
	double radius;
	cout << "masukan jari-jari lingkaran: ";
	cin >> radius;
	return radius;
}

double square(double number)
{
	return number * number;
}
