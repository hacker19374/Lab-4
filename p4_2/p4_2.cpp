#include <string>
#include <iostream>

using namespace std;

int main() {
	double owed;
	double paid;
	double changeDue;
	int change;

	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	cout << "Amount owed, in cents: ";
	cin >> owed;

	cout << "Amount paid, in cents: ";
	cin >> paid;

	changeDue = paid - owed;

	change = changeDue * 100;

	cout << "Change due: $" << changeDue;

	dollars = change / 100;

	if (dollars != 0) {
		cout << "\nDollars: " << dollars;
		change = change % 100;
	}
	quarters = change / 25;

	if (quarters != 0) {
		cout << "\nQuarters: " << quarters;
		change = change % 25;
	}
	dimes = change / 10;

	if (dimes != 0) {
		cout << "\nDimes: " << dimes;
		change = change % 10;
	}
	nickels = change / 5;

	if (nickels != 0) {
		cout << "\nNickels: " << nickels;
		change = change % 5;
	}
	pennies = change / 1;

	if (pennies != 0) {
		cout << "\nPennies: " << pennies;
		change = change % 1;
	}

	cout << "\n\n";

	main();
}
