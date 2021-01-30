//Program 7.21_coba
#include <iostream>
using namespace std;

// Fungsi prototipe
void showStatic(int);

int main()
{
	int num;
	cout<<"Masukan Angka Awal untuk statNum: ";cin>>num;
	for (int count = 0; count < 5; count++)
		showStatic(num);
	return 0;
}

void showStatic(int statNum)
{
	cout << "statNum adalah " << statNum << endl;
	statNum++;
}
