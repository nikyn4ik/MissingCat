#pragma once

#include <string>

class Cat {
public:
    // ����������� ������ Cat. ��������� ��� ����� � �������� ���������.
    Cat(const std::string& name);
    // ����� ��� ��������� ����� �����.
    std::string getName() const;
    // ������ ��� ������ �����.
    void searchAnimalShelters() const;
    void callVeterinaryClinics() const;
    void addressPassersby() const;
    void postAds() const;
    // ����� ��� ��������, ���� �� ������� �����.
    bool isFound() const;
    // ����� ��� ��������� �������� ���������� found_.
    void setFound(bool found) const;
    void setFound(bool found);

private:
    std::string name_; // ��� �����
    bool found_;  // ����, ����������� �� ��, ������� �� �����.
};
