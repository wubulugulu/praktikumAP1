#include <iostream>
using namespace std;

int main() {
    double panjangKertas, lebarKertas;
    double marginAtas, marginBawah, marginKiri, marginKanan;
    double ukuranPoin;
    char jarak;

    cout << "Panjang kertas (inci): "; cin >> panjangKertas;
    cout << "Lebar kertas (inci): "; cin >> lebarKertas;
    cout << "Margin atas (inci): "; cin >> marginAtas;
    cout << "Margin bawah (inci): "; cin >> marginBawah;
    cout << "Margin kiri (inci): "; cin >> marginKiri;
    cout << "Margin kanan (inci): "; cin >> marginKanan;
    cout << "Ukuran tanda (poin): "; cin >> ukuranPoin;
    cout << "Spasi (S/D): "; cin >> jarak;

    double lebarEfektif = lebarKertas - marginKiri - marginKanan;
    double tinggiEfektif = panjangKertas - marginAtas - marginBawah;

    int karakterDalamBaris = (jarak == 'D' || jarak == 'd') ? lebarEfektif / (2.0 * ukuranPoin / 72.0) : lebarEfektif / (ukuranPoin / 72.0);
    int baris = tinggiEfektif / (ukuranPoin / 72.0);

    cout << "Karakter dalam satu baris: " << karakterDalamBaris << endl;
    cout << "Jumlah baris yang dapat dicetak: " << baris << endl;

    return 0;
}
