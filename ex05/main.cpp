/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:13:22 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:10:09 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harl <LEVEL>\nLevels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}

	Harl harl;
	std::string level = av[1];
	harl.complain(level);
	return (0);
}


