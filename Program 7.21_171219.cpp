//Program 7.21
#include <iostream>
using namespace std;

// Fungsi prototipe
void showStatic();

int main()
{
	for (int count = 0; count < 5; count++)
		showStatic();
	return 0;
}

void showStatic()
{
	static int statNum; // Static local variable
	cout << "statNum adalah " << statNum << endl;
	statNum++;
}
