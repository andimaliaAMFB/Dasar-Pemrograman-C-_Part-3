//Program 7.16
#include <iostream>
using namespace std;

void anotherFunction(); // Fungsi prototipe
int num = 2; // variabel Global

int main()
{
	cout << "dalam program utama, num adalah " << num << endl;
	anotherFunction();
	cout << "kembali dari program utama, num adalah " << num << endl;
	return 0;
}

void anotherFunction()
{
	cout << "dalam fungsi anotherFunction, num adalah " << num << endl;
	num = 50;
	cout << "tetapi, sekarang telah diubah menjadi " << num << endl;
}
