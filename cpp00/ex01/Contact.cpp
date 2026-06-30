/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:37:06 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/30 17:52:14 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(const std::string& first_name, 
				const std::string& last_name,
            	const std::string& nickname, 
				const std::string& phone_number,
            	const std::string& darkest_secret)
				: first_name_(first_name)
				, last_name_(last_name)
				, nickname_(nickname)
				, phone_number_(phone_number)
				, darkest_secret_(darkest_secret)
				{};
				
std::string Contact::get_first_name() const{
	return first_name_;
}
std::string Contact::get_last_name() const{
	return last_name_;
}
std::string Contact::get_nickname() const{
	return nickname_;
}
std::string Contact::get_phone_number() const{
	return phone_number_;
}
std::string Contact::get_darkest_secret() const{
	return darkest_secret_;
}
std::ostream& operator<<(std::ostream& os, const Contact& c) {
    os << "first_name: "      << c.get_first_name()      << std::endl
       << "last_name: "       << c.get_last_name()       << std::endl
       << "nickname: "        << c.get_nickname()        << std::endl
       << "phone_number: "    << c.get_phone_number()    << std::endl
       << "darkest_secret: "  << c.get_darkest_secret()  << std::endl;
    return os;
}