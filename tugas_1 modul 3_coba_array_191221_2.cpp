//tugas_1 modul 3_coba_array
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i['n'],temp;
	cout<<"Menentukan bilangan terbesar dari banyaknya bilangan yang dimasukan"<<endl;
	cout<<"==================================================================="<<endl;
	cout<<"Masukan banyak bilangan yang akan dimasukan: ";cin>>n;
	cout<<"Masukan bilangan sebanyak "<<n<<endl;;
	
	for(int j=0;j<n;j++)
	{
		cin>>i[j];
	}
	
	system("cls");
	for(int j=0;j<n;j++)
	{
		cout<<i[j]<<"	";
	}
	cout<<endl;
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(i[j]<i[k])
			{
				temp=i[j];
				i[j]=i[k];
				i[k]=temp;
			}
		}
	}
	
	cout<<"Urutan bilangan dari terbesar ke terkecil"<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<i[j]<<"	";
	}
}
