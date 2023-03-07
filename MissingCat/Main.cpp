#include <iostream>
#include "Cat.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Cat missingCat("Ника"); // Имя кошки
    std::cout << "Человек ищет свою пропавшую кошку по имени " << missingCat.getName() << ".\n";

    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    std::cout << "Найдена ли кошка (да/нет)? ";
    std::string input;
    std::cin >> input;
    if (input == "да") {
        missingCat.setFound(true);
        std::cout << "Человек нашел свою кошку!\n";
    }
    else {
        missingCat.setFound(false);
        std::cout << "Человек не нашел свою кошку :(\n";
    }

    return 0;
}
