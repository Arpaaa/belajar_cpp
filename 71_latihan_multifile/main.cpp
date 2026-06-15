#include "utils.h"
#include "PesertaDidik.h"
#include <fstream>


int main() {
    Option selectedMenuOption;
    std::fstream file;

    checkAndCreateDB(file);
    // file.open(DATABASE_PATH, std::ios::out | std::ios::trunc | std::ios::binary);
    // file.close();

    do {
        selectedMenuOption = selectMenu();

        switch (selectedMenuOption) {
            case Option::INVALID_CHOICE:
                continue;
            case Option::SHOW:
                readPesertaDidik(file);
        // confirmation("Do you want to continue other CRUD action? [Y/n]", 'y');
                break;
            case Option::INSERT:
                createPesertaDidik(file);
                break;
            case Option::UPDATE:
                updatePesertaDidik(file);
                break;
            case Option::DELETE:
                deletePesertaDidik(file);
                break;
            case Option::EXIT:
                return 0;
        }

        if (!confirmation("Do you want to continue other CRUD action? [Y/n]", true)) {
            selectedMenuOption = Option::EXIT;
        }
    } while (selectedMenuOption != Option::EXIT);

    return 0;
}