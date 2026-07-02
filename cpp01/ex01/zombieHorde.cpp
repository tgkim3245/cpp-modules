/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:51:40 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 15:16:29 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombies = new Zombie[N];
	
	for(int i = 0 ; i<N; i++){
		zombies->set_name(name);
		std::cout << i << " 번째 좀비 이름이 <" << name<<">으로 변경 되었습니다."<<std::endl;
	}
	return zombies;
}