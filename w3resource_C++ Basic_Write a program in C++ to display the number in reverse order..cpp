//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to display the number in reverse order.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int num,r,jum=0,t;
	cout<<"Masukan Angka: ";cin>>num;
	for(t=num;num!=0;num=num/10)
	{
		r=num%10;
		jum=jum*10+r;
	}
	cout<<"Urutan Angka Secara Terbalik adalah: "<<jum;
}
