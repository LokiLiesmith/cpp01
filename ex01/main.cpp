#include "Zombie.h"

int main(void)
{
    Zombie *horde = zombieHorde(5, "HordeBro");

    int i = 0;
     while (i < 5)
        horde[i++].announce();

    delete[] horde;
    return (0);
}
