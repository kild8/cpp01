#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
        std::string name;
        Weapon *weapon;

public:
// Constructeurs
HumanB(const std::string &name);
~HumanB();


//Setter
void setWeapon(Weapon &weapon);
// Méthode pour l'attaque
void attack() const;
};

#endif