/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:48:08 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/03 12:09:39 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv){
	if (argc != 4){
		std::cerr << "USAGE: ./program <filename> <s1> <s2>" << std::endl;
		return 1;
	}
		
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string str;
	
	std::ifstream in(filename.c_str());
	if (!in){
		std::cerr << "파일 열기 실패\n";
		return 1;
	}
	
	std::stringstream ss;
	ss << in.rdbuf();
	str = ss.str();
	
	std::size_t	idx;
	while ((idx = str.find(s1)) != std::string::npos){
		str.erase(idx, s1.size());
		str.insert(idx, s2);
	}

	std::ofstream out(std::string(filename + ".replace").c_str());
	out << str;
}