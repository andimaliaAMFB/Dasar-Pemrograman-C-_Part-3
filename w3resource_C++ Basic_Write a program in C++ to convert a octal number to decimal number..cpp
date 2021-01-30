//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a octal number to decimal number.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	long okt,dec=0;
    int i = 0;
	cout << "Masukan Angka Oktet: ";cin>>okt;
    while (okt!=0) 
    {
    	dec=(long)(dec+ (okt% 10)*pow(8,i++));
    	okt=okt/ 10;
    }
    cout<<"Angka Decimalnya adalah " <<dec;	
}
