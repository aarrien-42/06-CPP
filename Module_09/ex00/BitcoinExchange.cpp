/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:46:40 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/17 19:16:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*-CONSTRUCTORES-*/

BitcoinExchange::BitcoinExchange() : _minValue(0), _maxValue(1000) {
	_dataBase = saveData("data.csv");
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
	_dataBase = obj.getData();
	return *this;
}

/*-MÉTODOS-*/

int BitcoinExchange::getMinValue() const { return _minValue; }

int BitcoinExchange::getMaxValue() const { return _maxValue; }

std::map<std::string, float> BitcoinExchange::getData() const { return _dataBase; }

void BitcoinExchange::showDataBase() const {
	for (std::map<std::string, float>::const_iterator it = _dataBase.begin(); it != _dataBase.end(); it++) {
		std::cout << " - " << it->first << " ==> " << it->second << "\n";
	}
}

void BitcoinExchange::processInput( const char *inputFile ) const {
	std::ifstream input(inputFile);
	if (input) {
		std::string line;
		std::getline(input, line);
		while (std::getline(input, line)) {
			size_t div = line.find_first_of(" |");
			std::string date = line.substr(0, div);
			float value = std::strtod(line.substr(line.find('|') + 1).c_str(), NULL);
			if (!validDate(date)) {
				std::cerr << "Error: bad input => " << date << "\n";
			} else if (line.find('|') == std::string::npos) {
				std::cerr << "Error: value not found.\n";
			} else if (value > 1000) {
				std::cerr << "Error: too large a number.\n";
			} else if (value < 0) {
				std::cerr << "Error: not a positive number.\n";
			} else {
				std::map<std::string, float>::const_iterator it = _dataBase.upper_bound(date);
				if (it->first.compare(date) != 0)
					--it;
				std::cout << date << " => " << value << " = " << it->second*value << "\n";
			}
		}
	} else {
		std::cerr << "Error: could not open the input file\n";
	}
}

/*-FUNCIONES-*/

std::map<std::string, float> BitcoinExchange::saveData( const char *fileName ) {
	std::map<std::string, float> data;
	std::ifstream file(fileName);
	if (file) {
		std::string line;
		std::getline(file, line);
		while (std::getline(file, line)) {
			size_t div = line.find(",");
			std::string date = line.substr(0, div);
			float rate = std::strtod(line.substr(div + 1).c_str(), NULL);
			data[date] = rate;
		}
	} else {
		std::cerr << "Error: could not open the data base file\n";
	}
	return data;
}

bool validDate( const std::string date ) {
	int count = 0;
	for (size_t i = 0; date[i]; i++) {
		if (!std::isdigit(date[i]) && date[i] != '-')
			return false;
		if (date[i] == '-')
			count++;
	}
	if (count != 2)
		return false;
	size_t div1 = date.find('-', 0);
	size_t div2 = date.find('-', div1 + 1);
	int year = std::atof(date.substr(0, div1).c_str());
	int month = std::atof(date.substr(div1 + 1, div2 - div1 - 1).c_str());
	int day = std::atof(date.substr(div2 + 1).c_str());
	if (year > 2023 || year < 0 || month < 0 || month > 12 || day < 0 || day > 31)
		return false;
	return true;
}
