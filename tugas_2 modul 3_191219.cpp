//tugas_2 modul 3
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int balokv,baloklp,tabunglp,tabungv,bolalp,bolav,jwb;
	float p,l,t,r,pi=3.14;
	
	cout<<"Pilih jenis Perhitungan: "<<endl;
	cout<<"1. Menghitung Luas Permukaan dan Volume Balok"<<endl;
	cout<<"2. Menghitung Luas Permukaan dan Volume Tabung"<<endl;
	cout<<"3. Menghitung Luas Permukaan dan Volume Bola"<<endl;
	cin>>jwb;
	
	system("cls");
	switch(jwb)
	{
		case 1:
			cout<<"Masukan Lebar: ";cin>>l;
			cout<<"Masukan Panjang: ";cin>>p;
			cout<<"Masukan Tinggi: ";cin>>t;
			baloklp=2*((p*l)+(p*t)+(l*t));
			cout<<"Luas Permukaan Balok = "<<baloklp<<endl;
			balokv=l*p*t;
			cout<<"Volume Balok = "<<balokv<<endl;
			break;
		case 2:
			cout<<"Masukan Radius Lingkaran: ";cin>>r;
			cout<<"Masukan Tinggi: ";cin>>t;
			tabunglp=2*pi*r*(r+t);
			cout<<"Luas Permukaan Balok = "<<tabunglp<<endl;
			tabungv=pi*r*r*t;
			cout<<"Volume Balok = "<<tabungv<<endl;
			break;
		case 3:
			cout<<"Masukan Radius Lingkaran: ";cin>>r;
			bolalp=4*pi*r*r;
			cout<<"Luas Permukaan Balok = "<<bolalp<<endl;
			bolav=4/3*pi*r*r*r;
			cout<<"Volume Balok = "<<bolav<<endl;
			break;
	}
}
