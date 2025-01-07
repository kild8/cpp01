#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
     std::string type;

public:
// Constructeurs
Weapon(const std::string &type);
~Weapon();

// Getters et Setters
void setType(const std::string &newType);
const std::string& getType() const;
};

#endif