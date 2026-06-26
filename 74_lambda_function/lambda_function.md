# Lambda Function

_Diperkenalkan sejak C++11_

Lambda function adalah fungsi tanpa nama (anonymous function) yang
dapat dibuat secara langsung di dalam baris kode (inline).

Daripada membuat fungsi biasa sekali pakai maka lebih baik
menggunakan lambda function.

### Anatomi dan Sintaks Dasar Lambda

```c++
[capture_clause](parameters) -> return_type {
    // Body fungsi
};
```

1. `[] Capture Clause` - Menghubunkan lambda dengan blok yang lebih luar (variabel di luar blok lambda function).
2. `() Parameters` - Tempat menaruh argumen yang diterima.
3. `-> return_type` - Menentukan tipe data yang akan dikembalikan (optional).
4. `{}` - Body fungsi atau kode yang ingin dijalankan.

### Penggunaan

Contoh penggunaan dasar:

```c++
auto sayHello = []() {
    std::cout << "Hello dunia C++!" << std::endl;
};

sayHello();
```

Menggunakan auto karena tipe data dari lambda function sangat kompleks. Menggunakan auto,
membuat kode menjadi lebih mudah.

#### Capture Flag: Pass By Value

Contoh penggunaan parameter dan return value.

```c++
auto sayHelloTo = [](std::string name) -> void {
    std::cout << "Hello " << name << ", selamat datang di dunia C++" << std::endl;
};

sayHelloTo("Arfa");
```

Fungsi biasa di C++ tidak dapat melihat local variabel di dalam `main()`. Namun,
di lambda function kita dapat melihat local variabel di dalam main asalkan kita menuliskan
nama variabel tersebut di dalam `Capcutre Clause`.


Contoh lain:

```c++
int count = 0;
auto printCount = [count]() {
    std::cout << "Nilai counter: " << count << std::endl;
};

printCount();
```

NOTE: Tidak dapat mengubah variabel luar, secara default capture by value bersifat read-only.

#### Capture Flag: Pass By Refrence

Contoh capture by reference:

```c++
auto addCounter = [&count]() {
    count++;
};
    
addCounter();
```

Kita dapat mengubah nilai variabel luarnya, tapi jika memanggil `printCount` sebelumnya
maka nilai tetap bernilai `0` karena `printCount` sudah menyimpan salinan dari nilai
`count` sehingga pemanggilan keberapa pun tidak akan mengupdate nilai `count`.

#### Capture default

Menangkap semua variabel disekitar dengan clasue, gunakan `[=]` (pass by value).

Contoh:
```c++
std::string nama = "Arfa Luthfi";
int umur = 17;

auto getProfile = [=]() {
    std::cout << nama << ". Umur: " << umur << std::endl;
};

getProfile();
```

Dengan begitu, blok kode di dalam lamdba function dapat mengambil semua variabel yang
ada di luar blok lambda tersebut.

Untuk melakukan pass by reference dapat menggunakan capture flag `[&]`.

#### Mixed Capture

- `[=, &x]`: tangkap semua variabel luar menggunakan pass by value kecuali x menggunakan pass by reference.
- `[&, x]`: tangkap semua variabel luas menggunakan pass by reference kecuali x menggunakn pass by value.

#### Mutable

Secara default menggunakan `[x]` (pass by value), compiler akan memperlakukan variabel tersebut
sebagai sebuah konstanta `const` di dalam lamdba sehingga nilai tidak dapat diubah sama sekali.

Jika ingin mengubah salinan variabel tersbut tanpa mempengaruhi variabel aslinya maka gunakan
keyword `mutable` setelah tanda `()` paramter.

Contoh:

```c++
auto getAgeNextYear = [&, umur]() mutable {
    std::cout << nama << " akan berumur " << ++umur << " di tahun besok." << std::endl;
};

getAgeNextYear();
```