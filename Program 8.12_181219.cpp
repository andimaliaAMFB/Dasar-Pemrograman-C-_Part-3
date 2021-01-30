//Program 8.12
#include <conio.h>
#include <iostream>
#include <cctype>
using namespace std;

bool testNum(char []);
const int NUM_LENGTH = 8;
const int ALPHA_LENGTH = 3;

int main()
{
	char customer[NUM_LENGTH];
	cout << "masukan nomer pelanggan dalam Form ";
	cout << "LLLNNNN\n";
	cout << "(LLL = huruf dan NNNN = angka): ";
	cin.getline(customer, NUM_LENGTH);
	if (testNum(customer))
		cout << "\nNomer pelanggan yang dimasukan valid\n";
	else
	{
		cout << "hal tersebut tidak sesuai dengan formatangka pelanggan.\n";
		cout << "contohnya adalah seperti dibawah ini:\n";
		cout << " ABC1234\n";
	}
	getch();
	return 0;
}

// Mendefinisikan Fungsi TestNumb.
bool testNum(char custNum[])
{
	for (int count = 0; count < ALPHA_LENGTH; count++)
	{
		if (!isalpha(custNum[count]))
			return false;
	}
	for (int count = ALPHA_LENGTH; count < NUM_LENGTH-1; count++)
	{
		if (!isdigit(custNum[count]))
			return false;
	}
	return true;
}
