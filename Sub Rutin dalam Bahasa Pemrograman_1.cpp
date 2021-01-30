//Sub Rutin dalam Bahasa Pemrograman
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
	a = 'a';
	b = 'a';//a==b=>s==c
	cout << cek(a,b) << endl;
	return 0;
}
