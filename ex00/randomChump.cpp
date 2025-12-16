/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:18:34 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/16 16:23:57 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie stackbro(name);
	stackbro.announce();
}