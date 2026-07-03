/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:12:08 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/03 18:11:33 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "complain DEBUG:\n";
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "complain INFO:\n";
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "complain WARNING:\n";
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "complain ERROR:\n";
	harl.complain("ERROR");
	std::cout << std::endl;

	return (0);
}
