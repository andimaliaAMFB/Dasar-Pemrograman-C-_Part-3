//Program 8.13
#include <iostream>
#include <conio.h>
#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
	const double PI = 3.14159;
	double radius;
	char go;
	cout << "Program untuk menghitung luas lingkaran\n";
	cout << setprecision(2);
	cout << fixed;
	do
	{
		cout << "Masukan jari-jari lingkaran: ";
		cin >> radius;
		cout << "Luas lingkaran adalah " << (PI * radius * radius);
		cout << endl;
		do
		{
			cout << "Akan menghitung lagi? (Y or N) ";
			cin >> go;
		} while (toupper(go) != 'Y' && toupper(go) != 'N');
	} while (toupper(go) == 'Y');
	getch();
	return 0;
}
