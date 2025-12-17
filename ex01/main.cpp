/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:12:11 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:12:16 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie *horde = zombieHorde(5, "HordeBro");

    int i = 0;
     while (i < 5)
        horde[i++].announce();

    delete[] horde;
    return (0);
}
