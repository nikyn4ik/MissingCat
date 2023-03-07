#pragma once

#include <string>

class Cat {
public:
    // Конструктор класса Cat. Принимает имя кошки в качестве аргумента.
    Cat(const std::string& name);
    // Метод для получения имени кошки.
    std::string getName() const;
    // Методы для поиска кошки.
    void searchAnimalShelters() const;
    void callVeterinaryClinics() const;
    void addressPassersby() const;
    void postAds() const;
    // Метод для проверки, была ли найдена кошка.
    bool isFound() const;
    // Метод для установки значения переменной found_.
    void setFound(bool found) const;
    void setFound(bool found);

private:
    std::string name_; // Имя кошки
    bool found_;  // Флаг, указывающий на то, найдена ли кошка.
};
