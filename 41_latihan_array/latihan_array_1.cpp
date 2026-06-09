#include <iostream>
#include <array>
#include <random>

using namespace std;

double max_siswa(array<int, 10> &);

int main() {
    // Membagi rentang nilai 0-100 dengan 10 section
    array<int, 10> rentang_nilai;

    for (int i = 0; i < rentang_nilai.size(); i++) {
        if (i == rentang_nilai.size() - 1) {
            cout << "Jumlah siswa dengan nilai 90-100: ";
        } else {
            cout << "Jumlah siswa dengan nilai ";
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }
        cin >> rentang_nilai[i];
    }

    double total_siswa = max_siswa(rentang_nilai);

    // Grafik
    for (int i = 0; i < rentang_nilai.size(); i++) {
        const double MAX_GRAPH_LENGTH = 150;
        double jumlah_siswa_rentang_i = rentang_nilai[i];
        int char_length = (jumlah_siswa_rentang_i / total_siswa) * MAX_GRAPH_LENGTH;

        // Bins
        if (i == 0) {
            cout << "0-9   : ";
        } else if (i == rentang_nilai.size() - 1) {
            cout << "90-100: ";
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9 << " : ";
        }

        // Bars
        for (int j = 0; j < char_length; j++) {
            cout << '=';
        }
        cout << " (" << jumlah_siswa_rentang_i << ")" << endl;
    }

    return 0;
}

double max_siswa(array<int, 10> &data) {
    double result = 0;
    for (int i = 0; i < data.size(); i++) {
        result += data[i];
    }
    return result;
}
