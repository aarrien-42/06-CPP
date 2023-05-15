/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:26:32 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/14 17:28:49 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

int displayText( std::string filename );
void replaceString( std::string filename, std::string s1, std::string s2 );

#endif