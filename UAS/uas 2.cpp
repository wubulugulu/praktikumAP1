#include <iostream>
#include <string>

using namespace std;

struct Anak {
    string nama;
    int hari, bulan, tahun;
};

const int MAKS_ANAK = 20;

void tampilkanAnak(const Anak anak[], const string& judul) {
    cout << judul << ":\n";
    for (int i = 0; i < MAKS_ANAK; ++i) {
        cout << anak[i].nama << " - " << anak[i].hari << "/" << anak[i].bulan << "/" << anak[i].tahun << endl;
    }
    cout << endl;
}

void urutkanTahunLahir(Anak anak[]) {
    for (int i = 0; i < MAKS_ANAK - 1; ++i) {
        for (int j = 0; j < MAKS_ANAK - i - 1; ++j) {
            if (anak[j].tahun > anak[j + 1].tahun) {
                swap(anak[j], anak[j + 1]);
            }
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); 

    Anak anak[MAKS_ANAK];

    for (int i = 0; i < MAKS_ANAK; ++i) {
        anak[i].nama = "Anak" + to_string(i + 1);
        anak[i].hari = rand() % 31 + 1; 
        anak[i].bulan = rand() % 12 + 1; 
        anak[i].tahun = rand() % 10 + 2010; 
    }

    tampilkanAnak(anak, "Data Sebelum Diurutkan");

    urutkanTahunLahir(anak);

    tampilkanAnak(anak, "Data Setelah Diurutkan");

    cout << "Anak-anak yang lahir pada tahun 2020:\n";
    for (int i = 0; i < MAKS_ANAK; ++i) {
        if (anak[i].tahun == 2020) {
            cout << anak[i].nama << " - " << anak[i].hari << "/" << anak[i].bulan << "/" << anak[i].tahun << endl;
        }
    }

    return 0;
}