/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:46:40 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/16 15:07:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*-CONSTRUCTORES-*/

BitcoinExchange::BitcoinExchange() : _minValue(0), _maxValue(1000) {
	_data = saveData("data.csv");
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& obj ) {
	*this = obj;
}

/*-DESTRUCTUOR-*/

BitcoinExchange::~BitcoinExchange() {}

/*-SOBRECARGAS DE OPERADORES-*/

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& obj ) {
	_minValue = obj.getMinValue();
	_maxValue = obj.getMinValue();
	_data = obj.getData();
	return *this;
}

/*-MÉTODOS-*/

int BitcoinExchange::getMinValue() const { return _minValue; }

int BitcoinExchange::getMaxValue() const { return _maxValue; }

std::map<std::string, float> BitcoinExchange::getData() const { return _data; }

/*-FUNCIONES-*/

std::map<std::string, float> BitcoinExchange::saveData( const char *fileName ) {
	std::map<std::string, float> data;
	std::ifstream file(fileName);
	if (file) {
		std::string line;
		while (std::getline(file, line)) {
			size_t div = line.find(",");
			std::string date = line.substr(0, div);
			float rate = std::strtod(line.substr(div + 1).c_str(), NULL);
			data[date] = rate;
		}
	} else {
		std::cout << "Couldn't open the file\n";
	}
	return data;
}

