/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tg <tg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:39:27 by taegokim          #+#    #+#             */
/*   Updated: 2026/10/26 18:12:29 by tg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; i < argc; i++){
		for (int j = 0; argv[i][j] != '\0'; j++){
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
}