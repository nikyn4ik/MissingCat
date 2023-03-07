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

    std::cout << "Наконец-то человек нашел свою кошку!\n";
    return 0;
}
