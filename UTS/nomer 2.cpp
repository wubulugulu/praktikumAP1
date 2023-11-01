#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double tabunganUSD = 12000.0;
    double tabunganEuro = 20000.0;
    double kursUSD_to_Rupiah = 15000.0;
    double kursEuro_to_USD = 0.997;
    double hargaMobilRupiah = 425000000.0;
    double tabunganRupiah = (tabunganUSD * kursUSD_to_Rupiah) + (tabunganEuro * kursEuro_to_USD * kursUSD_to_Rupiah);
    double sisaDana = tabunganRupiah - hargaMobilRupiah;
    
    cout << fixed << setprecision(0); 
    cout << "Dana Pak Anto setelah dikonversi ke Rupiah: " << tabunganRupiah << " Rupiah" << endl;
    cout << "Sisa dana Pak Anto setelah membeli mobil: " << sisaDana << " Rupiah" << endl;

    return 0;
}
