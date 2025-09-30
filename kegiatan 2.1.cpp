#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int data;
    ifstream file("data_input.txt");

    if (file) {
        cout << "File sukses dibuka!" << endl;

        // Contoh: ulangi 5 kali
        for (int i = 0; i < 5; i++) {
            file >> data;
            cout << data << endl;
        }

        // Coba ganti angka 3 dengan 4 atau 5
        // for (int i = 0; i < 4; i++) { ... }
        // for (int i = 0; i < 5; i++) { ... }

        file.close();
    } else {
        cout << "File gagal dibuka!" << endl;
    }

    return 0;
}

