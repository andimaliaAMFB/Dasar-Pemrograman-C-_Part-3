//Sub Rutin dalam Bahasa Pemrograman
#include<iostream>
using namespace std;

int fpb()
{
	int a=24,b=18,hasil;
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
	return(hasil);
}

main()
{
	cout << "FPB-nya = ";
	cout << fpb() <<endl;
}
