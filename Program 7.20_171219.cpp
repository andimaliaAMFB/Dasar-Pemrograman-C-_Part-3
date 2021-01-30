//Program 7.20
#include <iostream>
using namespace std;

// Fungsi prototipe
void showLocal();

int main()
{
	showLocal();
	showLocal();
	return 0;
}

void showLocal()
{
	int localNum = 5; //variabel Local
	cout << "localNum adalah "<< localNum << endl;
	localNum = 99;
}
