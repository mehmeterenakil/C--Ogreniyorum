#include <iostream>

using namespace std;

int main() {

	int vize, final;
	float ort;
	cout << " Vize notunuzu giriniz = ";
		cin >> vize;
		cout << endl;

		cout << " Final notunuzu giriniz = ";
	cin >> final;
		cout << endl;


		ort = ((vize * 40) / 100) + ((final * 60) / 100);

		cout << " Ders Ortalamaniz = " << ort;
		cout << endl;

		return 0;




}