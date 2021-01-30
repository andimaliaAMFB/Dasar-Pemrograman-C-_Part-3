//Tugas 191007
#include<iostream>
using namespace std;
int main()
{
	float s;
	
	cout<<"Masukan Nilai Anda: ";
	cin>>s;
	if((s>=90)&&(s<=100))
		cout<<"Kategori A";
	else if((s>=80)&&(s<=89))
		cout<<"Kategori B";
	else if((s>=70)&&(s<=79))
		cout<<"Kategori C";
	else if((s>=60)&&(s<=69))
		cout<<"Kategori D";
	else if((s>=0)&&(s<=59))
		cout<<"Kategori F";
	else if(s<0)
		cout<<"INVALID DATA";
	else if(s>100)
		cout<<"INVALID DATA";
	
	return 0;
}
