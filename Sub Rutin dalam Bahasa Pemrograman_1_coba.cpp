//Sub Rutin dalam Bahasa Pemrograman_coba
#include<iostream>
#include<conio.h>
using namespace std;

int cek(char s, char c) 
{
	if(s==c) return 1;
	return 0;
}

int main(void) 
{
	char a,b;
	cout<<"Masukan huruf pertama: ";cin>>a;
	cout<<"Masukan huruf kedua  : ";cin>>b;
	cout << cek(a,b) << endl;
	return 0;
}
