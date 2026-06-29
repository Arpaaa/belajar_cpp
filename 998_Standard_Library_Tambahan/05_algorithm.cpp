#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <random>

int main() {
    /*
     * ================================
     *          NON-MODIFYING
     * ================================
     */
    {
        // any_of
        std::vector<int> numbers = {2, 4, 6, 8, 10};

        bool is_all_even = std::all_of(numbers.begin(), numbers.end(), [](int el) {
            return ((el & 1) == 0);
        });

        std::vector<int> numbers_too = {2, 4, 6, 7, 8, 10};
        bool is_all_even_too = std::all_of(numbers_too.begin(), numbers_too.end(), [](int el) {
            return ((el & 1) == 1);
        });

        std::cout << "Apakah semua genap? " << is_all_even << std::endl;
        std::cout << "Apakah semua genap? " << is_all_even_too << std::endl;

        // =================================

        // any_of
        std::vector<int> nilai = {95, 100, 75, 10, 35};
        bool is_remedial = std::any_of(nilai.begin(), nilai.end(), [](int x) {
            return (x <= 50);
        });
        std::cout << "Apakah ada remedial? " << is_remedial << std::endl;

        // =================================

        // none_of
        bool is_not_even = std::none_of(numbers.begin(), numbers.end(), [](int el) {
            return ((el % 2) == 0);
        });

        std::vector<int> odd_numbers = {1, 3, 5, 7, 9};
        bool is_not_even_too = std::none_of(odd_numbers.begin(), odd_numbers.end(), [](int el) {
            return ((el % 2) == 0);
        });

        std::cout << "Apakah tidak ada genap? " << is_not_even << std::endl;
        std::cout << "Apakah tidak ada genap? " << is_not_even_too << std::endl;

        std::string username = "arfa_luthfi";
        bool is_without_space = std::none_of(username.begin(), username.end(), [](char s) {
            return (s == ' ');
        });

        std::cout << "Apakah ada spasi? " << is_without_space << std::endl;
    }
    // =================================


    {
        // count
        std::vector<int> nilai = {90, 30, 40, 90, 80, 50, 70, 90};

        auto jumlah_nilai_90 = std::count(nilai.begin(), nilai.end(), 90);

        std::cout << "Jumlah nilai 90 adalah: " << jumlah_nilai_90 << std::endl;

        // =================================

        // count_if

        std::string fullname = "arfa luthfi bintang mahardika";

        auto count_vowel = std::count_if(fullname.begin(), fullname.end(), [](auto c) {
            return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
        });

        std::cout << "Jumlah huruf vokal: " << count_vowel << std::endl;
    }

    /*
     * ================================
     *            MODIFYING
     * ================================
     */

    {
        // replace
        std::string fullname = "arfa luthfi bintang mahardika";

        std::replace(fullname.begin(), fullname.end(), ' ', '_');

        std::cout << "Nama lengkap: " << fullname << std::endl;

        // =================================

        // replace if
        std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::replace_if(data.begin(), data.end(), [](int d) { return d & 1 == 1; }, -1);

        for (int d: data) { std::cout << d << " "; };
        std::cout << std::endl;

        // =================================

        // copy
        std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::vector<int> nums;

        std::copy(numbers.begin(), numbers.end(), std::back_inserter(nums));

        for (int n: numbers) { std::cout << n << " "; };
        std::cout << std::endl;
        for (int n: nums) { std::cout << n << " "; };
        std::cout << std::endl;

        // =================================

        // copy_if
        std::vector<int> odd_numbers;

        std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(odd_numbers), [](int x) {
            return ((x & 1) == 1);
        });

        for (int n: odd_numbers) { std::cout << n << " "; };
        std::cout << std::endl;
    }

    /*
     * ================================
     *            MODIFYING
     * ================================
     */

    {
        // unique
        std::vector<int> numbers = {1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 8, 9};

        std::sort(numbers.begin(), numbers.end());
        auto batas = std::unique(numbers.begin(), numbers.end());
        numbers.erase(batas, numbers.end());

        for (auto n : numbers) std::cout << n << " ";
        std::cout << std::endl;

        // =================================

        // shuffle
        std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        std::random_device rd;
        std::mt19937 g(rd());

        std::shuffle(data.begin(), data.end(), g);

        for (int d : data) std::cout << d << " ";
        std::cout << std::endl;

        std::sort(data.begin(), data.end());

        // =================================

        // rotate
        std::rotate(data.begin(), data.begin() + 4, data.end());

        for (int d : data) std::cout << d << " ";
        std::cout << std::endl;
    }

    /*
     * ================================
     *            MIN / MAX
     * ================================
     */
    {
        // min & max
        std::vector<int> nilai = {98 , 93, 97, 90, 99, 100};

        auto min = std::min_element(nilai.begin(), nilai.end());
        auto max = std::max_element(nilai.begin(), nilai.end());

        std::cout << "Min: " << *min << ". Max: " << *max << std::endl;
    }

    return 0;
}
