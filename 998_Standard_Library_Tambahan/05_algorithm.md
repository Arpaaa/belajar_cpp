# STANDARD TEMPLATE LIBRARY

## Algorithm

Kumpulan fungsi siap pakai untuk melakukan tugas-tugas umum, seperti mencari, mengurutkan,
atau menghitung.

```c++
#include <algorithm>
```

terdapat beberapa kelompok algoritma di C++

### Non-modifying

`all_of, any_of, none_of` diperkenalkan sejak C++11. Mengembalikan nilai true atau false.

#### 1. all_of

Apakah semua memenuhi syarat?

Akan mengembalikan `true` hanya jika semua elemen tanpa terkecuali memenuhi kondisi yang diberikan. Jika ada satu saja
yang gagal, hasilnya `false`.

Contoh: 
```c++
std::vector<int> numbers = {2, 4, 6, 8, 10};

bool is_all_even = std::all_of(numbers.begin(), numbers.end(), [](int x) {
    return ((x & 1) == 0);
});

std::cout << is_all_even << std::endl;
```

#### 2. any_of

Apakah ada minimal satu memenuhi syarat?

Akan mengembalikan `true` jika minimal ada satu elemen yang memenuhi syarat. akan mengembalikan `false` jika seluruh
elemen tidak memenuhi syarat.

Contoh: 

```c++
std::vector<int> nilai = {95, 100, 75, 10, 35};
bool is_remedial = std::any_of(nilai.begin(), nilai.end(), [](int x) {
    return (x <= 50);
});

std::cout << "Apakah ada remedial? " << is_remedial << std::endl;
```

#### 3. none_of

Apakah semua tidak memenuhi syarat?

Kebalikan dari any_of, hanya mengembalikan `true` jika semua elemen tidak memenuhi syarat.

```c++
std::string username = "arfa_luthfi";
bool is_without_space = std::none_of(username.begin(), username.end(), [](char s) {
    return (s == ' ');
});

std::cout << "Apakah ada spasi? " << is_without_space << std::endl;
```

#### 4. count

Menghitung jumlah element spesifik yang muncul.

Contoh:

```c++
std::vector<int> nilai = {90, 30, 40, 90, 80, 50, 70, 90};

auto jumlah_nilai_90 = std::count(nilai.begin(), nilai.end(), 90);

std::cout << "Jumlah nilai 90 adalah: " << jumlah_nilai_90 << std::endl;
```

#### 5. count_if

Menghitung jumlah elemen spesifik dengan syarat tertentu. menghitung elemen yang mengembalikan true.

Contoh: 

```c++
std::string fullname = "arfa luthfi bintang mahardika";

auto count_vowel = std::count_if(fullname.begin(), fullname.end(),
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o
});

std::cout << "Jumlah huruf vokal: " << count_vowel << std::endl;
```

### Modifying

#### 1. replace & replace_if

Mengubah atau mengganti nilai yang ada di dalam container secara langsung (in-place).

Contoh replace:

```c++
std::string fullname = "arfa luthfi bintang mahardika";

std::replace(fullname.begin(), fullname.end(), ' ', '_');

std::cout << "Nama lengkap: " << fullname << std::endl;
```

contoh: replace_if 

```c++
std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::replace_if(data.begin(), data.end(), [](int d) { return d & 1 == 1; }, -1);

for (int d: data) { std::cout << d << " "; };

std::cout << std::endl;
```

#### 2. copy  & copy_if

Untuk menyalin atau menduplikasi dari satu container ke container lain.

Note: container tujuan harus punya ukuran yang cukup untuk menampung data yang akan disalin.
Jika container tujuan kosong, maka program akan crash.

Solusi: Gunakan `std::back_inserter` dari `iterator` biar container tujuan bisa otomatis membersar.

Contoh copy (menyalin semua data):

```c++
std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> nums; // tujuan kosong.

std::copy(numbers.begin(), numbers.end(), std::back_inserter(nums));

for (int n : nums) { std::cout << n << " "; };
```

Contoh copy_if (menyalin data tertentu sesuai dengan syarat):

```c++
std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> odd_numbers;

std::copy_if(numbers.begin(), numbers.end(), std::ba
    return ((x & 1) == 1);
});

for (int n: odd_numbers) { std::cout << n << " "; };
```

### Mutating & Partitioning

#### 1. unique

`std::unique` menghilangkan duplikasi bersebelahan tetapi tidak langsung menghapus semua elemen duplikat.

`std:unique` tidak mengubah ukuran vektor. Elemen yang duplikat akan digeser ke bagian paling belakang container, fungsi 
ini akan mengembalikan iterator yang menunjuk ke batas awal dari elemen duplikat setelah pergeseran tersebut.

Untuk menghapus elemen sisa dapat digunakan .erase() atau biasa disebut `Erase-Unique`.

agar semua duplikat menghilang total, dapat menggunakan `std::sort` terlebih dahulu.

Contoh:

```c++
std::vector<int> numbers = {1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 8, 9};

std::sort(numbers.begin(), numbers.end());

auto batas = std::unique(numbers.begin(), numbers.end());

numbers.erase(batas, numbers.end());

for (auto n : numbers) std::cout << n << " ";
```

#### 2. shuffle

Mengacak isi dari container sesuai fungsi random yang diberikan. semisal menggunakan fungsi random dari `std::random_device`
agar mendapatkan angka acak dari hardware yang berasal dari suhu prosesor, sentuhan fisik keyboard, kecepatan kipas, dll.
Serta dipadukan oleh algoritma mt1997 (Mersenne Twister).

Contoh:

```c++
std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

std::random_device rd;
std::mt19937 g(rd());

std::shuffle(data.begin(), data.end(), g);

for (int d : data) std::cout << d << " ";
```

#### 3. rotate

Menggeser elemen seperti berputar, jika elemen depan bergeser hingga ke luar batas container maka ia akan pindah ke
paling belakang.

Memerlukan 3 argumen:
- Iterator awal.
- Iterator yang akan menjadi index pertama setelah rotasi.
- Iterator akhir.

Contoh:

```c++
std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

std::rotate(data.begin(), data.begin() + 4, data.end());

for (int d : data) std::cout << d << " ";
```

### Min & Max

Mengembalikan pointer elemen minimun atau maximum pada suatu kontainer.

Contoh: 

```c++
std::vector<int> nilai = {98 , 93, 97, 90, 99, 100};

auto min = std::min_element(nilai.begin(), nilai.end());
auto max = std::max_element(nilai.begin(), nilai.end());

std::cout << "Min: " << *min << ". Max: " << *max << std::endl;
```