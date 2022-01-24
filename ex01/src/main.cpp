/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:00:08 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/24 19:11:59 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void	ft_add(PhoneBook *book)
{
	Contact		contact;
	std::string	line;

	while (std::cout << "First Name\n" && std::getline(std::cin, line) && line.empty())
		continue ;
	contact.firstName = line;

	while (std::cout << "Last Name\n" && std::getline(std::cin, line) && line.empty())
		continue ;
	contact.lastName = line;

	while (std::cout << "Nick Name\n" && std::getline(std::cin, line) && line.empty())
		continue ;
	contact.nickName = line;

	while (std::cout << "Phone Number\n" && std::getline(std::cin, line) && line.empty())
		continue ;
	contact.phoneNumber = line;

	while (std::cout << "Darkest Secret\n" && std::getline(std::cin, line) && line.empty())
		continue ;
	contact.darkestSecret = line;

	book->list[book->index++ % 8] = contact;
}

void	ft_print(std::string s)
{
	int		i;
	bool	ended;

	i = 0;
	ended = false;
	while (i < 10)
	{
		if (!s[i])
			ended = true;
		if (ended)
			std::cout << " ";
		else if (i == 9)
			std::cout << ".";
		else
			std::cout << s[i];
		i++;
	}
}

void	ft_print2(Contact *contact)
{
	std::cout << contact->firstName << "\n";
	std::cout << contact->lastName << "\n";
	std::cout << contact->nickName << "\n";
	std::cout << contact->phoneNumber << "\n";
	std::cout << contact->darkestSecret << "\n";
}

bool	ft_atoi(std::string s, int* r)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
		x = (x * 10) + (s[i++] - '0');
	*r = x;
	if (!s[i])
		return (true);
	return (false);
}

void	ft_search(PhoneBook *book)
{
	int			i;
	std::string	line;
	
	i = 0;
	while (i < 8)
	{
		std::cout << i;
		std::cout << " | ";
		ft_print(book->list[i].firstName);
		std::cout << " | ";
		ft_print(book->list[i].lastName);
		std::cout << " | ";
		ft_print(book->list[i].nickName);
		std::cout << "\n";
		i++;
	}
	while (std::cout << "#" && std::getline(std::cin, line))
	{
		if (ft_atoi(line, &i) && i < 8)
		{
			ft_print2(&book->list[i]);
			break ;
		}
	}
}

int	main()
{
	PhoneBook	book;
	std::string	line;

	book.index = 0;
	while (std::cout << ">" && std::getline(std::cin, line))
	{
		if (line == "ADD")
			ft_add(&book);
		else if (line == "SEARCH")
			ft_search(&book);
		else if (line == "EXIT")
			break ;
	}
	return (0);
}