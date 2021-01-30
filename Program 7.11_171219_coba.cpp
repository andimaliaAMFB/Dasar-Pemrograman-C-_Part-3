//Program 7.11_coba
#include <iostream>
#include<math.h>
using namespace std;

int persegi(int);

int main()
{
	int number, result;
	cout << "Masukan angka yang akan diakarkan: ";
	cin >> number;
	result = persegi (number);
	cout << number << " Hasilnya adalah " << result << endl;
	return 0;
}

int persegi(int number)
{
	return sqrt(number);
}
