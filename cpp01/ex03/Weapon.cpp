/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:30:54 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 17:13:42 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string _type): type(_type)
{}

void Weapon::setType(std::string _type){
	type = _type;
}

std::string Weapon::getType(){
	return type;
}

