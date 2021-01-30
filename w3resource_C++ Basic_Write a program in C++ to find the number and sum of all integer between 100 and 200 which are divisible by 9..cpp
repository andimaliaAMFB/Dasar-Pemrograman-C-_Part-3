//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.#include<iostream>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int i, jum=0;
	cout<<"Angka diantara 100 dan 200,yang habis dibagi 9: ";
	for(i=101;i<200;i++)
	{
		if(i%9==0)
		{
			cout<<" "<<i;
			jum+=i;
		}
	}
	cout<<"\nJumlah                                        = "<<jum;
}
