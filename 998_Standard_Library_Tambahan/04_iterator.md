# Iterator

Iterator adalah objek yang berperan sebagai pointer (penunjuk) posisi suatu elemen di dalama kontainer.

## Iterator Pada Array

Nama variabel pada Basic Array maupun Vector adalah iterator atau pointer ke elemen pertamanya.
Contoh:

```c++
int angka[5] = {1, 2, 3, 4, 5};
```

### Melihat Memory Address

Jika kita melihat isi dari alamat address `angka` dan `angka[0]` maka akan mengembalikan
nilai yang sama. Contoh

```c++
angka       // Output: 0x612b3ff770 (Permisalan)
&angka[0]   // Output: 0x612b3ff770 (Permisalan)
```

### Mengambil Nilai dengan Iterator

Untuk mengambil nilai pada iterator dapat digunakan tanda * diawal iterator. contoh:

```c++
*angka        // Output: 1
*(&angka[1])  // Output: 2
```

Contoh jika mengambil elemen ke 3 dengan iterator

```c++
*(angka + 3) // Output: 4
```

### Operator pada Array

Biderectional Iterator (Maju/Mundur)

`iterator++`
`iterator--`

Contoh menggunakan `iterator++`

```c++
auto numbers_end = &numbers[4];

for (auto i = numbers; i <= numbers_end; i++) {
    std::cout << *i << std::endl;
}
```