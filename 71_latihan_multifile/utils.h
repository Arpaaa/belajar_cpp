#ifndef BELAJAR_CPP_UTILS_H
#define BELAJAR_CPP_UTILS_H

#include <fstream>
#include <string>

enum class Option {
    INVALID_CHOICE,
    SHOW,
    INSERT,
    UPDATE,
    DELETE,
    EXIT
};

bool confirmation(const std::string &text, const bool &defaultValue);

void checkAndCreateDB(std::fstream &file);

void checkAndCleanCin();

void printMenu();

Option selectMenu();

#endif //BELAJAR_CPP_UTILS_H
