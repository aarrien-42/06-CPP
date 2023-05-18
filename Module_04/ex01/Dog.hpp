/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:11:34 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:53:41 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* _brain;
	public:
		Dog();
		Dog( const Dog& obj );
		~Dog();

		Dog& operator=( const Dog& obj );

		void makeSound() const;
		void showInfo() const;
		void setIdea( const int index, const std::string idea );
		std::string getIdea( const int index ) const;
};

#endif