//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a binary number to hexadecimal number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	//heksadesimal= 1-9,a-f
	int hex[1000];
	int i=1,j=0,r,dec=0,biner;
	cout << "Masukan Angka Biner: ";cin>>biner;
	while (biner>0) 
	{
		r=biner% 2;
		dec=dec+r*i;
		i=i*2;
		biner=biner/10;
	}
	i = 0;
	while (dec!= 0) 
	{
		hex[i]=dec%16;
		dec=dec/16;
		i++;
	}
	cout<<"Angka Heksadesimalnya adalah ";
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9) 
		{
    		cout<<(char)(hex[j]+55)<<endl;
   		} 
   		else
   		{
    		cout<<hex[j]<<endl;
   		}
	}
}
