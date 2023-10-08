#include <iostream>
#include <string>

using namespace std;

string toRoman(int num) {
    const int angka[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";
    for (int   i = 0; i < 13 && num > 0; i++) {
        while (num >= angka[i]) {
            result += symbols[i];
            num -= angka[i];
        }
    }
    return result;
}

int main() {
    int angkaArab;
    cout << "Masukkan angka Arab: ";
    cin >> angkaArab;

    if (angkaArab >= 1 && angkaArab <= 3999) {
        string angkaRomawi = toRoman(angkaArab);
        cout << "Angka Romawi: " << angkaRomawi << endl;
    } else {
        cout << "Masukkan angka Arab antara 1 dan 3999." << endl;
    }

    return 0;
}
