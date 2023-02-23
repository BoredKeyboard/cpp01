/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 12:19:11 by mforstho      #+#    #+#                 */
/*   Updated: 2023/02/13 14:29:34 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

std::string	replace_word(std::string sentence, std::string from, std::string to) {
	size_t	word_pos;
	// size_t	start_pos;
	std::string	new_str;

	word_pos = sentence.find(from, 0);
	new_str = sentence.substr(0, word_pos);
	new_str += to;
	new_str += sentence.substr((word_pos + from.length()), sentence.length() - (word_pos + from.length()));
	return (new_str);
}

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Not enought arguments" << std::endl;
		return (EXIT_SUCCESS);
	}
	(void)argv;

	std::string from = argv[2];
	std::string to = argv[3];
	std::ifstream inputfile(argv[1]);
	std::string	filename(argv[1]);
	filename += ".replace";
	std::ofstream outputfile(filename.c_str());
	// size_t start_pos;
	
	int	i = 0;
	std::string	str;
	std::ostringstream ss;
	if(inputfile) {
		ss << inputfile.rdbuf(); // reading data
		str = ss.str();
		std::cout << i << ": " << str << std::endl;
		i++;
	}
    
	std::string	new_str;
	new_str = replace_word(str, from, to);
	std::cout << new_str;
	// while () {
	// 	new_str = replace_word(new_str, from, to);
	// }
	
	// start_pos = 0;
	// while((start_pos = str.find(from, start_pos)) != std::string::npos) {
	// 	str.replace(start_pos, from.length(), to);
	// 	start_pos += to.length();
	// }
	// std::cout << i << ": " << str;
	// outputfile << str;
	
	// inputfile << "Dit is een test";
	outputfile.close();
	inputfile.close();

	return (EXIT_SUCCESS);
}

/*

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Not enought arguments" << std::endl;
		return (EXIT_SUCCESS);
	}
	(void)argv;

	std::string from = argv[2];
	std::string to = argv[3];
	std::ifstream inputfile(argv[1]);
	std::string	filename(argv[1]);
	filename += ".replace";
	std::ofstream outputfile(filename.c_str());
	std::string tp;
	size_t start_pos;
	int	i = 0;
    while(std::getline(inputfile, tp)){
		start_pos = 0;
		while((start_pos = tp.find(from, start_pos)) != std::string::npos) {
			tp.replace(start_pos, from.length(), to);
			start_pos += to.length();
		}
        std::cout << i << ": " << tp << std::endl;
		outputfile << tp << std::endl;
		i++;
    }
	
	// inputfile << "Dit is een test";
	outputfile.close();
	inputfile.close();

	return (EXIT_SUCCESS);
}

*/
