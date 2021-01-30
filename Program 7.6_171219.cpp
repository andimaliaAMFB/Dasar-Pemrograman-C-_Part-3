//Program 7.6
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipe Fungsi
void TampilNilai(int);

int main()
{
	cout << "Saya sedang memasukan 5 ke fungsi TampilNilai.\n";
	TampilNilai(5); // Call TampilNilai dengan argument 5
	cout << "Sekarang saya sudah kembali ke program utama.\n";
	getch();
	return 0;
}

void TampilNilai(int num)
{
	cout << "Besar nilainya adalah: " << num << endl;
}
