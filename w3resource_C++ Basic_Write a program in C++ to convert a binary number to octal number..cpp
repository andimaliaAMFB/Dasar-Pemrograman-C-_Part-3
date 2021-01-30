//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a binary number to octal number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	long biner,decimal= 0,i,j=1,r;
	int okt[100];
	cout << "Masukan Angka Biner: ";cin>>biner;
	while (biner!= 0)
	{
		r=biner% 10;
		decimal=decimal+r*j;
		j=j*2;
		biner=biner/10;
	}
	while(decimal!= 0)
    {
		okt[i++] = decimal%8;//i=1
        decimal=decimal/8;
    }
	cout<<"Angka Oktetnya adalah ";//oktet=1-8,decimal=1-10
    for(j=i-1; j>0; j--)//i ke sekian, j=i-1==>okt[i]=decimal%2 yang terakhir true
	{
		cout<<okt[j];
    }
	cout<<endl;
}
