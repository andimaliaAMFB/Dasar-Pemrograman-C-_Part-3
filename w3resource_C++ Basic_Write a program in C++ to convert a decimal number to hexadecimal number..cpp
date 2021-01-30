//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to convert a decimal number to hexadecimal number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "Masukan Angka Decimal: ";
	cin>> dec_num;
    while(dec_num>0)
    {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;//hex[r]=char,hexdec_num=string, bukan penjumlahan
        dec_num = dec_num/16;
    }
    cout<<"Angka Hexadecimalnya Adalah "<<hexdec_num<<endl; 
}
