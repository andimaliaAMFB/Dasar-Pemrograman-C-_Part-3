//Program 8.4
#include <iostream>
using namespace std;
int main()
{
	const int NAME_LENGTH = 50;
	char *pname;
	pname = new char[NAME_LENGTH]; // alokasi penyimpanan
	cout << "Masukan nama Anda: ";
	cin >> pname; // cetak nama
	cout << "Hello " << pname;
	return 0;
}
