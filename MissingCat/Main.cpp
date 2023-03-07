#include <iostream>
#include "Cat.h" /// ����������� ������������� ����� � ����������� ������ Cat

int main() {
    setlocale(LC_ALL, "Russian");
    // ������� ������ ������ Cat � ������ "����"
    Cat missingCat("����");
    // ������� ��������� � ���, ��� ������� ���� ���� ��������� ����� �� ����� "����"
    std::cout << "������� ���� ���� ��������� ����� �� ����� " << missingCat.getName() << ".\n";

    // �������� ������ ������ ����� � ������ ������
    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    // ����������� � ������������ ���������� � ���, ���� �� ������� �����
    std::cout << "������� �� ����� (Yes/No)? ";
    std::string input;
    std::cin >> input;

    // ������� ��� ���������� ������� � ������ � � ����� ��������� ������
    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

    // ���� ������������ ���� "Yes", �� ������������� �������� found_ ������� missingCat � true
    if (input == "Yes") {
        missingCat.setFound(true);
        std::cout << "������� ����� ���� �����!\n";
    }
    // ����� ������������� �������� found_ � false
    else {
        missingCat.setFound(false);
        std::cout << "������� �� ����� ���� ����� :(\n";
    }

    // ��������� ���������
    return 0;
