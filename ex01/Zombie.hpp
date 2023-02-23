/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 11:22:41 by mforstho      #+#    #+#                 */
/*   Updated: 2023/01/31 16:12:47 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Zombie
{
private:
	std::string	name;
public:
	void	announce(void);
	Zombie();
	Zombie(std::string name);
	void setName(std::string name);
	~Zombie();
};

Zombie *zombieHorde(int n, std::string name);

#endif
