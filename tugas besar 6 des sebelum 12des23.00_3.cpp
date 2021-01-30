#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i=1,jumlah=0;
	cout<<"INPUT : ";
	cin>>n;
	while(i<=n)
	{
		jumlah=jumlah+i;
		i++;
	}
	cout<<"OUTPUT: "<<jumlah;
	return 0;
}
