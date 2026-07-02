/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:15:23 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 17:17:11 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);

        bob.attack();

        club.setType("some other type of club");

        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");

        jim.setWeapon(club);

        jim.attack();

        club.setType("some other type of club");

        jim.attack();
    }

    return 0;
}