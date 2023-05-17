/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:09:48 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/16 15:39:50 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& obj );
		~FragTrap();

		FragTrap& operator=( const FragTrap& obj );

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif