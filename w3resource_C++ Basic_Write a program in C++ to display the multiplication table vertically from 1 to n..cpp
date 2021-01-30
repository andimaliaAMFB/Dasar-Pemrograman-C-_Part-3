//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to display the multiplication table vertically from 1 to n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int i,j,n;
	cout<<"Masukan banyak Angka: ";cin>>n;
	cout<<"Tabel Perkalian dari 1 sampai "<<n<<endl;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<j<<" x "<<i<<" = "<<i*j<<"	";
		}
		cout<<endl;
	}
}
