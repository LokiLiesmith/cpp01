/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:19:57 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/16 20:44:01 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon()
{

}
Weapon::Weapon(std::string type)
{
	setType(type);
	// _type = type;
}
Weapon::~Weapon()
{
	std::cout << "weapon destroyed" <<std::endl;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

std::string Weapon::getType() const
{
	return (_type);
}
