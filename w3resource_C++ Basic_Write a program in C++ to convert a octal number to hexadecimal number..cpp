//https://www.w3resource.com/cpp-exercises/for-loop/index.php
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	long okt,dec=0;
    int i = 0,bin[100],j,r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "Masukan Angka Oktet: ";cin>>okt;
    while (okt!=0) 
    {
    	dec=(long)(dec+ (okt% 10)*pow(8,i++));
    	okt=okt/ 10;
    }
    cout<<dec<<endl;
    while(dec>0)
    {
        r = dec% 16;
        hexdec_num = hex[r] + hexdec_num;//hex[r]=char,hexdec_num=string, bukan penjumlahan
        dec= dec/16;
    }
    cout<<"Angka Hexadecimalnya Adalah "<<hexdec_num<<endl; 
}
