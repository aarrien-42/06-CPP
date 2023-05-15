/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:46 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 10:08:53 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* ptr;
	int N = 8;

	ptr = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		ptr[i].announce();
	delete[] ptr;
	return 0;
}