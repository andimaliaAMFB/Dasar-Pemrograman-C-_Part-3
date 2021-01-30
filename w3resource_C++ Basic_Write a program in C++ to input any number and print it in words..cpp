//https://www.w3resource.com/cpp-exercises/for-loop/index.php
//Write a program in C++ to input any number and print it in words.
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int n,angka=0,i;
    cout << " Input any number: ";
    cin >> n;
    while (n != 0) {
        angka=(angka*10)+(n%10);
        n /= 10;
    }
    for (i=angka;i>0;i=i/10) {

        switch (i%10) {
        case 0:
            cout << "Nol ";
            break;
        case 1:
            cout << "Satu ";
            break;
        case 2:
            cout << "Dua ";
            break;
        case 3:
            cout << "Tiga ";
            break;
        case 4:
            cout << "Empat ";
            break;
        case 5:
            cout << "Lima ";
            break;
        case 6:
            cout << "Enam ";
            break;
        case 7:
            cout << "Tujuh ";
            break;
        case 8:
            cout << "Delapan ";
            break;
        case 9:
            cout << "Sembilan ";
            break;
        }
    }
}
