# Binary Search

Membagi data menjadi dua bagian, kemudian membandingkan nilai tengah dengan nilai yang dicari.


## Alur
Pada binary search element pada array harus sudah terurut.

Berikut alur ringkas dari 
algoritma binary search:
- Periksa nilai tengah dan bandingkan dengan nilai yang dicari.
- Jika nilai tengah sama dengan nilai yang dicari, maka kembalikan index elemen itu.
- Jika nilai tengah $<$ nilai yang dicari, maka lakukan pencarian dari tengah hingga akhir.
- Jika nilai tengah $>$ nilai yang dicari, maka lakukan pencarian dari awal hingga tengah.
- Lakukan secara berulang. Jika hingga tersisa 1 elemen dan nilai tidak sama,
  maka elemen tersebut tidak ada di dalam array.

## Visualisasi

Terdapat sebuah array yang memiliki elemen-elemen terurut seperti sebagai berikut:

```js
[1, 2, 3, 4, 5, 6, 7 ,8, 9, 10]
```

Elemen yang dicari adalah `2`

- **Iterasi ke-1:**
  * Pointer kiri menunjuk index ke-0.
  * Pointer kanan menunjuk index ke-9.
  * Pointer tengah menunjuk index ke-4.
  * Value index ke-4 yaitu `5` lebih besar dari `2`.
  * Pointer kanan menjadi (mid - 1) yaitu index ke-3.

- **Iterasi ke-2:**
  * Pointer kiri menunjuk index ke-0.
  * Pointer kanan menunjuk index ke-3.
  * Ponter tengah menunjuk index ke-1.
  * Value index ke-1 yaitu `2` sama dengan `2`.
  * Kembalikan index elemen tersebut.
- **Iterasi berhenti**

## Contoh Implementasi

```c++
size_t binarySearch(const vector<int> &data,const int searchValue) {
    if (data.empty()) return -1;

    size_t left = 0;
    size_t right = data.size() - 1;

    while (left <= right) {
        size_t mid = (left + right) / 2;

        if (data[mid] == searchValue) return mid;

        if (data[mid] < searchValue) {
            left = mid + 1;
        } else {
            if (mid == 0) break;
            right = mid - 1;
        }
    }

    return -1;
}
```

## Kompleksitas

**Time Complexity**
* Best Case: $O(1)$
* Worst Case: $O(\log \, n)$
* Average Case: $O(\log \, n)$

**Space Complexity**
* While Loop: $O(1)$
* Recursive: $O(\log \, n)$

## Analisis Binary Search

Misal terdapat N buah elemen pada sebuah array, untuk mencari suatu elemen banyak operasi maksimal yang dibutuhkan
hingga menemukan elemen tersebut sebagai berikut $[N, \frac{N}{2}, \frac{N}{4}, \frac{N}{8}, ... 2, 1]$ atau $\log_2 \,n$
sehingga kompleksitasnya ialah $\log \, n$

Pembuktian:
- $N$ $\frac{N}{2^1}$ $\frac{N}{2^2}$ $\frac{N}{2^3}$ $\frac{N}{2^4}$ barisan membentuk $\frac{N}{2^k}$

Misal untuk mencari angka 1 (operasi terakhir) maka,

$\frac{N}{2^k} = 1$

$N = 2^k$

$\log_2 \, N = \log_2 \, 2^k$

$\log_2 \, N = k$