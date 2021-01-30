#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i,j;
	cout<<"Masukan tinggi segitiga: ";
	cin>>n;
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=n-i+1;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
