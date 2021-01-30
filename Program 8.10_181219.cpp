//Program 8.10
#include <iostream>
#include<conio.h>
#include <cstring> // untuk strcmp
#include <cstdlib> // untuk atoi
using namespace std;
int main()
{
	const int LENGTH = 20;
	char input[LENGTH];
	int total = 0, count = 0;
	double average;
	cout << "Program ini akan mencari rata-rata bilangan.\n";
	cout << "Masukan bilangan pertama atau tekan Q untuk keluar: ";
	cin.getline(input, LENGTH);
	while ((strcmp(input, "Q") != 0)&&(strcmp(input, "q") != 0))
	{
		total += atoi(input);
		count++;
		cout << "Masukan bilangan selanjutnya atau tekan Q untuk keluar: ";
		cin.getline(input, LENGTH);
	}
	if (count != 0)
	{
		average = double(total)/count;
		cout << "Reratanya adalah: " << average << endl;
	}
	getch();
	return 0;
}
