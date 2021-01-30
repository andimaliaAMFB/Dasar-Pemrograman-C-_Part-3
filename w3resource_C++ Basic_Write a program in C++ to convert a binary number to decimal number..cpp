//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a binary number to decimal number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	long biner,decimal= 0,j=1,r;
	cout << "Masukan Angka Biner: ";cin>>biner;
	while (biner!= 0)
	{
		r=biner% 10;
		decimal=decimal+r*j;
		j=j*2;
		biner=biner/10;
	}
	cout<<"Angka Decimalnya adalah " <<decimal<<endl;
}
