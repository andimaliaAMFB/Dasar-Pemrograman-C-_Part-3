//Program 7.9
#include <iostream>
using namespace std;

void changeThem(int, double);

int main()
{
	int whole = 12;
	double real = 3.5;
	cout << "dalam nilai main adalah " << whole << endl;
	cout << "dan nilai real adalah " << real << endl << endl;
	changeThem(whole, real); // memanggil changeThem dengan 2 arguments
	cout << "sekarang kembali dalam main lagi, nilainya adalah ";
	cout << "semuanya masih " << whole << endl;
	cout << "dan nilai real adalah masih " << real << endl;
	return 0;
}

void changeThem(int i, double d)
{
	i = 100;
	d = 27.5;
	cout << "dalam fungsi changeThem nilainya diubah menjadi ";
	cout << i << endl;
	cout << "dan nilainya diubah menjadi " << d << endl << endl;
}
