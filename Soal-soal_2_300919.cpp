#include<iostream>
using namespace std;

main()
{
	float F,R,C;
	cout<<"suhu pada CELCIUS= ";cin>>C;
	F=(9/5)*C+32;
	cout<<"Konversi suhu dari CELCIUS ke FAHRENHEIT= "<<F<<"F";
	R=(4/5)*C;
	cout<<"\nKonversi suhu dari CELCIUS ke REAMUR= "<<R<<"R";
	
	cout<<"\n\nsuhu pada FAHRENHEIT= ";cin>>F;
	C=(5/9)*F-32;
	cout<<"Konversi suhu dari FAHRENHEIT ke CELCIUS= "<<C<<"C";
	R=((5/9)*F-32)*5/4;
	cout<<"\nKonversi suhu dari FAHRENHEIT ke REAMUR= "<<R<<"R";
	
	cout<<"\n\nsuhu pada REAMUR= ";cin>>R;
	C=(5/4)*R;
	cout<<"Konversi suhu dari REAMUR ke CELCIUS= "<<C<<"C";
	F=(4/5)+32*(9/5);
	cout<<"\nKonversi suhu dari REAMUR ke Celcius= "<<F<<"F";
	return 0;
}
