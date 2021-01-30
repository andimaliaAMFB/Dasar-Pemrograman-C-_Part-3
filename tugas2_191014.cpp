//Tugas2_191014
//calculator
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,b,bentuk,Hasil;
	a,b>=0;
	cout<<" |=========================|\n";
	cout<<" |  KALKULATOR SEDERHANA   |\n";
	cout<<" |           by            |\n";
	cout<<" |ANDI MALIA FADILAH BAHARI|\n";
	cout<<" |       1197050014        |\n";
	cout<<" |=========================|\n";
	cout<<"\n Tekan 'ENTER' Untuk memulai";
	getche();
	awal:
	system("cls");
	cout<<"\tPilih Jenis Perhitungan\n";
	cout<<"======================================\n";
	cout<<"<1 Penjumlahan(+)\t  Perkalian 3>\n";
	cout<<"<2 Pengurangan(-)\t  Pembagian 4>\n";
	cin>>bentuk;
	system("cls");
	switch(bentuk)
	{
		case 1:
		cout<<"Masukan Angka yang pertama: ";cin>>a;
		cout<<"Masukan Angka yang ke- dua: ";cin>>b;
		Hasil=a+b;
		cout<<"Hasil Penjumlahan\n"<<a<<" + "<<b<<" ="<<Hasil;
		break;
		
		case 2:
		cout<<"Masukan Angka yang pertama: ";cin>>a;
		cout<<"Masukan Angka yang ke- dua: ";cin>>b;
		Hasil=a-b;
		cout<<"Hasil Pengurangan\n"<<a<<" + "<<b<<" ="<<Hasil;
		break;
		
		case 3:
		cout<<"Masukan Angka yang pertama: ";cin>>a;
		cout<<"Masukan Angka yang ke- dua: ";cin>>b;
		Hasil=a*b;
		cout<<"Hasil Perkaliann\n"<<a<<" + "<<b<<" ="<<Hasil;
		break;
		
		case 4:
		cout<<"Masukan Angka yang pertama: ";cin>>a;
		cout<<"Masukan Angka yang ke- dua: ";cin>>b;
		Hasil=a/b;
		cout<<"Hasil Pembagian\n"<<a<<" + "<<b<<" ="<<Hasil;
		break;
		
		default:
		cout<<"ERROR";
		break;
	}
	cout<<"\n\n Tekan 'ENTER' Untuk selesai";
	getche();
	goto awal;
	return 0;
}
