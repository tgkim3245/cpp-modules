/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:50:22 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 17:11:30 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon& _weapon): weapon(_weapon)
													, name(_name)
{}

void HumanA::attack(){
	std::cout << name << " attack with their "<< weapon.getType() << std::endl;
}