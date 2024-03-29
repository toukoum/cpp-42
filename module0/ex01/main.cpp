/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiraud <rgiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:09:12 by rgiraud           #+#    #+#             */
/*   Updated: 2024/03/18 16:33:38 by rgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	repertory; 
	repertory.clearScreen();
	std::string input;
    const std::string underline = "\033[4m";
    std::cout << std::endl << YELLOW << underline << "====== Welcome in PHONE BOOK =====" << RESET << std::endl << std::endl;
	
	while (true)
	{
		std::cout << CYAN << std::endl << "Enter your command (ADD/SEARCH/EXIT): " << RESET;
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
			repertory.add_contact();
		else if (input == "SEARCH")
			repertory.search_contact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << RED << "404: Command not Found." << RESET << std::endl;
	}
	std::cout << YELLOW << std::endl << "Bye !" << RESET << std::endl;
	
}
