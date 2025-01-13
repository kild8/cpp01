#include "Weapon.hpp"

//Constructor
Weapon::Weapon(const std::string &type) : type(type) {}
Weapon::~Weapon() {}

//Getter
const std::string& Weapon::getType() const
{
    return type;
}

//Setter
void Weapon::setType(const std::string &newType)
{
    type = newType;
}