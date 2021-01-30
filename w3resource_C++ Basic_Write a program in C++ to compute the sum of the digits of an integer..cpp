//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to compute the sum of the digits of an integer.
#include<iostream>
#include<conio.h>
#include<conio.h>
using namespace std;
main()
{
	int num,n,jum=0;
	cout<<"Masukan Angka: ";cin>>num;
	n=num;
	while(num!=0)
	{
		jum+=num%10;
		num/=10;
	}
	cout<<"Jumlah digit dari "<<n<<" adalah "<<jum;
}
