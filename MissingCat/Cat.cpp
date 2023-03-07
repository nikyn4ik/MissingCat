#include "Cat.h"
#include <iostream>

Cat::Cat(std::string name) : name_(name) {}

std::string Cat::getName() const {
    return name_;
}

void Cat::searchAnimalShelters() const {
    std::cout << "»щу " << name_ << " в приютах дл€ животных...\n";
    // дл€ поиска в приютах дл€ животных
}

void Cat::callVeterinaryClinics() const {
    std::cout << "«воню в ветеринарные клиники дл€ " << name_ << "...\n";
    // дл€ звонка в ветеринарные клиники
}

void Cat::addressPassersby() const {
    std::cout << "ќбращаюсь к прохожим по поводу " << name_ << "...\n";
    // дл€ обращени€ к прохожим
}

void Cat::postAds() const {
    std::cout << "–азмещаю объ€влени€ о " << name_ << "...\n";
    // дл€ размещени€ объ€влений
}
