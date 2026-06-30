/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:11:39 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/30 17:59:20 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void){
	PhoneBook	phonebook;
	std::string command;
	
	std::cout << "CPP00/EX01 PhoneBook" << std::endl;
	while (true){		
		std::cout << "ADD, SEARCH, EXIT 중 하나를 입력하세요..." << std::endl;
		std::cin >> command;
		if (command == "ADD"){
			phonebook.add();
			std::cout << "ADD가 완료되었습니다." << std::endl;
		}
		else if (command == "SEARCH"){
			phonebook.search();
			std::cout << "SEARCH가 완료되었습니다." << std::endl;
		}
		else if (command == "EXIT"){
			break ;
		}
	}
	return (0);
}
