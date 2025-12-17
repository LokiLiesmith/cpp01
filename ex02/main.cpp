/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:11:16 by mrazem            #+#    #+#             */
/*   Updated: 2025/12/17 23:11:16 by mrazem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String address:       " << &str << std::endl;
    std::cout << "Pointer address:      "<< stringPTR << std::endl;
    std::cout << "Reference address:    "<< &stringREF << std::endl;

    std::cout << "String value:         " << str << std::endl;
    std::cout << "Pointer value:        "<< *stringPTR << std::endl;
    std::cout << "Reference value:      "<< stringREF << std::endl;

    return (0);
}