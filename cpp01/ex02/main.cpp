/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:42:42 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/02 15:54:37 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string 	str = "HI THIS IS BRAIN";
	std::string* 	stringPTR = &str;
	std::string&	stringREF = str;
	
	std::cout << "address of str: "<< &str << std::endl;
	std::cout << "address of stringPTR: "<< stringPTR << std::endl;
	std::cout << "address of stringREF: "<< &stringREF << std::endl;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;
}