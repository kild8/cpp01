#include "Zombie.hpp"

//Constructeur par défaut
Zombie::Zombie() : name("Didier") {}

//Constructeur avec nom donné
Zombie::Zombie(const std::string &name) : name(name) {}

//Destructeur
Zombie::~Zombie()
{
	std::cout << name << " is destroyed!" << std::endl;
}

//Getter
std::string Zombie::getName() const
{
	return this->name;
}

// Méthode pour annoncer
void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
