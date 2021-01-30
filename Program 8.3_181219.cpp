//Program 8.3
#include <iostream>
using namespace std;
int main()
{
	const int LENGTH = 80;
	char line[LENGTH];
	int count = 0;
	cout << "Masukan kalimat tidak lebih dari "<< LENGTH-1 << " characters:\n";
	cin.getline(line, LENGTH);
	cout << "Kalimat yang anda Masukan Adalah:\n";
	while (line[count] != '\0')
	{
		cout << line[count];
		count++;
	}
	return 0;
}
