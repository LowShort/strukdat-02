/**
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Deskripsi : Membuat program data pegawai
* Tahun : 2019
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Data {
	string NIP;
	string nama;
	int gol;
	int gaji;
};

Data pegawai[20], val;

void banyakData(int &n) {
	cout << "Masukkan jumlah pegawai : "; cin >> n;
	cout << endl;
}
void dataPegawai(Data pegawai[], int &n) {
	for (int i = 0; i < n; i++) {
		cout << "Data pegawai ke-" << i + 1 << endl;
		cout << "Masukkan Nama Pegawai : ";
		cin.ignore(100, '\n');
		getline(cin, pegawai[i].nama);
		cout << "Masukkan NIP Pegawai : "; cin >> pegawai[i].NIP;
		cout << "Masukkan golongan Pegawai : "; cin >> pegawai[i].gol;
		cout << endl;
	}
}

void sortingGol(Data pegawai[], int &n) {
	int i, index;
	for (i = 1; i < n; i++) {
		val = pegawai[i];
		index = i;
		while (index > 0 && pegawai[index - 1].gol > val.gol) {
			pegawai[index] = pegawai[index - 1];
			index = index - 1;
		}
		pegawai[index] = val;
	}
	cout << endl;
}
void gajiTertinggi(Data pegawai[], int &n) {
	cout << "Pegawai dengan gaji tertinggi : " << pegawai[n - 1].nama << endl;
}
void gajiTerendah(Data pegawai[], int &n) {
	cout << "Pegawai dengan gaji terendah : " << pegawai[0].nama << endl << endl;
}

void daftarGaji(Data pegawai[], int &n) {
	for (int i = 0; i < n; i++) {
		if (pegawai[i].gol == 1) {
			pegawai[i].gaji = 2000000;
		}
		else if (pegawai[i].gol == 2) {
			pegawai[i].gaji = 3000000;
		}
		else if (pegawai[i].gol == 3) {
			pegawai[i].gaji = 5000000;
		}
		else if (pegawai[i].gol == 4) {
			pegawai[i].gaji = 8000000;
		}
		else {
			cout << "ERROR" << endl;
		}
	}
}

void rataRata(Data pegawai[], int &n) {
	int gajiTotal = 0, rataGaji;
	for (int i = 0; i < n; i++) {
		gajiTotal = gajiTotal + pegawai[i].gaji;
	}
	rataGaji = gajiTotal / n;
	cout << "\nRata-rata gaji karyawan : " << rataGaji << endl;

}

void cariGaji(Data pegawai[], int &n) {
	int golongan;
	cout << "Golongan berapa [1/2/3/4] : "; cin >> golongan;

	for (int i = 0; i < n; ++i)
	{
		if (pegawai[i].gol == golongan)
			cout << setw(5) << i
			<< setw(23) << pegawai[i].NIP
			<< setw(25) << pegawai[i].nama
			<< setw(11) << pegawai[i].gaji
			<< setw(7) << pegawai[i].gol
			<< "\n";

	}
}
void cetakDaftar(Data pegawai[], int& n) {
	cout << setw(5) << "No."
		<< setw(23) << "NIP"
		<< setw(25) << "Nama"
		<< setw(11) << "Gaji"
		<< setw(7) << "Golongan"
		<< "\n\n";

	for (int i = 0; i < n; ++i)
	{
		cout << setw(5) << i + 1
			<< setw(23) << pegawai[i].NIP
			<< setw(25) << pegawai[i].nama
			<< setw(11) << pegawai[i].gaji
			<< setw(7) << pegawai[i].gol
			<< "\n";
	}
}

int main() {
	int n, pilih;
	char cari;

	banyakData(n);
	dataPegawai(pegawai, n);
	daftarGaji(pegawai, n);
	cetakDaftar(pegawai, n);
	rataRata(pegawai, n);
	sortingGol(pegawai, n);
	gajiTertinggi(pegawai, n);
	gajiTerendah(pegawai, n);

	cout << "Cari orang berdasarkan gaji? [Y/N] :";
	cin >> cari;

	if (cari == 'Y' || cari == 'y')
		cariGaji(pegawai, n);

	return 0;
}