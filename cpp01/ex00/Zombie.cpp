#include "Zombie.hpp"

//Constructeur par défaut
Zombie::Zombie() : name("") {}

//Constructeur avec nom donné
Zombie::Zombie(const std::string &name) : name(name) {}

//Destructeur
Zombie::~Zombie()
{
	std::cout << name << " is destroyed!" << std::endl;
}

// Méthode pour annoncer
void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Setter pour le nom
void Zombie::setName(const std::string &n)
{
	name = n;
}