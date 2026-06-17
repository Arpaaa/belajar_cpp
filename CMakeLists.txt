cmake_minimum_required(VERSION 4.2)
project(belajar_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(03_part_1 03_pendahuluan/part_1.cpp
        33_function_recursive/recursive.cpp
        36_reference/reference_1.cpp
        39_pendahuluan_array/array_1.cpp
        45_latihan_membuat_sort_algorithm/bubble_sort.cpp
        53_getLine_console_string/getLine_console_string.cpp
        55_nesting_struct/nesting_struct_1.cpp
        56_union/union_1.cpp
        66_membaca_binary_file/membaca_binary_file.cpp)
add_executable(04_compiling_1 04_compiling/compiling_1.cpp 04_compiling/tambah.cpp 04_compiling/kurung.h)
add_executable(04_compiling_2 04_compiling/compiling_2.cpp)
add_executable(04_prepro_1 04_compiling/preprocessing_1.cpp)
add_executable(04_prepro_2 04_compiling/preproccessing_2.cpp)
add_executable(05_printing_1 05_printing/printing_1.cpp)
add_executable(05_printing_2 05_printing/printing_2_buffer_flush.cpp)
add_executable(06_variabel 06_variabel/variabel_1.cpp)
add_executable(07_deklarasi 07_deklrasi/deklarasi_1.cpp)
add_executable(07_garbage 07_deklrasi/garbage_value.cpp)
add_executable(08_tipe_data 08_tipe_data/tipe_data_1.cpp)
add_executable(09_aritmatika 09_aritmatika/aritmatika_1.cpp)
add_executable(10_komparasi 10_komparasi/komparasi_1.cpp)
add_executable(11_logika 11_logika_digital/logika_1.cpp)
add_executable(12_if 12_if_statement/if_1.cpp)
add_executable(13_if_else 13_if_else/if_else_1.cpp)
add_executable(14_switch 14_swtich_case/switch_case_1.cpp)
add_executable(15_calc_1 15_latihan_calculator/calculator_sederhana_1.cpp)
add_executable(15_calc_2 15_latihan_calculator/calculator_switch_case.cpp)
add_executable(16_assignment 16_assignment_operator/assignment_1.cpp)
add_executable(17_increment 17_increment_decrement/increment_decrement_1.cpp)
add_executable(18_while 18_while_loop/while_loop_1.cpp)
add_executable(19_do_while 19_do_while/do_while_1.cpp)
add_executable(20_for_loop 20_for_loop/for_loop_1.cpp)
add_executable(21_break_and_continue 21_break_and_continue/flow_1.cpp)
add_executable(22_latihan_fibonacci 22_latihan_fibonacci/fibonacci.cpp
        22_latihan_fibonacci/fibonacci_2.cpp)
add_executable(23_latihan_pattern 23_latihan_pattern/segitiga_siku.cpp)
add_executable(24_pengenalan_fungsi 24_pengenalan_fungsi/fungsi_1.cpp)
add_executable(25_latihan_dadu 25_latihan_dadu/dadu.cpp
        25_latihan_dadu/random_number.cpp)
add_executable(26_function_value_returning 26_function_value_returning/return_fungsi_1.cpp
        26_function_value_returning/return_fungsi_2.cpp)
add_executable(27_function_void 27_function_void/fungsi_void.cpp
        27_function_void/fungsi_void.cpp)
add_executable(28_latihan_fungsi 28_latihan_fungsi/keliling_persegi.cpp)
add_executable(29_function_prototype 29_function_prototype/function_prototype_1.cpp)
add_executable(30_scope 30_scope/scope_1.cpp)
add_executable(31_function_default_argument 31_function_default_argument/default_argument_1.cpp)
add_executable(32_function_overloading 32_function_overloading/overloading_1.cpp)
add_executable(33_function_recursive 33_function_recursive/recursive.cpp)
add_executable(34_latihan_recursive 34_latihan_recursive/factorial_recursive.cpp
        34_latihan_recursive/fibonacci_recursive.cpp)
add_executable(35_pointer 35_pointer/pointer_1.cpp)
add_executable(36_reference 36_reference/reference_1.cpp)
add_executable(37_function_with_pointer 37_function_with_pointer/function_with_pointer_1.cpp)
add_executable(38_function_with_reference 38_function_with_reference/function_with_reference.cpp)
add_executable(39_pendahuluan_array 39_pendahuluan_array/array_1.cpp
        39_pendahuluan_array/array_2.cpp)
add_executable(40_standart_library_array 40_standard_library_array/stl_array.cpp)
add_executable(41_latihan_array 41_latihan_array/latihan_array_1.cpp)
add_executable(42_looping_array 42_looping_array/looping_array_1.cpp
        42_looping_array/looping_array_2.cpp)
add_executable(43_multidimensi_array 43_multidimensi_array/multidimensional_standard_array_1.cpp
        43_multidimensi_array/multidimensional_STL_array.cpp)
add_executable(44_sort_array 44_sort_array/sort_array_1.cpp)
add_executable(45_latihan_membuat_sort_algorithm 45_latihan_membuat_sort_algorithm/bubble_sort.cpp
        45_latihan_membuat_sort_algorithm/selection_sort.cpp)
add_executable(46_search_array 46_search_array/search_array_1.cpp)
add_executable(47_pengenalan_string 47_pengenalan_string/string_1.cpp)
add_executable(48_operasi_pada_string 48_operasi_pada_string/operasi_string_1.cpp)
add_executable(49_komparasi_string 49_komparasi_string/komparasi_string_1.cpp)
add_executable(50_substring 50_substring/substring_1.cpp)
add_executable(51_subtitusi_string 51_subtitusi_string/subtitusi_string_1.cpp)
add_executable(52_member_function_of_string 52_member_function_of_string/member_function_of_string.cpp)
add_executable(53_getLine_console_string 53_getLine_console_string/getLine_console_string.cpp
        53_getLine_console_string/ambil_variabel_getline.cpp
        53_getLine_console_string/getline_after_cin.cpp)
add_executable(54_struct 54_struct/struct_1.cpp
        54_struct/struct_member_function.cpp
        54_struct/struct_constructor.cpp
        54_struct/struct_default.cpp)
add_executable(55_nesting_struct 55_nesting_struct/nesting_struct_1.cpp)
add_executable(56_union 56_union/union_1.cpp)
add_executable(57_pendahuluan_vector_stl 57_pendahuluan_vector_stl/pengenalan_vector_1.cpp)
add_executable(58_enum 58_enum/enum_1.cpp
        58_enum/enum_class.cpp)
add_executable(59_Ternary_Operator 59_Ternary_Operator/ternary_operator.cpp
        59_Ternary_Operator/ternary_assignment.cpp
        59_Ternary_Operator/ternary_conditional_void_expression.cpp)
add_executable(60_comma_operator 60_comma_operator/comma_operator_1.cpp)
add_executable(61_bitwise_operator 61_bitwise_operator/bitwise_operator_1.cpp
        61_bitwise_operator/bitwise_ganjil_genap.cpp
        61_bitwise_operator/bitwise_bit_masking.cpp
        61_bitwise_operator/bitwise_swap.cpp
        61_bitwise_operator/bitwise_overflow_underflow.cpp)
add_executable(62_casting_operator 62_casting_operator/casting_operator_1.cpp
        62_casting_operator/static_cast.cpp)
add_executable(63_output_file_stream 63_output_file_stream/ofstream_1.cpp
        63_output_file_stream/ofstream_lanjutan.cpp
        63_output_file_stream/ofstream_file_mode_flag.cpp
        63_output_file_stream/pointer_position_ofstream.cpp)
add_executable(64_input_file_stream 64_input_file_stream/ifstream_1.cpp
        64_input_file_stream/ifstream_lanjutan.cpp)
add_executable(65_menulis_binary_file 65_menulis_binary_file/menulis_binary_file.cpp)
add_executable(66_membaca_binary_file 66_membaca_binary_file/membaca_binary_file.cpp)
add_executable(67_latihan_io_external 67_latihan_io_external/latihan_io_binary_file.cpp
        67_latihan_io_external/latihan_baca_io_binary_file.cpp)
add_executable(68_latihan_project_crud 68_latihan_project_crud/main.cpp)
add_executable(69_preprocessing_directive 69_preprocessing_directive/preprocessing_directive.cpp
        69_preprocessing_directive/macro_define_undef.cpp
        69_preprocessing_directive/preprocessing_if_else.cpp
        69_preprocessing_directive/preprocessing_include.cpp
        69_preprocessing_directive/mylib.h
        69_preprocessing_directive/ifdef_ifndef_pragma.cpp)
add_executable(70_namespace 70_namespace/namepace_1.cpp)
add_executable(71_latihan_multifile 71_latihan_multifile/main.cpp
        71_latihan_multifile/PesertaDidik.cpp
        71_latihan_multifile/PesertaDidik.h
        71_latihan_multifile/utils.cpp
        71_latihan_multifile/utils.h)
add_executable(72_type_def 72_type_def/typedef_1.cpp)
add_executable(73_template_fungsi 73_template_fungsi/template_fungsi_1.cpp)
add_executable(999_latihan_TOKI 999_latihan_TOKI/6_7_menutup_toko.cpp
        999_latihan_TOKI/7_1_memborong_bebek.cpp
        999_latihan_TOKI/7_2_perkenalan_fungsi.cpp
        999_latihan_TOKI/7_4_parameter.cpp
        999_latihan_TOKI/7_6_void_function.cpp
        999_latihan_TOKI/7_8_member_function.cpp
        999_latihan_TOKI/8_6_kalkulator_string.cpp
        999_latihan_TOKI/9_4_hitung_vokal_rekursif.cpp
        999_latihan_TOKI/9_5_jumlah_digit.cpp
        999_latihan_TOKI/9_6_cek_polindrom.cpp
        999_latihan_TOKI/9_7_konversi_biner.cpp
        999_latihan_TOKI/10_2_compile_faktorial.cpp
        999_latihan_TOKI/10_3_compile_faktorial_cin.cpp
        999_latihan_TOKI/10_4_compile_hitung_vokal.cpp
        999_latihan_TOKI/10_5_penjumlahan_N_bulat.cpp
        999_latihan_TOKI/11_1_jumlah_seluruh_kecuali_i.cpp
        999_latihan_TOKI/11_2_jumlah_seluruh_kecuali_i_2.cpp
        999_latihan_TOKI/11_3_membariskan_bebek.cpp
        999_latihan_TOKI/11_4_membariskan_bebek_2.cpp
        999_latihan_TOKI/11_3_membasikan_bebek_3.cpp
        999_latihan_TOKI/12_1_statistika_sederhana.cpp
        999_latihan_TOKI/12_2_komposisi_fungsi.cpp
        999_latihan_TOKI/12_3_mencari_pola__IV.cpp
        999_latihan_TOKI/12_4_perkalian_matriks.cpp
)
add_executable(998_Standard_Library_Tambahan 998_Standard_Library_Tambahan/01_stoi.cpp)
