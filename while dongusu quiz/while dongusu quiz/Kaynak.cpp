#include <iostream>

using namespace std;

int main() {

	int sayi1 = 1;
	int Kullan�c�Say�s�;

	cout << "Lutfen bir sayi giriniz = " << endl;
	cin >> Kullan�c�Say�s�;

	while (Kullan�c�Say�s� >= sayi1) {
		if (sayi1 % 7 == 0) {
			cout << sayi1 << endl;
		}
		sayi1 = sayi1 + 1;
	}

	cout << endl;
	return 0;
}