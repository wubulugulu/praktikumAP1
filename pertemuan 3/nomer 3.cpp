#include <iostream>
using namespace std;

int main() {
    char operasi;
    double angka1, angka2;

    cout << "masukkan angka pertama: ";
    cin >> angka1;

    cout << "masukkan angka kedua: ";
    cin >> angka2;

    cout << "masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    double hasil;

    if (operasi == '+') {
        hasil = angka1 + angka2;
    } else if (operasi == '-') {
        hasil = angka1 - angka2;
    } else if (operasi == '*') {
        hasil = angka1 * angka2;
    } else if (operasi == '/') {
        if (angka2 != 0) {
            hasil = angka1 / angka2;
        } else {
            cout << "tidak bisa bagi dengan 0" << endl;
            return 1;
        }
    } else {
        cout << "gabisa diitung" << endl;
        return 1;
    }

    cout << "hasil: " << hasil << endl;

    return 0;
}