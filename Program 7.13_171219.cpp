//Program 7.13
#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
	int val;
	cout << "masukan bilangan integer :"<<endl;
	cout << "jika ganjil atau genap : ";
	cin >> val;
	if (isEven(val))
		cout << val << "adalah genap.\n";
	else
		cout << val << " adalah ganjil.\n";
	return 0;
}

bool isEven(int number)
{
	if (number % 2)
		return false; // Bilangan adalah ganjil
	else
		return true; // bilangan adalah genap.
}
