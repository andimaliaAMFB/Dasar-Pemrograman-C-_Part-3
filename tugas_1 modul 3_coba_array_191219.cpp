//tugas_1 modul 3_coba_array
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i['n'];
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
		cout<<i[j]<<" ";
	}
	cout<<endl;
	for(int j=0;j<n;j++)
	{
		if(i[0]>i[j!=0])
		{
			cout<<i[0]<<" adalah angka terbesar"<<endl;
			break;
		}
	}
}
