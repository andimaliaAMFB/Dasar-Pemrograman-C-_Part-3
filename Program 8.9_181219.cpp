//Program 8.9
#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;
int main()
{
	const int N_ITEMS = 5, S_LENGTH = 31;
	char prods[5][S_LENGTH] = {"TV311 televisi 31 inch","CD111 CD Player","MC123 Mesin Cuci","TM456 tape Mobil","PC955 Personal Computer"};
	char lookUp[S_LENGTH], *strPtr = NULL;
	int index;
	
	cout << "\tProduct Database\n\n";
	for(int i=0;i<N_ITEMS;i++)
	{
		cout<<"\t"<<prods[i]<<endl;
	}
	cout<<endl;
	cout << "Masukan Kode angka product untuk mencari data: ";
	cin.getline(lookUp, S_LENGTH);
	for (index = 0; index < N_ITEMS; index++)
	{
		strPtr = strstr(prods[index], lookUp);
		if (strPtr != NULL)
		break;
	}
	if (strPtr == NULL)
		cout << "kode tidak sesuai dengan produk.\n";
	else
		cout << prods[index] << endl;
	getch();
	return 0;
}
