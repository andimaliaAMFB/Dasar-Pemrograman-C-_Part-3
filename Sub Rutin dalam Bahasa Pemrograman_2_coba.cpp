//Sub Rutin dalam Bahasa Pemrograman_coba
#include<iostream>
using namespace std;

int fpb()
{
	int a,b,hasil;
	cout<<"Masukan Angka Pertama: ";cin>>a;
	cout<<"Masukan Angka Kedua  : ";cin>>b;
	int r = a % b;
	if (r==0)
		hasil = b;
	else
	{
		while(r!=0)
		{
			a = b;
			b = r;
			r = a % b;
			hasil = b;
		}
	}
	cout << "FPB-nya = ";
	return(hasil);
}

main()
{
	cout << fpb() <<endl;
}
