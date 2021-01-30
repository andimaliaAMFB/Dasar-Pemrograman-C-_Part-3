//program pengulangan 4_tinggi segitiga_191129//
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
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
		i++;
	}
	k=n-1;
	while(k>=1)
	{
		int l=1;
		while(l<=k)
		{
			cout<<"*";
			l++;
		}
		cout<<"\n";
		k--;
	}
	getch();
}
