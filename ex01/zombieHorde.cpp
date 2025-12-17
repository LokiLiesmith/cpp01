/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:12:02 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:12:04 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
