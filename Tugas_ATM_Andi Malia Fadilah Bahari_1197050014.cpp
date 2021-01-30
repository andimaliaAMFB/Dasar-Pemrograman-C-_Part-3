//TUGAS_ATM
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int bahasa,pin,digit,mpin,keluar,angka;
	digit=999999;
	cout<<"      PROGRAM ATM\t ||\n\t  by  \t\t ||\nANDI MALIA FADILAH BAHARI||\n      1197050014\t ||\n    UINSGD BANDUNG\t ||";
	cout<<"\n=========================||";
	cout<<"\n\nTEKAN 'ENTER' UNTUK MEMULAI";
	getche();
	awal:
		system("cls");
		cout<<"  MASUKAN KARTU ANDA  \n=======================\nPLEASE INSERT YOUR CARD\n     (TEKAN ENTER)"<<endl;
		getche();
	
		system("cls");
		cout<<"       SELAMAT DATANG\n	     di\n	  AMFBANK"<<endl;
		cout<<"============================";
		cout<<"\n SILAHKAN PILIH BAHASA ANDA\n============================\nPLEASE SELECT YOUR LANGUANGE"<<endl;
		cout<<"(1)< INDONESIA\n(2)< INGGRIS"<<endl;
	
		cin>>bahasa;
		if(bahasa==1)
		{
			Mpin:
				system("cls");
				cout<<"MASUKAN PIN ANDA\n   (6 DIGIT)"<<endl;
				cin>>pin;
				if(pin>digit)
				{
					system("cls");
					cout<<"==========INVALID==========\n       (PIN 6 DIGIT)\n"<<endl;
					cout<<"\t\tULANGI PIN>\n\t\t   KELUAR>"<<endl;
					cin>>mpin;
					if(mpin==1)
					{
						goto Mpin;
					}
					else
					{
						system("cls");
						goto awal;
					}
				}
				
				else
	 			{
					system("cls");
					cout<<"\t      PILIH PAKET TUNAI	\n";
					cout<<"______________________________________________\n";
					cout<<"(1)<=100.000			1.000.000=>(5)\n";
					cout<<"(2)<=200.000		 	1.500.000=>(6)\n";
					cout<<"(3)<=300.000			2.000.000=>(7)\n";
					cout<<"(4)<=500.000	  	   TRANSAKSI LAIN=>(8)"<<endl;
					cin>>keluar;
					if(keluar!=8)
					{
						system("cls");
						cout<<"TERIMAKASIH TELAH MENGGUNAKAN JASA KAMI"<<endl;
						cout<<"\n     TEKAN 'ENTER' UNTUK KELUAR";
						getche();
						system("cls");
					}
					else
					{
						system("cls");
						cout<<"MASUKAN ANGKA"<<endl;
						cin>>angka;
						system("cls");
						cout<<"TERIMAKASIH TELAH MENGGUNAKAN JASA KAMI"<<endl;
						cout<<"\n     TEKAN 'ENTER' UNTUK KELUAR"<<endl;
						getche();
						system("cls");
					}
					goto awal;
				}
		}
			
		else
		{
			MPin:
				system("cls");
				cout<<"INSERT YOUR PIN\n"<<endl;
				cin>>pin;
				if(pin>digit)
				{
					system("cls");
					cout<<"==========INVALID==========\n       (PIN 6 DIGIT)\n"<<endl;
					cout<<"\t\t RETRY PIN>\n\t\t      EXIT>"<<endl;
					cin>>mpin;
					if(mpin==1)
					{
						goto MPin;
					}
					else
					{
						system("cls");
						goto awal;
					}
				}
				
				else
				{
					system("cls");
					cout<<"\t  CHOOSE A CASH PACKAGE	\n";
					cout<<"___________________________________________\n";
					cout<<"(1)<=100.000			1.000.000=>(5)\n";
					cout<<"(2)<=200.000		 	1.500.000=>(6)\n";
					cout<<"(3)<=300.000			2.000.000=>(7)\n";
					cout<<"(4)<=500.000	       OTHER TRANSACTIONS=>(8)"<<endl;
					cin>>keluar;
					if(keluar!=8)
					{
						system("cls");
						cout<<" THANK YOU FOR USING OUR SERVICES"<<endl;
						cout<<"\nPRESS 'ENTER'' TO EXIT THE PROGRAM"<<endl;
						getche();
						system("cls");
					}
					else
					{
						system("cls");
						cout<<"INSERT NUMBER"<<endl;
						cin>>angka;
						system("cls");
						cout<<" THANK YOU FOR USING OUR SERVICES"<<endl;
						cout<<"\nPRESS 'ENTER' TO EXIT THE PROGRAM"<<endl;
						getche();
						system("cls");
					}
					goto awal;
				}
	}
	return 0;
}
