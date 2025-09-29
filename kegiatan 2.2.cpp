#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int data;
    ifstream file("data_input.txt");

    if (file) {
        cout << "File sukses dibuka!" << endl;
        // baca semua data di file (7 baris)
        for (int i = 0; i < 7; i++) {
            file >> data;
            cout << data << endl;
        }
        file.close();
        return 0;
    } else {
        cout << "File gagal dibuka!" << endl;
        return 1;
    }
}
