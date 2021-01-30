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
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
