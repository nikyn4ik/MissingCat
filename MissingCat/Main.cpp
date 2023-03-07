#include <iostream>
#include "Cat.h" /// подключение заголовочного файла с объявлением класса Cat

int main() {
    setlocale(LC_ALL, "Russian");
    // создаем объект класса Cat с именем "Ника"
    Cat missingCat("Ника");
    // выводим сообщение о том, что человек ищет свою пропавшую кошку по имени "Ника"
    std::cout << "Человек ищет свою пропавшую кошку по имени " << missingCat.getName() << ".\n";

    // вызываем методы поиска кошки в разных местах
    missingCat.searchAnimalShelters();
    missingCat.callVeterinaryClinics();
    missingCat.addressPassersby();
    missingCat.postAds();

    // запрашиваем у пользователя информацию о том, была ли найдена кошка
    std::cout << "Найдена ли кошка (Yes/No)? ";
    std::string input;
    std::cin >> input;

    // удаляем все пробельные символы в начале и в конце введенной строки
    input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());

    // если пользователь ввел "Yes", то устанавливаем значение found_ объекта missingCat в true
    if (input == "Yes") {
        missingCat.setFound(true);
        std::cout << "Человек нашел свою кошку!\n";
    }
    // иначе устанавливаем значение found_ в false
    else {
        missingCat.setFound(false);
        std::cout << "Человек не нашел свою кошку :(\n";
    }

    // завершаем программу
    return 0;
