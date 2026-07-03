/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:11:40 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/03 17:50:50 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
public:
	Harl();
	void complain( std::string level );

private:
	enum level_tag {
		LEV_DEBUG,
		LEV_INFO,
		LEV_WARNING,
		LEV_ERROR,
		LEV_COUNT
	};
	void (Harl::*f[LEV_COUNT])(void);
	std::string level_names[LEV_COUNT];

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif // HARL_HPP