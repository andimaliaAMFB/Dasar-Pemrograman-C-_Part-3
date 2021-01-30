//https://www.w3resource.com/cpp-exercises/for-loop/index.php_coba
//Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	long int i,n,t;
	int sum=0;
	cout<<"Masukan Batas Angka : ";cin>>n;
	cout<<"Masukan Sebuah Angka: ";cin>>t;
	for(i=1;i<=n;i++)
	{
		sum+=t;
		cout<<t<<" ";
		t=t*10;
		t=t+3;
	}
	cout<<"\nJumlah Keseluruhan= "<<sum;
}
