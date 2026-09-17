#include <string>
#include <iostream>

using namespace std;

int main() {
	int sale;
	int sale2;
	int sale3;
	int tax;
	int tax2;
	int tax3;
	int filil1;
	int filil2;

	cout << "\nEnter the sale amount in cents (e.g., 1608 for $16.08): ";
	cin >> sale;
	sale3 = sale;
	sale2 = sale / 100;
	sale = sale - (sale2 * 100);

	cout << "Enter the tax rate in hundredths of a percent (e.g., 625 for 6.25%): ";
	cin >> tax;
	tax3 = tax;
	tax2 = tax / 100;
	tax = tax - (tax2 * 100);

	cout << "Sale amount: $" << sale2 << "." << sale;

	cout << "\nTax amount: $" << tax2 << "." << tax;

	filil1 = (sale3 * tax3) / 1000000;
	filil2 = (sale3 * tax3) - (filil1 * 100000);

	cout << "\nomething Test: " << filil1 << "." << filil2;

	main();
}
