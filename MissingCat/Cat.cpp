#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name) : name_(name) {}

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
