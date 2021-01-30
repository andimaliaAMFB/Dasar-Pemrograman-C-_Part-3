//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to compare two numbers.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int x,y;
	cout<<"Masukan Nilai X dan Y: "<<endl;
	cin>>x;
	cin>>y;
	system("cls");
	
	cout<<"X    Y"<<endl;
	if(x!=y)
	cout<<x<<" != "<<y<<endl;
	if(x==y)
	cout<<x<<" == "<<y<<endl;
	if(x<y)
	cout<<x<<" <  "<<y<<endl;
	if(x>y)
	cout<<x<<" >  "<<y<<endl;
	if(x<=y)
	cout<<x<<" <= "<<y<<endl;
	if(x>=y)
	cout<<x<<" >= "<<y<<endl;
}
