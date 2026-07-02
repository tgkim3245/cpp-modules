/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:51:40 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 14:31:26 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): name_(name)
{
	std::cout << name_<<" 좀비가 생성되었습니다." << std::endl;
}

Zombie::~Zombie(){
	std::cout << name_<<" 좀비가 소멸하였습니다." << std::endl;
}

void Zombie::announce(void){
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}