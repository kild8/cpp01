#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie = Zombie::newZombie("Heap");
    heapZombie->announce();
    delete heapZombie;

    Zombie::randomChump("StackZombie");

    return 0;
}