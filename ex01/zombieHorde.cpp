#include "Zombie.h"
#include <iostream>

// Creates a contiguous array of Zombie objects on the heap
// and returns a pointer to it
Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *horde = new Zombie[N];

	while (i < N)
		horde[i++].setName(name);

	return (horde);
}
