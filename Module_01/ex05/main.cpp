/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:27:08 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 11:53:30 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl H;
	H.complain("DEBUG");
	H.complain("INFO");
	H.complain("WARNING");
	H.complain("ERROR");
	H.complain("OTHER");
	return 0;
}