/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:37:08 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/30 17:37:23 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <ostream>

class Contact {
public:
	Contact();
	Contact(const std::string& first_name
		,	const std::string& last_name
        ,   const std::string& nickname
		,	const std::string& phone_number
        ,   const std::string& darkest_secret
		);
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
	
private:
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string darkest_secret_;
};

std::ostream& operator<<(std::ostream& os, const Contact& c);

#endif