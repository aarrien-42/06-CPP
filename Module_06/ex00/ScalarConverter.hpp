/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:24:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 13:57:19 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& obj );

		ScalarConverter& operator=( const ScalarConverter& obj );
	public:
		~ScalarConverter();
		static bool convert(std::string str, char& c, int& i, float& f, double& d);
};

#endif