//Program 8.6
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];
	cout << "Masukan String: ";
	cin.getline(firstString, LENGTH);
	cout << "Masukan string lain: ";
	cin.getline(secondString, LENGTH);
	if (strcmp(firstString, secondString) == 0)
		cout << "Yang anda masukan stringnya sama\n";
	else
		cout << "String tidak sama.\n";
	return 0;
}
