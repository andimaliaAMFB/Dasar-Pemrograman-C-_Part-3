//Tugas 141019
//deposit code, withdraw code, print balance code
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int pilihan,dc,wc,pbc, quit;
	double udc,uwc,upbc;
	
	cout<<" | \t\t\t MENU \t\t\t     |\n";
	cout<<" |===================================================|\n";
	cout<<" |<1 Deposit Code\t\tPrint Balance Code 3>|\n";
	cout<<" |<2 Withdraw Code\t\t                     |\n";
	cout<<" |\t\t\t\t\t      Quit 4>|\n";
	cout<<" |===================================================|\n";
	
	cin>>pilihan;
	switch(pilihan)
	{
		case 1:
		system("cls");
		cout<<"Deposit Code\n";
		cout<<"Masukan angka\n";
		cin>>dc;
		cout<<"Anda Memasukan "<<dc;
		break;
		
		case 2:
		system("cls");
		cout<<"Withdraw Code";
		cout<<"Masukan angka\n";
		cin>>wc;
		cout<<"Anda Menarik "<<wc;
		break;
		
		case 3:
		system("cls");
		cout<<"Print Balance Code\n";
		cout<<"Saldo anda sekarang\n";
		cout<<"       (saldo)";
		break;
		
		case 4:
		system("cls");
		cout<<"Quit";
		break;
	}
	getche();
	system("cls");
	cout<<"TERIMAKASIH TELAH MENGGUNAKAN JASA KAMI";
	getch();
	return 0;
}
