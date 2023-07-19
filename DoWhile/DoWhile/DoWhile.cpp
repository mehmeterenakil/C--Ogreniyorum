#include <iostream>

using namespace std;

int main() {

	string sifre = "1234";
	string GirilenDeger;

	do {
		cout << "Lutfen sifreyi giriniz : ";
		cin >> GirilenDeger;
	} while (sifre != GirilenDeger); 
		cout << "Girilen Sifre Dogru! ";
		

	cout << endl;
	return 0;
}