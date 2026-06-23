/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:39:27 by taegokim          #+#    #+#             */
/*   Updated: 2026/06/23 17:33:05 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char upperChar(char c){
	if ('a' <= c && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; i < argc; i++){
		for (int j = 0; argv[i][j] != '\0'; j++){
			std::cout << upperChar(argv[i][j]);
		}
	}
	std::cout << std::endl;
}