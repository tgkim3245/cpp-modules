/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:29 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/01 14:39:50 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
	static const int CONTACT_SIZE = 8;
	static const int CHAR_WIDTH = 10;
	PhoneBook();
	void add();
	void search();

private:
	Contact contacts_[CONTACT_SIZE];
	size_t	contact_idx_;
	size_t	contact_count_;
};

#endif