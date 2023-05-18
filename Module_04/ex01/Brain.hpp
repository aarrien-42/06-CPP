/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:15:59 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:40:51 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain( const Brain& obj );
		~Brain();

		Brain& operator=( const Brain& obj );

		void showIdeas() const;
		void setIdea( const int index, const std::string idea );
		std::string getIdea( const int index ) const;
};

#endif