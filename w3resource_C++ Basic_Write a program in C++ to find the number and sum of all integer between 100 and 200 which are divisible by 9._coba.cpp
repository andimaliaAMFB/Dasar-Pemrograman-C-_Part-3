//https://www.w3resource.com/cpp-exercises/for-loop/index.php_coba
//Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.#include<iostream>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int i,batas_a,batas_A,pembagi, jum=0;
	cout<<"Batas Awal         : ";cin>>batas_a;
	cout<<"Batas Akhir        : ";cin>>batas_A;
	cout<<"Angka Habis Pembagi: ";cin>>pembagi;
	cout<<"Angka diantara "<<batas_a<<" dan "<<batas_A<<",yang habis dibagi "<<pembagi<<": ";
	for(i=batas_a+1;i<batas_A;i++)
	{
		if(i%pembagi==0)
		{
			cout<<" "<<i;
			jum+=i;
		}
	}
	cout<<"\nJumlah             = "<<jum;
}
