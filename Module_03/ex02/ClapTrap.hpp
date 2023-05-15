/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:59:52 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 12:41:04 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define BLUE 	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define BOLD	"\033[0;1m"
#define WHITE	"\033[0;0m"

#include <iostream>

class ClapTrap {
	protected:
		std::string _name;
		int _hp;
		int _ep;
		int _ad;
		void setAttributes(int hp, int ep, int ad);
	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& obj );
		~ClapTrap();

		ClapTrap& operator=( const ClapTrap& obj );

		void showAttributes() const;
		bool isDead() const;
		bool noEnergy() const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif