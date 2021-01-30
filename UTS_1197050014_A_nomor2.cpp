/*UTS Dasar Program
Andi Malia Fadilah Bahari
1197050014
A*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int win,wout,jam,menit,detik, jamwin,mntwin,jamwout,mntwout,sw,jsw,msw;
	jam=3600;
	menit=60;
	detik=1;
	
	jamwin=11;
	mntwin=45;
	
	jamwout=13;
	mntwout=10;
		
	cout<<"Waktu masuk: "<<jamwin<<"."<<mntwin<<endl;
	
	cout<<"Waktu keluar: "<<jamwout<<"."<<mntwout<<endl;
	
	cout<<"Selisih Waktu keluar dan waktu masuk adalah"<<endl;
	
	win=(jamwin*jam)+(mntwin*menit);
	wout=(jamwout*jam)+(mntwout*menit);
	sw=wout-win;
	
	jsw=sw/jam;
	msw=sw/menit-60;
	cout<<jsw<<" jam ";
	cout<<msw<<" menit";
	getche();
	return 0;
}
