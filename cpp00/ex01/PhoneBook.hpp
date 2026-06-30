/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:36:29 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/30 17:44:30 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define CONTACT_SIZE 8
#define CHAR_WIDTH 10
#include "Contact.hpp"


class PhoneBook {
public:
	PhoneBook();
	void add();
	void search();

private:
	Contact contacts_[CONTACT_SIZE];
	size_t	contact_idx_;
	size_t	contact_count_;
};

#endif