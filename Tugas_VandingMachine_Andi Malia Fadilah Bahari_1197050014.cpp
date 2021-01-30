//TUGAS Vending Machine
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int B1,B2,B3,B4,B5,B,J,H,A;//B1-5=benda,J=jumlah,H=harga,A=Jawaban
	
	/*Harga B dalam satuan rupiah*/
	B1= 5000;
	B2= 3500;
	B3= 7500;
	B4= 10000;
	B5= 5500;
	J>0;
	
	cout<<"PROGRAM VENDING MACHINE\t ||\n\t  by  \t\t ||\nANDI MALIA FADILAH BAHARI||\n      1197050014\t ||\n    UINSGD BANDUNG\t ||";
	cout<<"\n=========================||";
	cout<<"\n\nTEKAN 'ENTER' UNTUK MEMULAI";
	getche();
	system("cls");
	awal:
		cout<<" ||\t\t\t\tAMFBMACHINE\t\t\t       ||\n";
		cout<<" ||====================================================================||\n";
		cout<<" || MILO 240ml ||  Bembeng  ||  Coca-cola  ||  Mr.potato  ||  Chitato  ||\n ||   "<<B1<<"Rp   ||   "<<B2<<"Rp  ||    "<<B3<<"Rp   ||   "<<B4<<"Rp   ||  "<<B5<<"Rp   ||"<<endl;
		cout<<" ||====================================================================||";
		cout<<"\n ||\t(1)\t     (2)\t   (3)\t\t  (4)\t\t(5)    ||\n";
		cout<<" ||====================================================================||\n";
		cin>>B;
		if(B==1)
		{
			system("cls");
			cout<<"MILO 240ml\t\t JUMLAH: ";cin>>J;H=B1*J;
			cout<<"\nHarga: "<<H<<"Rp";
			cout<<"\n\n       \t\tBAYAR";
			cout<<"\n\tvirtual\t\tcash";
			cout<<"\n\t  (1)  \t\t (2)\n";
			cin>>A;
			if(A==1)
			{
				system("cls");
				cout<<"\t   SCAN kode berikut\n\n\t\t(scan)\n";
				cout<<"\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}	
			else
			{
				system("cls");
				cout<<"MILO 240ml\t\t JUMLAH: "<<J;
				cout<<"\n\nHarga: "<<H<<"Rp";
				cout<<"\n\n    Silahkan masukan uang tunai";
				getche();
				
				system("cls");
				cout<<"\t     HARAP TUNGGU";
				cout<<"\n\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}
		}
		else if(B==2)
		{
			system("cls");
			cout<<"Bembeng\t      JUMLAH: ";cin>>J;H=B2*J;
			cout<<"\nHarga: "<<H<<"Rp";
			cout<<"\n\n       \t\tBAYAR";
			cout<<"\n\tvirtual\t\tcash";
			cout<<"\n\t  (1)  \t\t (2)\n";
			cin>>A;
			if(A==1)
			{
				system("cls");
				cout<<"\t   SCAN kode berikut\n\n\t\t(scan)\n";
				cout<<"\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}	
			else
			{
				system("cls");
				cout<<"Bembeng\t      JUMLAH: "<<J;
				cout<<"\n\nHarga: "<<H<<"Rp";
				cout<<"\n\n    Silahkan masukan uang tunai";
				getche();
				
				system("cls");
				cout<<"\t     HARAP TUNGGU";
				cout<<"\n\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}
		}
		else if(B==3)
		{
			system("cls");
			cout<<"Coca-cola\t      JUMLAH: ";cin>>J;H=B3*J;
			cout<<"\nHarga: "<<H<<"Rp";
			cout<<"\n\n       \t\tBAYAR";
			cout<<"\n\tvirtual\t\tcash";
			cout<<"\n\t  (1)  \t\t (2)\n";
			cin>>A;
			if(A==1)
			{
				system("cls");
				cout<<"\t   SCAN kode berikut\n\n\t\t(scan)\n";
				cout<<"\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}	
			else
			{
				system("cls");
				cout<<"Coca-cola\t      JUMLAH: "<<J;
				cout<<"\n\nHarga: "<<H<<"Rp";
				cout<<"\n\n    Silahkan masukan uang tunai";
				getche();
				
				system("cls");
				cout<<"\t     HARAP TUNGGU";
				cout<<"\n\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}
		}
		else if(B==4)
		{
			system("cls");
			cout<<"Mr.potato\t      JUMLAH: ";cin>>J;H=B4*J;
			cout<<"\nHarga: "<<H<<"Rp";
			cout<<"\n\n       \t\tBAYAR";
			cout<<"\n\tvirtual\t\tcash";
			cout<<"\n\t  (1)  \t\t (2)\n";
			cin>>A;
			if(A==1)
			{
				system("cls");
				cout<<"\t   SCAN kode berikut\n\n\t\t(scan)\n";
				cout<<"\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}	
			else
			{
				system("cls");
				cout<<"Mr.potato\t      JUMLAH: "<<J;
				cout<<"\n\nHarga: "<<H<<"Rp";
				cout<<"\n\n    Silahkan masukan uang tunai";
				getche();
				
				system("cls");
				cout<<"\t     HARAP TUNGGU";
				cout<<"\n\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}
		}
		else if(B==5)
		{
			system("cls");
			cout<<"Chitato\t      JUMLAH: ";cin>>J;H=B5*J;
			cout<<"\nHarga: "<<H<<"Rp";
			cout<<"\n\n       \t\tBAYAR";
			cout<<"\n\tvirtual\t\tcash";
			cout<<"\n\t  (1)  \t\t (2)\n";
			cin>>A;
			if(A==1)
			{
				system("cls");
				cout<<"\t   SCAN kode berikut\n\n\t\t(scan)\n";
				cout<<"\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}	
			else
			{
				system("cls");
				cout<<"Chitato\t      JUMLAH: "<<J;
				cout<<"\n\nHarga: "<<H<<"Rp";
				cout<<"\n\n    Silahkan masukan uang tunai";
				getche();
				
				system("cls");
				cout<<"\t     HARAP TUNGGU";
				cout<<"\n\nTekan 'Enter' untuk mengakhiri aplikasi";
				getche();
				system("cls");
				cout<<"========================================\nTERIMAKASIH TELAH MENGGUNAKAN JASA KAMI\n========================================";
				getche();
			}
		}
	system("cls");
	goto awal;
	getche();
	return 0;
}
