/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:46 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/15 16:14:15 by aarrien-         ###   ########.fr       */
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