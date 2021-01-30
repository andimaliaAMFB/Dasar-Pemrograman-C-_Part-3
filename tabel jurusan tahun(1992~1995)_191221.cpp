//tabel jurusan tahun(1992~1995)
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	int data_lulus[4][5];
	data_lulus[0][1]=1992;
	data_lulus[0][2]=1993;
	data_lulus[0][3]=1994;
	data_lulus[0][4]=1995;
	data_lulus[1][1]=35;
	data_lulus[1][2]=45;
	data_lulus[1][3]=80;
	data_lulus[1][4]=120;
	data_lulus[2][1]=100;
	data_lulus[2][2]=110;
	data_lulus[2][3]=70;
	data_lulus[2][4]=101;
	data_lulus[3][1]=10;
	data_lulus[3][2]=15;
	data_lulus[3][3]=20;
	data_lulus[3][4]=17;
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==0&&j==0)
				cout<<"Jurusan               	";
			else if(i==1&&j==0)
				cout<<"1.Teknik Informatika  	";
			else if(i==2&&j==0)
				cout<<"2.Manajemen Informatika	";
			else if(i==3&&j==0)
				cout<<"3.Teknik Komputer      	";	
			else
				cout<<setw(4)<<data_lulus[i][j]<<"	";
			
			if(j==4)
			{
				cout<<endl;
			}
		}
	}
}
