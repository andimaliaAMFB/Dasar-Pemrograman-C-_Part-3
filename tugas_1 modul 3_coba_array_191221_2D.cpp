//tugas_1 modul 3_coba_array
#include<iostream>
#include<conio.h>
using namespace std;

const int BARIS = 5;
const int KOLOM = 5;
void isi_matriks(float matriks[BARIS][KOLOM], int &brs, int &kol);

main()
{
	int b,k,matriks['b']['k'],temp;
	cout<<"Menentukan bilangan terbesar dari banyaknya bilangan yang dimasukan"<<endl;
	cout<<"==================================================================="<<endl;
	cout<<"Masukan banyaknya baris: ";cin>>b;
	cout<<"Masukan banyaknya kolom: ";cin>>k;
	cout<<"Masukan bilangan sebanyak "<<b*k<<endl;
	
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<k;j++)
		{
			cin>>matriks[i][j];
		}
		cout<<endl;
	}
	
	system("cls");
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<k;j++)
		{
			cout<<matriks[i][j]<<"	";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<k;j++)
		{
			for(int l=j+1;l<k;l++)
			{
				if(matriks[i][j]>matriks[i][l])
				{
					temp=matriks[i][j];
					matriks[i][j]=matriks[i][l];
					matriks[i][l]=temp;
				}
			}
		}
		
	}
	
	cout<<"Urutan bilangan dari terkecil ke terbesar tiap barisnya"<<endl;
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<k;j++)
		{
			cout<<matriks[i][j]<<"	";
		}
		cout<<endl;
	}
}
