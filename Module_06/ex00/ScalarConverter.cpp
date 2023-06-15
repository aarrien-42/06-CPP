/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:24:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/15 11:21:23 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*-CONSTRUCTORES-*/

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter& obj ) { *this = obj; }

/*-DESTRUCTOR-*/

ScalarConverter::~ScalarConverter() {}

/*-SOBRECARGA DE OPERADOR-*/

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& obj ) {
	(void)obj;
	return *this;
}

/*-FUNCIONES AUXILIARES-*/

bool isNumeric(const std::string& str) {
	int i = 0;
	if (str[i] == '-')
		i+=1;
	for (; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool isPseudo(const std::string& str) {
	if (!str.compare("nanf") || \
		!str.compare("-inff") || \
		!str.compare("+inff") || \
		!str.compare("nan") || \
		!str.compare("-inf") || \
		!str.compare("+inf") || \
		!str.compare("inf"))
		return true;
	return false;
}

bool isDecimal(const std::string& str, int len) {
	bool dot = false;
	int i = 0;

	if (str[i] == '-')
		i+=1;
	for (; i < len; i++) {
		if (!std::isdigit(str[i]) && dot)
			return false;
		if (str[i] == '.')
			dot = true;
		if (!std::isdigit(str[i]) && !dot)
			return false;
	}
	if (dot == true)
		return true;
	return false;
}

int checkType(std::string& str) {
	if (str.empty())
		return -1;
	if (isPseudo(str))
		return 0;
	if (str.size() == 1 && !isNumeric(str))
		return 1;
	if (isNumeric(str))
		return 2;
	if (isDecimal(str, str.size() - 1) && str[str.size() - 1] == 'f')
		return 3;
	if (isDecimal(str, str.size()))
		return 4;
	return -1;
}

void printValues(char& c, int& i, float& f, double& d) {
	std::cout << "char: " << ((i >= 32 && i < 127) ? "'" + std::string(1, c) + "'" : "Non displayable") << "\n";
	std::cout << "int: " << i << "\n";
	std::cout << "float: " << f << ((f-i == 0.0f) ? ".0" : "") << "f\n";
	std::cout << "double: " << d << ((d-i == 0.0f) ? ".0" : "") << "\n";
}

void printImpossible(std::string& str) {
	std::cout << "char: " << "impossible" << "\n";
	std::cout << "int: " << "impossible" << "\n";
	std::cout << "float: " << ((str[str.size() - 1] == 'f') ? str : (str + 'f')) << "\n";
	std::cout << "double: " << str << "\n";
}

/*-FUNCION MIEMBRO-*/

bool ScalarConverter::convert(std::string str, char& c, int& i, float& f, double& d) {
	int type = checkType(str);
	switch (type) {
		case 0:
			printImpossible(str);
			return true;
		case 1:
			c = str[0];
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);
			break;
		case 2:
			i = std::atof(str.c_str());
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		case 3:
			f = std::strtod(str.c_str(), NULL);
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		case 4:
			d = std::strtod(str.c_str(), NULL);
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<double>(d);
			break;
		default:
			return false;
	}
	printValues(c, i, f, d);
	return true;
}
