//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to find the first and last digit of a number.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int n,awal,akhir;
    cout << "Masukan Angka: ";
    cin >> n;
	akhir=n%10;
	for(awal=n;awal>=10;awal=awal/10);
	{
		cout<<"Digit Pertama dari "<<n<<" : "<<awal<<endl;
		cout<<"Digit Terakhir dari "<<n<<" : "<<akhir<<endl;
	}
    
}
