//https://www.w3resource.com/cpp-exercises/for-loop/index.php
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	long okt,dec=0;
    int i = 0,bin[100],j;
	cout << "Masukan Angka Oktet: ";cin>>okt;
    while (okt!=0) 
    {
    	dec=(long)(dec+ (okt% 10)*pow(8,i++));
    	okt=okt/ 10;
    }
    i=1;
	while(dec!= 0)
    {
		bin[i++] = dec%2;//i=1
        dec=dec/2;
    }
    cout<<"Angka Binernya adalah ";
    for(j=i-1; j>0; j--)//i ke sekian, j=i-1==>biner[i]=decimal%2 yang terakhir true
	{
		cout<<bin[j];
    }
}
