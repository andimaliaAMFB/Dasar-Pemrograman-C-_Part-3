//Program 8.7
#include <iostream>
#include <cstring>
#include<conio.h>
#include <iomanip>
using namespace std;
int main()
{
	const double A_PRICE = 100.00, B_PRICE = 150.00;
	const int PART_LENGTH = 8;
	char partNum[PART_LENGTH];
	cout << "kode nomer ganda adalah:\n";
	cout << "\tKotak besar, kode nomernya: S147-29A\n";
	cout << "\tRak Besar, kode nomernya: S147-29B\n";
	cout << "masukan kode nomer yang ada\n";
	cout << "ingin membeli [masukan kode]: ";
	cin >> setw(9);
	cin >> partNum;
	cout << showpoint << fixed;
	cout << setprecision(2);
	if (strcmp(partNum, "S147]29A") == 0)
		cout << "harganya adalah $" << A_PRICE << endl;
	else if (strcmp(partNum, "S147]29B") == 0)
		cout << "harganya adalah $" << B_PRICE << endl;
	else
		cout << partNum << " nomer yang dimasukan tidak sah.\n";
	getch();
	return 0;
}
