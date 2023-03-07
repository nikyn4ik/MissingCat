#include <iostream>
#include "Cat.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Cat missingCat("����");
    std::cout << "������� ���� ���� ��������� ����� �� ����� " << missingCat.getName() << ".\n";

    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    std::cout << "������� �� ����� (Yes/No)? ";
    std::string input;
    std::cin >> input;

    // Remove any leading or trailing whitespace characters
    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

    if (input == "Yes") {
        missingCat.setFound(true);
        std::cout << "������� ����� ���� �����!\n";
    }
    else {
        missingCat.setFound(false);
        std::cout << "������� �� ����� ���� ����� :(\n";
    }

    return 0;
}
