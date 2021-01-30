//program pengulangan 3_191129//
#include<iostream>
#include<conio.h>
using namespace std;
//jumlah deret//
main()
{
	int j,bil,jumlah;
	cout<<"Bilangan: ";
	cin>>bil;
	j=5;
	jumlah=0;
	while(j<=bil)
	{
		jumlah=jumlah+j;
		j++;
	}
	cout<<"jumlah: "<<jumlah;
	getch();
}
