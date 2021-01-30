//UAS Praktikum Dasprog_191228
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
main()
{
	int n;
	float tug['n'],uts['n'],uas['n'],jum['n'],rata['n'],max['n'],min['n'];
	cout<<"Masukan Banyak Mahasiswa yang akan dimasukan: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukan Nilai Tugas: ";cin>>tug[i];
		cout<<"Masukan Nilai UTS  : ";cin>>uts[i];
		cout<<"Masukan Nilai UAS  : ";cin>>uas[i];
		cout<<"=======================";
		cout<<endl;
		//mencari rata-rata
		jum[i]=tug[i]+uts[i]+uas[i];
		rata[i]=jum[i]/3;
		
		//mencari nilai max dari 3 nilai input tiap orang
		if(tug[i]>=uts[i]&&tug[i]>=uas[i])
		{
			max[i]=tug[i];
			min[i]=uts[i];
			if(uts[i]>=uas[i])
			{
				min[i]=uas[i];
			}
		}
		else if(uts[i]>=uas[i]&&uts[i]>=tug[i])
		{
			max[i]=uts[i];
			min[i]=uas[i];
			if(uas[i]>=tug[i])
			{
				min[i]=tug[i];
			}
		}
		else if(uas[i]>=tug[i]&&uas[i]>=uts[i])
		{
			max[i]=uas[i];
			min[i]=tug[i];
			if(tug[i]>=uts[i])
			{
				min[i]=uts[i];
			}
		}
	}
	getche();
	system("cls");
	
	//output
	cout<<"Nilai ke      || TUGAS || UTS || UAS || Rata-rata || Grade || Nilai Terbesar || Nilai Terkecil ||";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Mahasiswa ke-"<<i+1<<"||";
		cout<<tug[i]<<"	|| ";
		cout<<uts[i]<<"	|| ";
		cout<<uas[i]<<"	|| ";
		cout<<rata[i]<<"	|| ";
		if(rata[i]>=80&&rata[i]<=100)
		{
			cout<<" A	|| ";
		}
		else if(rata[i]>=60&&rata[i]<80)
		{
			cout<<" B	|| ";
		}
		else if(rata[i]>=50&&rata[i]<60)
		{
			cout<<" C	|| ";
		}
		else if(rata[i]>=40&&rata[i]<50)
		{
			cout<<" D	|| ";
		}
		else if(rata[i]>=0&&rata[i]<40)
		{
			cout<<" E	|| ";
		}
		cout<<max[i]<<"	|| ";
		cout<<min[i]<<"	|| ";
		cout<<endl;
	}
}
