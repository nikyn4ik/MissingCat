#include <string>

class Cat {
public:
    Cat(std::string name);
    std::string getName() const;
    void searchAnimalShelters() const;
    void callVeterinaryClinics() const;
    void addressPassersby() const;
    void postAds() const;

private:
    std::string name_;
};