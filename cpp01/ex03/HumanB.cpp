/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:11:41 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 17:20:22 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name): name(_name)
{}

void HumanB::setWeapon(Weapon& _weapon){
	weapon = &_weapon;
}

void HumanB::attack(){
	std::cout << name << " attack with their "<< weapon->getType() << std::endl;
}
