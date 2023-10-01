#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Masukkan bilangan pertama: ";
    cin >> n1;

    cout << "Masukkan bilangan kedua: ";
    cin >> n2;

    cout << "Masukkan bilangan ketiga: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3) {
        cout << "Bilangan terbesar adalah: " << n1 << endl;
    } else if (n2 >= n1 && n2 >= n3) {
        cout << "Bilangan terbesar adalah: " << n2 << endl;
    } else {
        cout << "Bilangan terbesar adalah: " << n3 << endl;
    }

    return 0;
}