/**
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Deskripsi : Membuat struct theater
* Tahun : 2019
*/
#include<iostream>
#include<string>
using namespace std;

struct Theater {
	int room;
	char seat[3];
	char movieTitle[30];
};

int main() {
	Theater theater;
	cout << "Masukkan room : "; cin >> theater.room;
	cout << "Masukkan seat : "; cin >> theater.seat;
	cout << "Masukkan Movie Title : "; cin.ignore(); cin.getline(theater.movieTitle, 30);

	cout << theater.room << endl;
	cout << theater.seat << endl;
	cout << theater.movieTitle << endl;

	return 0;
}