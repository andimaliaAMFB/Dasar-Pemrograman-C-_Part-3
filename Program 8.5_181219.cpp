//Program 8.5
#include <iostream>
using namespace std;
int main()
{
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];
	cout << "Masukan string: ";
	cin.getline(firstString, LENGTH);
	cout << "Masukan string lain: ";
	cin.getline(secondString, LENGTH);
	if (firstString == secondString)
		cout << "Yang anda masukan stringnya sama\n";
	else
		cout << "String Tidak Sama.\n";
	return 0;
}
