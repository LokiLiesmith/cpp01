/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:11:41 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:11:45 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <string>
# include "Weapon.hpp"
// Human A defines an invariant, which means the human A cant exist without a weapon
// so a reference can only be encoded on creation which enforces is.

// a pointer makes the weapon optional.

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack();
};

#endif