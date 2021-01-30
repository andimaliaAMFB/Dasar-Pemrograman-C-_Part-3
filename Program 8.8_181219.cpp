//Program 8.8
#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;
int main()
{
	const int PANJANG_NAMA = 30;
	char name1[PANJANG_NAMA], name2[PANJANG_NAMA];
	cout << "Masukan Nama (last Name): ";
	cin.getline(name1, PANJANG_NAMA);
	cout << "Masukan Nama Lain: ";
	cin.getline(name2, PANJANG_NAMA);
	cout << "Disini nama akan di urutkan berdasarkan alphabet:\n";
	if (strcmp(name1, name2) < 0)
		cout << name1 << endl << name2 << endl;
	else if (strcmp(name1, name2) > 0)
		cout << name2 << endl << name1 << endl;
	else
		cout << "Anda memasukan nama yang SAMA!\n";
	getch();
	return 0;
}
