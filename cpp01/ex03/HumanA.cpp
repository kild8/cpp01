#include "HumanA.hpp"
#include <iostream>

//Constructeur
HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {}
//Attack function
void    HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
