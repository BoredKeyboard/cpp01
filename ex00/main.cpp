/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:23:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/01/31 15:30:23 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void leakfunc(void) {
	system("leaks -q zombie");
}

int	main(void) {
	atexit(leakfunc);
	Zombie *zombie = newZombie("test");

	zombie->announce();
	randomChump("chump");
	delete zombie;
	return (EXIT_SUCCESS);
}
