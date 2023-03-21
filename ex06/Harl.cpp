/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/21 15:47:14 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/21 17:53:23 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "DEBUGGING" << std::endl;
}
void Harl::info( void ) {
	std::cout << "INFODUMP" << std::endl;
}
void Harl::warning( void ) {
	std::cout << "THIS IS A WARNING" << std::endl;
}
void Harl::error( void ) {
	std::cout << "OH NO, AN ERROR" << std::endl;
}

int get_level(std::string level) {
	static const std::string	lookup_table[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == lookup_table[i])
			return (i);
	}
	return (-1);
}

void Harl::complain( std::string level ) {
	int	jump_index = get_level(level);
	switch (jump_index) {
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break ;
		default:
			std::cout << "Invlid level" << std::endl;
			break ;
	}
}
