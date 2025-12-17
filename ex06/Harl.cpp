/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:10:13 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:10:13 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{

}
Harl::~Harl()
{

}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n"
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
				<< "I really do!"
				<< std::endl;
}
void Harl::info(void)
{
	std::cout << "[INFO]\n"
				<< "I cannot believe adding extra bacon costs more money.\n"
				<< "You didn't put enough bacon in my burger!\n"
				<< "If you did, I wouldn't be asking for more!"
				<< std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING]\n"
				<< "I think I deserve to have some extra bacon for free.\n"
				<< "I've been coming for years, whereas you started working here just last month." 
	 			<< std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR]\n"
				<< "This is unacceptable! I want to speak to the manager now." 
				<< std::endl;
}

t_levelNr Harl::getLevelNr(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			return ((t_levelNr)i);
		i++;
	}
	return ((t_levelNr)-1);
}

void Harl::complain(std::string level)
{
	t_levelNr levelNr = getLevelNr(level);
	switch(levelNr)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
}