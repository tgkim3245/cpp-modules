/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:32:28 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 15:24:45 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(){
	std::cout << "생산할 좀비 수를 입력하세요...";
	int N;
	std::cin >> N;
	
	std::cout << "좀비 이름을 입력하세요...";
	std::string name;
	std::cin >> name;

	Zombie *zombies = zombieHorde(N, name);
	for(int i = 0; i<N; i++)
		zombies->announce();
		
	delete[] zombies;
	zombies = nullptr;
	return (0);
}