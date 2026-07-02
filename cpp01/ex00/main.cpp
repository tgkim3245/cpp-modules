/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:32:28 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 14:36:50 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(){
	std::cout << "좀비 이름을 입력하세요...";
	
	std::string name;
	std::cin >> name;

	randomChump(name);
	
	return (0);
}