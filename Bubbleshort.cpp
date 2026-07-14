#include <iostream>
using namespace std;

int a[20]; // deklarasi array a dengan ukuran 20 bertipe integer
int n;     // deklarasi variabel n untuk menyimpan banyaknya elemen array

void input() {
    while (true) // looping while
    {
        cout << "Masukkan panjang array : ";
        cin >> n;
