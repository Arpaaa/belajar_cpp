#include "utils.h"
#include "PesertaDidik.h"
#include <iostream>
#include <limits>

bool confirmation(const std::string &text, const bool &defaultValue) {
    // TODO: Tambahin error handling execption kalo udah belajar materinya

    char input = 0;
    bool result = false;

    while (std::tolower(input) != 'n') {
        std::cout << text;

        if (std::cin.peek() == '\n') {
            std::cin.get();
            result = defaultValue;
            break;
        }
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (std::tolower(input) == 'y') {
            result = true;
            break;
        }
    }

    // while (std::tolower(input) != 'n') {
    //     std::cout << text;
    //     std::cin >> input;
    //
    //     if (std::tolower(input) == 'y') {
    //         result = true;
    //         break;
    //     }
    // }


    return result;
}

void checkAndCreateDB(std::fstream &file) {
    bool isFileExist = false;
    {
        std::ifstream checkFile(DATABASE_PATH, std::ios::in | std::ios::binary);
        isFileExist = (checkFile.is_open());
        checkFile.close();
    }

    if (!isFileExist) {
        file.open(DATABASE_PATH, std::ios::out | std::ios::trunc | std::ios::binary);
        std::cout << "Successfully create and connecting to database" << std::endl;
        file.close();
        return;
    }

    std::cout << "Connected to database" << std::endl;
}

void checkAndCleanCin() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void printMenu() {
    std::cout << "===-------------------------------===\n";
    std::cout << "    Database Peserta Didik\n";
    std::cout << "===-------------------------------===\n";
    std::cout << "Action List:\n";
    std::cout << "1. Show all data\n";
    std::cout << "2. Insert new data\n";
    std::cout << "3. Update data\n";
    std::cout << "4. Delete data\n";
    std::cout << "5. Exit\n";
    std::cout << "Select action (1-5): ";
}

Option selectMenu() {
    printMenu();

    int result = 0;
    std::cin >> result;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cout << "Input is invalid, please input a valid option." << std::endl;;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return static_cast<Option>(result);
}
