#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i,j,k;
	cout<<"Masukan tinggi segitiga: ";
	cin>>n;
	system("cls");
	i=1;
	do
	{
		j=i;
		while(j<=i)
		{
			k=1;
			while(k<=j)
			{
				cout<<j;
				k++;
			}
			j++;
		}
		i++;
		cout<<endl;
	}
	while(i<=n);
	return 0;
}
