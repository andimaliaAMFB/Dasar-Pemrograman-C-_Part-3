//Program 7.8
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipe Fungsi
void Tambahan(int, int, int);

int main()
{
	int value1, value2, value3;
	cout << "Masukan Tiga bilangan Integers dan saya akan menampilkan ";
	cout << "Penjumlahan: "<<endl;
	cin >> value1 >> value2 >> value3;
	Tambahan(value1,value2,value3); // Call Tambahan dengan 3 arguments.
	getch();
	return 0;
}

void Tambahan(int num1, int num2, int num3)
{
	cout << (num1 + num2 + num3) << endl;
}
