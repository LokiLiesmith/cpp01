#include "Zombie.h"

int main(void)
{
	Zombie one("Brian");
	one.announce();
	
	Zombie *two = newZombie("HeapBro");
	two->announce();
	delete two;

	randomChump("StackBro");
	return (0);
}