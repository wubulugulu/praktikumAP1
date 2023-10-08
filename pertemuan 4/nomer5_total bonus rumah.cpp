#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

int main() {
    map<string, int> jumlah_rumah_terjual;
    int total_bonus = 0;
    string nama_pegawai;

    cout << "Masukkan nama pegawai pemasaran: ";
    getline(cin, nama_pegawai);

    int jumlah_rumah_terjual_input;
    cout << "Masukkan jumlah rumah yang terjual oleh " << nama_pegawai << ": ";
    cin >> jumlah_rumah_terjual_input;
    cin.ignore();

    cout << "Masukkan jenis-jenis rumah yang terjual (45, 54, atau 70) dipisahkan oleh spasi: ";
    string masukan;
    getline(cin, masukan);

    istringstream iss(masukan);
    vector<string> jenis_rumah(istream_iterator<string>{iss}, istream_iterator<string>());

    for (const auto& jenis_rumah_str : jenis_rumah) {
        int jumlah_terjual;
        cout << "Masukkan jumlah rumah tipe " << jenis_rumah_str << " yang terjual: ";
        cin >> jumlah_terjual;

        jumlah_rumah_terjual[jenis_rumah_str] += jumlah_terjual;
    }

    cout << "\nNama pegawai pemasaran: " << nama_pegawai << endl;
    cout << "Tipe | Jumlah Terjual | Bonus" << endl;
    cout << "-------------------------" << endl;

    for (const auto& entry : jumlah_rumah_terjual) {
        string jenis_rumah = entry.first;
        int jumlah_terjual = entry.second;
        int bonus = 0;

        if (jenis_rumah == "45") {
            if (jumlah_terjual > 5) {
                bonus = 500000 * jumlah_terjual;
            } else {
                bonus = 250000 * jumlah_terjual;
            }
        } else if (jenis_rumah == "54") {
            if (jumlah_terjual > 5) {
                bonus = 1000000 * jumlah_terjual;
            } else {
                bonus = 500000 * jumlah_terjual;
            }
        } else if (jenis_rumah == "70") {
            if (jumlah_terjual > 5) {
                bonus = 1250000 * jumlah_terjual;
            } else {
                bonus = 1000000 * jumlah_terjual;
            }
        }

        total_bonus += bonus;
        cout << jenis_rumah << " | " << jumlah_terjual << " | " << bonus << endl;
    }

    cout << "Total bonus: " << total_bonus << endl;

    return 0;
}
