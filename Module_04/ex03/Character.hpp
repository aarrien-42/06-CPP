/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:56 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 11:06:54 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define BLUE 	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define BOLD	"\033[0;1m"
#define WHITE	"\033[0;0m"

#include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character();
		Character( const std::string name );
		Character( const Character& obj );
		~Character();

		Character& operator=( const Character& obj );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif