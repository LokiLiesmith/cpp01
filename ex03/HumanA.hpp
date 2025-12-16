#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <string>
# include "Weapon.hpp"
class HumanA
{
	private:
		std::string _name;
		std::string _weapon;
	
	public:
		HumanA(std::string name, Weapon& weapon);
        ~HumanA();

		void setWeapon(std::string weapon);
		void attack();
};

#endif