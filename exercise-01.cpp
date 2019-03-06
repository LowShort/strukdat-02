/**
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Deskripsi : Membuat struct orang
* Tahun : 2019
*/
#include<iostream>
#include<string>
using namespace std;

struct orang {
	int umur;
	char nama[30];
	char jk;
	char goldar;
};

int main() {
	orang org;
	cout << "Masukkan nama : "; cin >> org.nama;
	cout << "Masukkan umur : "; cin >> org.umur;
	cout << "Masukkan jenis kelamin : "; cin >> org.jk;
	cout << "Masukkan golongan darah : "; cin >> org.goldar;

	cout << org.nama << endl;
	cout << org.umur << endl;
	cout << org.jk << endl;
	cout << org.goldar << endl;

	return 0;
}