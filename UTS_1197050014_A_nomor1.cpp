//UTS Dasar Program 21 Oktober 2019
//Andi Malia Fadilah Bahari
//1197050014
//Teori A 2019
#include<iostream>
using namespace std;
void lker(int num)
{
	int latin []={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	char *symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int i=0;
	
	while(num)
	{
		while(num/latin[i])
		{
			cout<<symbol[i];
			num-=latin[i];
		}
		i++;
	}
}
int main()
{
	int numrom;
	cout<<"Mengkoversi Angka Latin ke Romawi"<<endl;
	cout<<"Masukan Angka decimal: ";
	cin>>numrom;
	cout<<"Maka Angka Romawinya: ";
	lker(numrom);
	
	return 0;
}
