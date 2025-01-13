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
void setName(const std::string &name);

//Méthode de création
static Zombie *newZombie(const std::string &name);
static void randomChump(const std::string &name);
};

#endif