//program pengulangan 5_tinggi segitiga_191129//
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,k,l,n;
	cout<<"masukan tinggi segitiga: ";
	cin>>n;
	i=1;
	while(i<=n)
	{
		int j=n;
		while(j>=i)
		{
			cout<<"*";
			j--;
		}
		cout<<"\n";
		i++;
	}
	k=1;
	while(k<=n)
	{
		int l=1;
		while(l<=k)
		{
			cout<<"*";
			l++;
		}
		cout<<"\n";
		k++;
	}
	getch();
}
