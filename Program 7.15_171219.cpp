//Program 7.15
#include <iostream>
using namespace std;

void anotherFunction();

int main()
{
	int num = 1;
	cout << "Dalam program utama,num adalah: " << num << endl;
	anotherFunction();
	cout << "Kembali dalam program utama, num masih " << num << endl;
	return 0;
}

void anotherFunction()
{
	int num = 20; // variabel Local
	cout << "Dalam anotherFunction, num adalah: " << num << endl;
}
