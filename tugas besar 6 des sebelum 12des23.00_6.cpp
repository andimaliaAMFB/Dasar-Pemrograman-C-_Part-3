#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i,j,k;
	cout<<"Masukan tinggi segitiga: ";
	cin>>n;
	system("cls");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i;j++)
		{
			for(k=1;k<=j;k++)
			{
				cout<<j;
			}
		}
		cout<<endl;
	}
	return 0;
}
