#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

std::string HURUF = "abcdefghijklmnopqrstuvwxyz";

enum class Option {
    ENCRYPT = 1,
    DECRYPT,
    EXIT,
    INVALID
};

void printWelcomeMessage() {
    std::cout << "Welcome To Caesar Chiper\n";
    std::cout << "1. Encrypt\n";
    std::cout << "2. Decrtpt\n";
    std::cout << "3. Exit\n";
    std::cout << "Select (1-3): ";
}

void checkAndCleanCin() {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

Option getOption() {
    int selectedOption{};
    std::cin >> selectedOption;

    if (std::cin.fail()) {
        std::cout << "Invalid option, please select the valid one." << std::endl;
        checkAndCleanCin();
        return Option::INVALID;
    }

    // checkAndCleanCin();
    return static_cast<Option>(selectedOption);
}

bool isOnlyString(std::string &str) {
    const bool result = std::all_of(str.begin(), str.end(), [](const unsigned char ch) {
        return std::isalpha(ch);
    });

    return result;
}

void decrypt() {
    std::string text_encrypted;
    // checkAndCleanCin();
    std::cin >> text_encrypted;

    if (!isOnlyString(text_encrypted)) {
        std::cout << "Error, tidak dapat menerima karakter selain a-z";
        return;
    }

    for (int i = 0; i < HURUF.size(); i++) {
        std::string result;
        for (char j: text_encrypted) {
            const size_t index = HURUF.find(j);
            result += HURUF[(index + i) % 26];
        }
        std::cout << "K = " << i << " - " << result << std::endl;
        result.clear();
    }
};

void encryp() {
    int K{};
    std::cout << "Masukan nilai pergeseran (K): ";
    std::cin >> K;

    std::cout << "Masukan text: ";
    std::string text;
    std::cin >> text;

    if (!isOnlyString(text)) {
        std::cout << "Error, tidak dapat menerima karakter selain a-z";
        return;
    }

    std::string result;
    for (const char j: text) {
        const size_t index = HURUF.find(j);
        result += HURUF[(index + K) % 26];
    }

    std::cout << result << std::endl;
}


int main() {
    Option selectedOption{};

    do {
        printWelcomeMessage();
        selectedOption = getOption();

        switch (selectedOption) {
            case Option::ENCRYPT:
                encryp();
                break;
            case Option::DECRYPT:
                decrypt();
                break;
            case Option::EXIT:
            case Option::INVALID:
                break;
        }
    } while (selectedOption != Option::EXIT);


    return 0;
}
