/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:04:11 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/03 18:04:13 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"
#include <iostream>

int main( int argc, char **argv )
{
	if ( argc != 2 )
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}

	Harl harl;
	harl.complain(argv[1]);

	return (0);
}
