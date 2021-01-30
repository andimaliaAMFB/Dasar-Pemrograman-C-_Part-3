//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to list non-prime numbers from 1 to an upperbound.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int n;
	cout<<"Masukan Batasan: ";cin>>n;
	cout<<"Angka bukan Prima: "<<endl;
	for(int angka=2;angka<=n;++angka)
	{
		int n_faktor=(int)sqrt(angka);
		for(int faktor=2;faktor<=n_faktor;++faktor)
		{
			if(angka%faktor==0)
			{
				cout<<angka<<" ";
				break;
			}
		}
	}
	cout<<endl;
}
