//Program 8.2
#include <iostream>
using namespace std;

int main()
{
	string storedAt = " disimpan pada ";
	char *p, *q;
	// memasukan string ke pointer sebagai char
	p = "Hello ";
	q = "Bailey";
	// pernyataan berikut sama dengan
	cout << p << q << endl;
	//cetak alamat dimana string C disimpan
	cout << p << storedAt <<int(*p)<< endl;
	cout << q << storedAt <<int(*q)<< endl <<int (*"string lainnya");
	return 0;
}
