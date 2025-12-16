/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:07:53 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/16 19:36:44 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		// constructors
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		std::string& getType() const;
		void setType(std::string type);
};

#endif
