#include <iostream>
using namespace std;

int main() {
    double nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas, nilaiAkhir;
    char indeks;

    // Input nilai tes, UTS, UAS, dan Tugas
    cout << "Masukkan nilai tes: ";
    cin >> nilaiTes;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;
    cout << "Masukkan nilai Tugas: ";
    cin >> nilaiTugas;

    nilaiAkhir = 0.2 * nilaiTes + 0.3 * nilaiUTS + 0.3 * nilaiUAS + 0.2 * nilaiTugas;

    if (nilaiAkhir <= 50) {
        indeks = 'D';
    } else if (nilaiAkhir <= 70) {
        indeks = 'C';
    } else if (nilaiAkhir <= 80) {
        indeks = 'B';
    } else {
        indeks = 'A';
    }

    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Indeks Nilai: " << indeks << endl;

    return 0;
}