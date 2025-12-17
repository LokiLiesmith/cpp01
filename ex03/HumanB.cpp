/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:11:38 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:11:39 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

#include <string>
#include <iostream>


HumanB::HumanB(std::string name)
    : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    if (_weapon)
    {
        std::cout << _name << " attacks with their "
                    << _weapon->getType()
                    << "."
                    << std::endl;
    }
    else
        std::cout << _name << " uses his fists." <<std::endl;
}
