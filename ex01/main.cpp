/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:23:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/01/31 16:09:49 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void leakfunc(void) {
	system("leaks -q zombie");
}

int	main(void) {
	atexit(leakfunc);
	int	n = 6;

	Zombie *horde = zombieHorde(n, "chumper");
	for (int i = 0; i < n; i++) {
		std::cout << i << ": ";
		horde[i].announce();
	}
	delete[] horde;
	return (EXIT_SUCCESS);
}
