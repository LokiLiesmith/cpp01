/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:11:01 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:11:03 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	
	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack();
};

#endif