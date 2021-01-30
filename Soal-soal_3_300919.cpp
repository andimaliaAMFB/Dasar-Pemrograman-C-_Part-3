#include<iostream>
using namespace std;

main()
{
	int d,m,j;
	cin>>d;
	if(d<0)
	{
		cout<<"INVALID";
	}
	else if(d>0)
	{
		cout<<"detik: "<<d<<" detik";
		m=d/60;
		cout<<"\nmenit: "<<m<<" menit";
		j=m/60;
		cout<<"\njam: "<<j<<" jam "<<m-60<<" menit"<<endl;
	}
	
	cin>>m;
	if(m<0)
	{
		cout<<"INVALID";
	}
	else if(m>0)
	{
		d=m*60;
		cout<<"detik= "<<d<<" detik";
		cout<<"\nmenit: "<<m<<"menit";
		j=m/60;
		cout<<"\njam: "<<j<<" jam "<<m-60<<" menit"<<endl;
	}
	
	cin>>j;
	if(j<0)
	{
		cout<<"INVALID";
	}
	else if(j>0)
	{
		d=j*3600;
		cout<<"detik: "<<d<<" detik";
		m=m*60;
		cout<<"\nmenit: "<<m<<" menit";
		cout<<"\njam: "<<j<<" jam "<<m-60<<" menit";
	}
	return 0;
}
