#include <iostream>
#include "Cat.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Cat missingCat("����"); // ��� �����
    std::cout << "������� ���� ���� ��������� ����� �� ����� " << missingCat.getName() << ".\n";

    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    std::cout << "�������-�� ������� ����� ���� �����!\n";
    return 0;
}
