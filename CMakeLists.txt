cmake_minimum_required(VERSION 4.2)
project(belajar_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_SCAN_FOR_MODULES OFF)

file(GLOB_RECURSE ALL_CPP_FILES *.cpp)

foreach(FILE_PATH ${ALL_CPP_FILES})
    # Lewati folder build dan .config
    if(NOT FILE_PATH MATCHES "build" AND NOT FILE_PATH MATCHES "\\.config")
        
        # 1. Dapatkan jalur relatif dari root project
        file(RELATIVE_PATH REL_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${FILE_PATH})
        
        # 2. Buang ekstensi .cpp
        string(REPLACE ".cpp" "" TARGET_NAME ${REL_PATH})
        
        # 3. Ganti SPASI menjadi underscore (_) -> Ini yang bikin eror tadi
        string(REPLACE " " "_" TARGET_NAME ${TARGET_NAME})
        
        # 4. Ganti semua jenis garing (bawaan Windows/Linux) menjadi underscore (_)
        string(REPLACE "/" "_" TARGET_NAME ${TARGET_NAME})
        string(REPLACE "\\" "_" TARGET_NAME ${TARGET_NAME})
        
        # 5. Daftarkan sebagai target executable yang bersih dari spasi
        add_executable(${TARGET_NAME} ${FILE_PATH}
                996_soal_OSN_P_24/02_A_string_cantik_OSN.cpp
                "999_latihan_TOKI/BAB 5 DEVIDE AND CONQUER/01_merge_sort.cpp")
        
    endif()
endforeach()
