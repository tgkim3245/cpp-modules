/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:11:55 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/03 18:00:54 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(){
	f[LEV_DEBUG] = &Harl::debug;
	f[LEV_INFO] = &Harl::info;
	f[LEV_WARNING] = &Harl::warning;
	f[LEV_ERROR] = &Harl::error;

	level_names[LEV_DEBUG] = "DEBUG";
	level_names[LEV_INFO] = "INFO";
	level_names[LEV_WARNING] = "WARNING";
	level_names[LEV_ERROR] = "ERROR";
}

void Harl::complain( std::string level ){
	for ( int i = 0; i < LEV_COUNT; i++ ){
		if ( level == level_names[i] ){
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "[ ONLY DEBUG|INFO|WARNING|ERROR ]" << std::endl;
}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" 
	<< std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn't put enough bacon in my burger! "
	"If you did, I wouldn't be asking for more!" 
	<< std::endl;
}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I've been coming for years, whereas you started working here just last month." 
	<< std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}
