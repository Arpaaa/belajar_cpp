# Sequential Search

Melakukan pengecekan pada seluruh elemen yang ada dalam sebuah data.

## Alur

- Periksa satu persatu dari suku pertama, kedua, ketiga, dan seterusnya.
- Jika ditemukan kembalikan index elemen tersebut.
- Jika sampai elemen terakhir tidak ditemukan, maka elemen yang dicari tidak ada dalam data tersebut.

Squential Search sering disebut juga dengan istilah Linear Search.

## Visualisasi

Terdapat sebuah array dengan elemen-elemen sebagai berikut:
```js
[7, 3, 6, 9, 0, 4, 2, 5, 1, 8]
```
Kemudian element yang akan dicari adalah `9`

Dengan melakukan perulangan dari elemen pertama hingga N dan akan dibandingkan dengan
nilai yang akan dicari, dapat divisualisasikan sebagai berikut:
- **Iterasi 1:**
  * Apakah `7` sama dengan `9`, tidak.
- **Iterasi 2:**
  * Apakah `3` sama dengan `9`, tidak.
- **Iterasi 3:**
  * Apakah `6` sama dengan `9`, tidak.
- **Iterasi 4:**
  * Apakah `9` sama dengan `9`, ya.
- **Iterasi berhenti**

## Contoh Implementasi

```c++
#include <vector>

size_t sequentialSearch(vector<int> &array, int searchValue) {
    for (size_t i = 0; i < array.size(); i++) {
        if (array[i] == searchValue) return i;
    }

    return -1;
}
```

## Kompleksitas
**Time Complexity**:
* Best Case: $O(1)$
* Worst Case: $O(n)$
* Average Case: $O(n)$

**Space Complexity**: $O(1)$
