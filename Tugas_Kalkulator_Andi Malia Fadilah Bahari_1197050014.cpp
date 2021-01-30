//Tugas_Kalkulator_141019
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int bentuk,a, lagi;
	double num1, num2,jumlah,b,Hasil;
	float phi;
	phi=3.14;
	cout<<" |=========================|\n";
	cout<<" |       KALKULATOR        |\n";
	cout<<" |           by            |\n";
	cout<<" |ANDI MALIA FADILAH BAHARI|\n";
	cout<<" |       1197050014        |\n";
	cout<<" |=========================|\n";
	cout<<"\n Tekan 'ENTER' Untuk memulai";
	getche();
	awal:
		system("cls");
		cout<<"    Pilih Bentuk Perhitungan\n";
		cout<<"===============================\n";
		cout<<"<1 Pangkat\t\tSin 4>\n";
		cout<<"<2 Akar\t\t\tCos 5>\n";
		cout<<"<3 Logaritma\t\tTan 6>\n";
		cin>>bentuk;
		system("cls");
		switch(bentuk)
		{
			case 1:
			cout<<"||\tPangkat\t      ||\n";
			jumlah=1;
			cout<<"Masukan Angka Pertama: ";cin>>num1;
			cout<<"Masukan Angka Ke- dua: ";cin>>num2;
			for(int a=0;a<num2;a++)
			{
				jumlah*=num1;
			}
			cout<<"\nHasil "<<num1<<"pangkat"<<num2<<" = "<<jumlah;
			break;
			
			case 2:
			cout<<"||\tAkar\t   ||\n";
			cout<<"Masukan Angka: ";cin>>num1;
			cout<<"\nHasil Akar dari "<<num1<<" = "<<sqrt(num1);
			break;
			
			case 3:
			cout<<"||\tLogaritma\t||\n";
			cout<<"Masukan Angka: ";cin>>num1;
			jumlah=log10(num1);
			cout<<"\nHasil Logaritma dari "<<num1<<" = "<<jumlah;
			break;
			
			case 4:
			cout<<"||\tSin\t||\n";
			cout<<"Masukan Angka: ";cin>>num1;
			jumlah=sin(num1*phi/180);
			cout<<"\nHasil Sin dari "<<num1<<" = "<<jumlah;
			break;
			
			case 5:
			cout<<"||\tCos\t||\n";
			cout<<"Masukan Angka: ";cin>>num1;
			jumlah=sin(num1*phi/180);
			cout<<"\nHasil Cos dari "<<num1<<" = "<<jumlah;
			break;
			
			case 6:
			cout<<"||\tTan\t||\n";
			cout<<"Masukan Angka: ";cin>>num1;
			jumlah=sin(num1*phi/180);
			cout<<"\nHasil Tan dari "<<num1<<" = "<<jumlah;
			break;
			
			default:
			break;
		}
		getche();
		system("cls");
		cout<<jumlah;
		cout<<"\n\nLanjutkan?[Y/T] ";
		lagi=getche();
		if(lagi=='Y'||lagi=='y')
		{
			cout<<"\n"<<endl;
			cout<<"\tPilih Jenis Perhitungan\n";
			cout<<"======================================\n";
			cout<<"<1 Penjumlahan(+)\t  Perkalian 3>\n";
			cout<<"<2 Pengurangan(-)\t  Pembagian 4>\n";
			cin>>bentuk;
			system("cls");
			switch(bentuk)
			{
				case 1:
				cout<<"Masukan Angka yang ke- dua: ";cin>>b;
				Hasil=jumlah+b;
				cout<<"Hasil Penjumlahan\n"<<jumlah<<" + "<<b<<" ="<<Hasil;
				break;
		
				case 2:
				cout<<"Masukan Angka yang pertama: ";cin>>jumlah;
				cout<<"Masukan Angka yang ke- dua: ";cin>>b;
				Hasil=jumlah-b;
				cout<<"Hasil Pengurangan\n"<<jumlah<<" + "<<b<<" ="<<Hasil;
				break;
		
				case 3:
				cout<<"Masukan Angka yang pertama: ";cin>>jumlah;
				cout<<"Masukan Angka yang ke- dua: ";cin>>b;
				Hasil=jumlah*b;
				cout<<"Hasil Perkaliann\n"<<jumlah<<" + "<<b<<" ="<<Hasil;
				break;
		
				case 4:
				cout<<"Masukan Angka yang pertama: ";cin>>jumlah;
				cout<<"Masukan Angka yang ke- dua: ";cin>>b;
				Hasil=jumlah/b;
				cout<<"Hasil Pembagian\n"<<jumlah<<" + "<<b<<" ="<<Hasil;
				break;
		
				default:
				cout<<"ERROR";
				break;
		}
	}
}
