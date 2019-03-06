/**
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Mencari rata-rata sejumlah angka
* Tgl : 06 03 2019
*/

#include<iostream>
using namespace std;

void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void moveZeroToFront(int arr[], int n) {
	for(int i = 0; i < n; ++i)
    {
        if(arr[i] == 0)
            for (int j = i; j > 0; --j)
                swap(arr[j], arr[j-1]);

    }
}
void input(int(&arr)[100], int& n) {
	cout << "Masukkan jumlah data : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
void output(int arr[], int& n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[100];
	int n;
	input(arr, n);
	moveZeroToFront(arr, n);
	output(arr, n);
	return 0;
}
