//Program 8.14
#include <iostream>
#include <conio.h>
using namespace std;

void stringCopy(char [], char []);

int main()
{
	const int S_LENGTH = 30;
	char first[S_LENGTH], second[S_LENGTH];
	cout << "masukan string dengan tidak lebih dari "<< S_LENGTH -1 << " karakter:\n";
	cin.getline(first, S_LENGTH);
	stringCopy(first, second);
	cout << "String yang anda masukan adalah:\n" << second << endl;
	getch();
	return 0;
}

// Definisi Fungsi stringCopy *
void stringCopy(char string1[], char string2[])
{
	int index = 0;
	while (string1[index] != '\0')
	{
		string2[index] = string1[index];
		index++;
	}
	string2[index] = '\0';
}
