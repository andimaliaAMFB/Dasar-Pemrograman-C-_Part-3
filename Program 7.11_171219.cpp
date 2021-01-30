//Program 7.11
#include <iostream>
using namespace std;

int persegi(int);

int main()
{
	int number, result;
	cout << "Masukan angka yang akan dikuadratkan: ";
	cin >> number;
	result = persegi (number);
	cout << number << " Hasilnya adalah " << result << endl;
	return 0;
}

int persegi(int number)
{
	return number * number;
}
