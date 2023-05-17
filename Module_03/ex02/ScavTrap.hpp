/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:15:54 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/16 15:40:35 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& obj );
		~ScavTrap();

		ScavTrap& operator=( const ScavTrap& obj );

		void attack(const std::string& target);
		void guardGate() const;
};

#endif