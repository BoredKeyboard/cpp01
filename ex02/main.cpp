/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 10:23:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/02/01 11:16:58 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	brian = "HI THIS IS BRAIN";
	std::string *stringPTR = &brian;
	std::string &stringREF = brian;

	std::cout << "Mem address of string:		" << &brian << std::endl;
	std::cout << "Mem address held by PTR:	" << stringPTR << std::endl;
	std::cout << "Mem address held by REF:	" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string:		" << brian << std::endl;
	std::cout << "Value pointed to by PTR:	" << *stringPTR << std::endl;
	std::cout << "Value pointed to by REF:	" << stringREF << std::endl;
}
