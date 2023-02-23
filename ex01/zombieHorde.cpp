/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 15:36:30 by mforstho      #+#    #+#                 */
/*   Updated: 2023/01/31 16:12:39 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++) {
		horde[i].setName(name);
	}
	return (horde);
}
