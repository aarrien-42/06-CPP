/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:46:43 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/16 15:00:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

class BitcoinExchange {
	private:
		std::map<std::string, float> _data;
		int _minValue, _maxValue;
	public:
		BitcoinExchange();
		BitcoinExchange( const BitcoinExchange& obj );
		~BitcoinExchange();

		BitcoinExchange& operator=( const BitcoinExchange& obj );

		int getMinValue() const;
		int getMaxValue() const;
		std::map<std::string, float> getData() const;

		static std::map<std::string, float> saveData( const char *fileName );
};

#endif