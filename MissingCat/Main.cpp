#include <iostream>
#include "Cat.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Cat missingCat("Ника");
    std::cout << "Человек ищет свою пропавшую кошку по имени " << missingCat.getName() << ".\n";

    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    std::cout << "Найдена ли кошка (Yes/No)? ";
    std::string input;
    std::cin >> input;

    // Remove any leading or trailing whitespace characters
    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

    if (input == "Yes") {
        missingCat.setFound(true);
        std::cout << "Человек нашел свою кошку!\n";
    }
    else {
        missingCat.setFound(false);
        std::cout << "Человек не нашел свою кошку :(\n";
    }

    return 0;
}
