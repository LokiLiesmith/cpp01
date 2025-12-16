#include "Zombie.h"
#include <string>
#include <iostream>

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << "'s head popped." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiinzZz" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}