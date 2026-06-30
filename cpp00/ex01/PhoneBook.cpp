/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:49 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/30 18:13:29 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(){
	contact_idx_ = -1;
	contact_count_ = 0;
}

static std::string input_arg(const std::string label)
{
	std::string ret;

	std::cout << label;
	while (std::cin >> ret){
		if (ret == "") {
			std::cout << "ERROR: EMPTY STRING IS NOT ALLOWED" << std::endl;
			continue;
		}
		break ;
	}
	return ret;
}

void PhoneBook::add(){
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "새로운 연락처 등록:" << std::endl;
	first_name = input_arg("first_name: ");
	last_name = input_arg("last_name:");
	nickname = input_arg("nickname: ");
	phone_number = input_arg("phone_number: ");
	darkest_secret = input_arg("darkest_secret: ");
	contacts_[++contact_idx_ % CONTACT_SIZE] = Contact(first_name
									, last_name
									, nickname
									, phone_number
									, darkest_secret);
	contact_count_++;
	if (contact_count_ > CONTACT_SIZE)
		contact_count_ = CONTACT_SIZE;
}

static std::string trunc(std::string const& str, const size_t& width){
	if (str.size() < width - 1)
		return str;
	return (str.substr(0, width - 1) + ".");
}

void PhoneBook::search(){
	std::cout << "               << PhoneBook >>" << std::endl;
	std::cout << std::setw(CHAR_WIDTH) << std::right << "index"<< "|"
				<< std::setw(CHAR_WIDTH) << std::right << "first_name" << "|"
				<< std::setw(CHAR_WIDTH) << std::right << "last_name" << "|"
				<< std::setw(CHAR_WIDTH) << std::right << "nickname" << std::endl;
	for (size_t i = 0; i < contact_count_; i++){
		size_t idx = (contact_idx_ + 1 + i) % contact_count_;
		std::cout << std::setw(CHAR_WIDTH) << std::right << i + 1 << "|"
				  << std::setw(CHAR_WIDTH) << std::right << trunc(contacts_[idx].get_first_name(), CHAR_WIDTH) << "|"
				  << std::setw(CHAR_WIDTH) << std::right << trunc(contacts_[idx].get_last_name(), CHAR_WIDTH) << "|"
				  << std::setw(CHAR_WIDTH) << std::right << trunc(contacts_[idx].get_nickname(), CHAR_WIDTH) << std::endl;
	}
	
	std::cout << "\n조회하고 싶은 인텍스를 입력하세요...\n";
	size_t	idx;
	while (std::cin >> idx){
		idx--;
		if (idx < contact_count_) break;
		std::cout << "ERROR: 입력 범위 초과" << std::endl;
	}
	std::cout << contacts_[(contact_idx_ + 1 + idx) % contact_count_];
}
