//Program 8.11
#include <iostream>
#include<conio.h>
#include <cctype>
using namespace std;
int main()
{
	char input;
	cout << "Masukan karakter bebas: ";
	cin.get(input);
	cout << "karakter yang dimasukan adalah: " << input << endl;
	cout << "Kode ASCIInya adalah: " << int(input) << endl;
	if (isalpha(input))
		cout << "Itu adalah karakter alfabet.\n";
	if (isdigit(input))
		cout << "Itu adalah digit numerik.\n";
	if (islower(input))
		cout << "Huruf yang anda masukan adalah huruf kecil.\n";
	if (isupper(input))
		cout << "Huruf yang anda masukan adalah huruf besar.\n";
	if (isspace(input))
		cout << "itu adalah karakter spasi.\n";
	getch();
	return 0;
}
