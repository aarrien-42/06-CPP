/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:08:54 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:52:33 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _brain;
	public:
		Cat();
		Cat( const Cat& obj );
		~Cat();

		Cat& operator=( const Cat& obj );

		void makeSound() const;
		void showInfo() const;
		void setIdea( const int index, const std::string idea );
		std::string getIdea( const int index ) const;
};

#endif