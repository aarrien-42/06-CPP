/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:58 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 11:54:29 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _memory[4];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource& obj );
		~MateriaSource();

		MateriaSource& operator=( const MateriaSource& obj );

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif