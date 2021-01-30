//Program 7.19
#include <iostream>
#include <iomanip>
using namespace std;

// Fungsi prototipe
void ringUpSale();

// variabel Global
const double TAX_RATE = 0.06;

double tax, sale, total;

int main()
{
	char again;
	cout << fixed << showpoint << setprecision(2);
	do
	{
		ringUpSale();
		cout << "Apakah disana ada sesuatu yang dapat dijual? [y/t]";
		cin >> again;
	}
	while (again == 'y' || again == 'Y');
	tax = sale * TAX_RATE;
	total = sale + tax;
	cout << "\nPajak penjualannya adalah " << tax << endl;
	cout << "Total Pembayaran adalah " << total << endl;
	return 0;
}

void ringUpSale()
{
	//Variabel Local
	int qty;
	double unitPrice, tax, thisSale, subTotal;
	cout << "\nJumlah: ";
	cin >> qty;
	cout << "Harga per satuan: ";
	cin >> unitPrice;
	thisSale = qty * unitPrice; // total harga unit
	sale += thisSale; // Update variabel global penjualan
	tax = thisSale * TAX_RATE; // pembayaran pajak untuk item
	subTotal = thisSale + tax; // subtotal untuk tiap item
	cout << "harga untuk tiap item:" << thisSale << endl;
	cout << "pajak untuk tiap item: " << tax << endl;
	cout << "SubTotal untuk tiap item: " << subTotal << endl;
}
