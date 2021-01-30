//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a decimal number to binary number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int decimal,i=1,j;
    int biner[100];
	cout << "Masukan Angka Decimal: ";cin>>decimal;
    while(decimal!= 0)
    {
		biner[i++] = decimal%2;//i=1
        decimal=decimal/2;
    }
	cout<<"Angka Binernya adalah ";
    for(j=i-1; j>0; j--)//i ke sekian, j=i-1==>biner[i]=decimal%2 yang terakhir true
	{
		cout<<biner[j];
    }
	cout<<endl;  
} 
