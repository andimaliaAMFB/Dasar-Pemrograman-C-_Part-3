//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to display the n terms of harmonic series and their sum. 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,n;
	float s=00;
	cout<<"Masukan Batas Angka: ";cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"1/"<<i<<" + ";
		s+=1/(float)i;
	}
	cout<<"\n Jumlah keseluruhan terhadap "<<n<<" = "<<s;
}
