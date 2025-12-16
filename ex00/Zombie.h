/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:18:42 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/16 16:42:48 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

//Heap
Zombie* newZombie(std::string name);
//Stack
void randomChump(std::string name);

#endif