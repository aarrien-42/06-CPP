/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:54:05 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 10:03:53 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
		Animal();
		Animal( const Animal& obj );
	public:
		virtual ~Animal();

		Animal& operator=( const Animal& obj );

		const std::string getType() const;
		virtual void makeSound() const;
};

#endif