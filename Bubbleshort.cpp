#include <iostream>
using namespace std;

int a[20]; // deklarasi array a dengan ukuran 20 bertipe integer
int n;     // deklarasi variabel n untuk menyimpan banyaknya elemen array

void input() {
    while (true) // looping while
    {
        cout << "Masukkan panjang array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "Error : Maksimal input array adalah 20\n";
        }
    }

    cout << endl; // output baris kosong
    cout << "======================" << endl; // output ke layar
    cout << "Masukkan elemen Array" << endl; // output ke layar
    cout << "======================" << endl; // output ke layar

    for (int i = 0; i < n; i++) // looping for dimulai dari indeks ke nol
    {
        cout << "Masukkan Nilai ke - " << i + 1 << " : ";
        cin >> a[i]; // hasil input dari pengguna
    }
}

void display() {
    cout << endl; // baris kosong
    cout << "=========================" << endl; // output ke layar
    cout << "Elemen Array telah terurut" << endl; // output ke layar
    cout << "=========================" << endl; // output ke layar

    for (int i = 0; i < n; i++) // looping dimulai dari nol hingga n-1
    {
        cout << "Data ke - " << i << " : " << a[i] << endl; // output data array ke layar
    }
}
