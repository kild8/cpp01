#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
// Constructeurs
Zombie();
Zombie(const  std::string &name);
~Zombie();

// Getters et Setters
void announce() const;
std::string getName() const;

};

//Méthode de création
Zombie *zombieHorde(int N, const std::string &name);

#endif