#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include  <ranges>
#include <chrono>
#include <random>

using namespace std;

int main() {
    map<string, string> capital_city;

    capital_city["Indonesia"] = "IKN";
    capital_city["Jepang"] = "Tokyo";

    capital_city.insert({"Inggris", "London"});
    capital_city.insert(make_pair("Prancis", "Paris"));

    cout << capital_city["Indonesia"] << endl;
    cout << capital_city.at("Jepang") << endl;

    // ================================================

    map<string, int> stok = {{"Apel", 10}};
    cout << stok["Apel"] << endl;

    stok["Apel"] = 15;
    cout << stok["Apel"] << endl;

    // ================================================
    map<string, int> skor = {
        {"Arfa", 90},
        {"Jelita", 100},
    };

    cout << skor.size() << endl;
    skor.erase("Arfa");
    cout << skor.size() << endl;
    skor.clear();
    cout << skor.size() << endl;

    map<int, vector<string>> kelas;
    cout << kelas.empty() << endl;

    kelas[0].emplace_back("Arfa");
    cout << kelas.empty() << endl;
    cout << kelas[0][0] << endl;

    // ================================================

    map<string, int> dataHarga = {
        {"Pulpen", 5000},
        {"Pensil", 2000},
        {"Penghapus", 2500}
    };

    for (auto const &[barang, harga] : dataHarga) {
        cout << barang << " : Rp" << harga << endl;
    }

    for (auto const &x : dataHarga) {
        cout << x.first << " : Rp" << x.second << endl;
    }

    // ================================================
    // Studi kasus CP

    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    uniform_int_distribution dist(1, 6);
    int N = 1000;

    auto pipe = views::iota(0, N) | views::transform([&](int) { return dist(gen); });
    vector<int> numbers(pipe.begin(), pipe.end());

    cout << " :: " << numbers.size() << endl;

    map<int, int> freq;
    for (auto const i : numbers) {
        freq[i]++;
    }

    for (auto const& [x, f] : freq) {
        cout << x << " : " << f << endl;
    }

    return 0;
}
