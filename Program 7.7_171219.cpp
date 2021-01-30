//Program 7.7
#include<iostream>
#include<conio.h>
using namespace std;

//Prototipe Fungsi
void TampilNilai(int);

int main()
{
	cout << "Saya sedang mengisikan beberapa nilai pada TampilNilai.\n";
	TampilNilai(5); // Panggil TampilNilai dengan argument 5
	TampilNilai(10); // Panggil TampilNilai dengan argument 10
	TampilNilai(2); // Panggil TampilNilai dengan argument 2
	TampilNilai(16); // Panggil TampilNilai dengan argument 16
	cout << "Sekarang saya kembali.\n";
	getch();
	return 0;
}

void TampilNilai(int num)
{
	cout << "Nilainya adalah: " << num << endl;
}
