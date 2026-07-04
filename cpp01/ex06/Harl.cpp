/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:11:55 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/04 19:35:58 by taegokim         ###   ########.fr       */
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
	int level_idx = LEV_EXPT;
	
	for(int i = 0; i < LEV_COUNT; i++){
		if (level_names[i] == level){
			level_idx = i;
			break;
		}
	}
	switch (level_idx){
		case LEV_DEBUG:		debug();
			/* fallthrough */
		case LEV_INFO:		info();
			/* fallthrough */
		case LEV_WARNING:	warning();
			/* fallthrough */
		case LEV_ERROR: 	error(); 	break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" 
	<< std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn't put enough bacon in my burger! "
	"If you did, I wouldn't be asking for more!\n" 
	<< std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I've been coming for years, whereas you started working here just last month.\n" 
	<< std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" 
	<< std::endl;
}
