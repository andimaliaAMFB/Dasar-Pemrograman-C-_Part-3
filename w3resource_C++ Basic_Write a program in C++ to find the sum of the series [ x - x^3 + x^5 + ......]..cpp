//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	float x, jum,ctr;
	int i,n,m,mm,nn=0;
	cout<<"Masukan Nilai X: ";cin>>x;
	cout<<"Masukan Batas Angka: ";cin>>n;
	jum=x;
	m=-1;
	cout<<"Nilai dari Perhitungan: "<<endl;
	cout<<jum<<endl;
	for(i=1;i<n;i++)
	{
		ctr=(2*i+1);
		mm=pow(x,ctr);
		nn=mm*m;
		cout<<nn<<endl;
		jum=jum+nn;
		m=m*(-1);
	}
	cout<<"Jumpah Dari Pehitungan atas "<<n<<" adalah "<<jum;
}
