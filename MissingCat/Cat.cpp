#include "Cat.h"
#include <iostream>

Cat::Cat(const std::string& name) : name_(name), found_(false) {}

std::string Cat::getName() const {
    return name_;
}

void Cat::searchAnimalShelters() const {
    std::cout << "��� " << name_ << " � ������� ��� ��������...\n";
    // ��� ������ � ������� ��� ��������
}

void Cat::callVeterinaryClinics() const {
    std::cout << "����� � ������������ ������� ��� " << name_ << "...\n";
    // ��� ������ � ������������ �������
}

void Cat::addressPassersby() const {
    std::cout << "��������� � �������� �� ������ " << name_ << "...\n";
    // ��� ��������� � ��������
}

void Cat::postAds() const {
    std::cout << "�������� ���������� � " << name_ << "...\n";
    // ��� ���������� ����������
}

bool Cat::isFound() const {
    return found_;
}

void Cat::setFound(bool found) {
    found_ = found;
}
