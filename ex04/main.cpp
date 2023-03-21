/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 12:19:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/21 15:33:58 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Invalid amount of arguments" << std::endl;
		return (EXIT_SUCCESS);
	}
	std::ifstream inputfile(argv[1]);
	if (inputfile.fail()) {
		std::cout << "inputfile inaccessible" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	filename(argv[1]);
	filename += ".replace";
	std::ofstream outputfile(filename.c_str());
	if (outputfile.fail()) {
		std::cout << "outputfile inaccessible" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	str;
	std::ostringstream ss;
	std::string from(argv[2]);
	std::string to(argv[3]);
	if (inputfile) {
		ss << inputfile.rdbuf();
		str = ss.str();
	}

	size_t		pos = str.find(from);
	while (pos != str.npos) {
		str.erase(pos, from.length());
		str.insert(pos, to);
		pos = str.find(from, pos + to.length());
	}
	outputfile << str;
	outputfile.close();
	inputfile.close();
	return (EXIT_SUCCESS);
}
