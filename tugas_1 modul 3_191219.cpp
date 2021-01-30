//tugas_1 modul 3
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c;
	cout<<"Menentukan bilangan terbesar dari 3 bilangan"<<endl;
	cout<<endl;
	cout<<"Masukan 3 bilang berturut-turut"<<endl;
	cin>>a;cin>>b;cin>>c;
	
	if(a>b&&a>c)
	{
		cout<<a<<" adalah angka terbesar"<<endl;
		if(b>c)
		{
			cout<<c<<" adalah angka terkecil"<<endl;
		}
		else
		{
			cout<<b<<" adalah angka terkecil"<<endl;
		}
	}
	else if(b>a&&b>c)
	{
		cout<<b<<" adalah angka terbesar"<<endl;
		if(a>c)
		{
			cout<<c<<" adalah angka terkecil"<<endl;
		}
		else
		{
			cout<<a<<" adalah angka terkecil"<<endl;
		}
	}
	else
	{
		cout<<c<<" adalah angka terbesar"<<endl;
		if(a>b)
		{
			cout<<b<<" adalah angka terkecil"<<endl;
		}
		else
		{
			cout<<a<<" adalah angka terkecil"<<endl;
		}
	}
}
