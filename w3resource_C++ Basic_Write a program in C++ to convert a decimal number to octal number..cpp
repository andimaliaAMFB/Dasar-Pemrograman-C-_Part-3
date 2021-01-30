//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a decimal number to octal number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int decimal,i=1,j;
    int okt[100];
	cout << "Masukan Angka Decimal: ";cin>>decimal;
    while(decimal!= 0)
    {
		okt[i++] = decimal%8;//i=1
        decimal=decimal/8;
    }
	cout<<"Angka Oktetnya adalah ";//oktet=1-8,decimal=1-10
    for(j=i-1; j>0; j--)//i ke sekian, j=i-1==>okt[i]=decimal%2 yang terakhir true
	{
		cout<<okt[j]<<" ";
    }
	cout<<endl;  
} 
