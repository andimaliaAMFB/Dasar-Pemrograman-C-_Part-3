//Program 7.5
#include <iostream>
#include <conio.h>
using namespace std;

void pertama();
void kedua();

int main()
{
	cout << "Saya sedang di program Utama.\n";
	pertama(); // pemanggilan fungsi pertama
	kedua(); // pemanggilan fungsi kedua
	cout << "Saya kembali ke Program Utama.\n";
	getch();
	return 0;
}

void pertama()
{
	cout << " >>Saya sekarang sedang di Fungsi Pertama.\n";
}

void kedua()
{
	cout << " >> Saya sekarang sedang di Fungsi Kedua.\n";
}
