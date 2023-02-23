/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 11:44:12 by mforstho      #+#    #+#                 */
/*   Updated: 2023/02/01 16:08:25 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

#ifndef PROGRAM_NAME
# define PROGRAM_NAME "a.out"
#endif

void leakfunc(void) {
	system("leaks -q " PROGRAM_NAME);
}

int	main(void) {
	atexit(leakfunc);
	
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	return (EXIT_SUCCESS);
}
