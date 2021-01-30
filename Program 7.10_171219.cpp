//Program 7.10
#include <iostream>
using namespace std;

void divide(double, double);

int main()
{
	double num1, num2;
	cout << "masukan dua angka yang akan dibagi \n";
	cout << "angka yang kedua: ";
	cin >> num1 >> num2;
	divide(num1, num2);
	return 0;
}

void divide(double arg1, double arg2)
{
	if (arg2 == 0.0)
	{
		cout << "maaf, tidak bisa dibagi dengan bilangan nol.\n";
		return;
	}
	cout << "jawabanya adalah: " << (arg1 / arg2) << endl;
}
