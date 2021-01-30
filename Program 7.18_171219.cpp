//Program 7.18
#include <iostream>
using namespace std;

// Funsi prototipe

void texas();
void arkansas();
int cows = 10; //variabel global

int main()
{
	cout << "Disana banyak " << cows << " cows di program utama.\n";
	texas();
	arkansas();
	cout << "Kembali dalam program utama, disana banyak " << cows << " cows.\n";
	return 0;
}

void texas()
{ 
	int cows = 100; //variabel Local
	cout << "disana " << cows << " cows di texas.\n";
}

void arkansas()
{
	int cows = 50; // variabel Local
	cout << "Disana " << cows << " cows di arkansas.\n";
}
