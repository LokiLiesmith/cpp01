/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:11:30 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:11:31 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{	
	// std::cout << _name << " destroyed" << std::endl;
}


void HumanA::attack()
{
	std::cout << _name << " attacks with their "
				<< _weapon.getType()
				<< "."
				<< std::endl;
}

