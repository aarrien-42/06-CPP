/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:27:08 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/15 16:36:49 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	Harl		H;
	int			i;
	std::string	level;

	if (ac != 2)
		return 0;
	level = av[1];
	i = H.getIndex(level);
	H.selectOut(i);
	return 0;
}