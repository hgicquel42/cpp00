/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:22:50 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/14 17:33:59 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	std::string s;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		s = (std::string) argv[i];
		for (int j = 0; j < s.length(); j++)
			std::cout << (char) std::toupper(s[j]);
	}
	std::cout << std::endl;
	return (0);
}