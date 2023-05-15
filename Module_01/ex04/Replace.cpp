/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:26:29 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/14 17:26:30 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int displayText( std::string filename ) {
	std::fstream file;

	file.open(filename, std::ios::in);
	if (!file) {
		std::cout << "Invalid filename" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(file, line))
		std::cout << line << std::endl;
	file.close();
	return 0;
}

void replaceString( std::string filename, std::string s1, std::string s2 ) {
	std::fstream file;
	std::string line;
	std::size_t found;

	std::ofstream newFile(filename + ".replace");
	file.open(filename, std::ios::in);
	while (std::getline(file, line)) {
		while (1) {
			found = line.find(s1);
			if (found ==std::string::npos)
				break;
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
		newFile << line << std::endl;
	}
	newFile.close();
}
