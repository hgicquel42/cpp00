/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 18:00:08 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/17 13:40:45 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_add(PhoneBook *book)
{
	Contact		contact;
	std::string	line;

	std::cout << "First Name\n";
	std::getline(std::cin, line);
	contact.firstName = line;

	std::cout << "Last Name\n";
	std::getline(std::cin, line);
	contact.lastName = line;

	std::cout << "Nick Name\n";
	std::getline(std::cin, line);
	contact.nickName = line;

	std::cout << "Phone Number\n";
	std::getline(std::cin, line);
	contact.phoneNumber = line;

	std::cout << "Darkest Secret\n";
	std::getline(std::cin, line);
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

void	ft_search(PhoneBook *book)
{
	int			i;
	std::string	line;

	i = 0;
	while (i < 8 && !book->list[i].firstName.empty())
	{
		ft_print(std::to_string(i));
		std::cout << " | ";
		ft_print(book->list[i].firstName);
		std::cout << " | ";
		ft_print(book->list[i].lastName);
		std::cout << " | ";
		ft_print(book->list[i].nickName);
		std::cout << "\n";
		i++;
	}
	std::getline(std::cin, line);
	ft_print2(&book->list[atoi(line.c_str())]);
}

int	main()
{
	PhoneBook	book;
	std::string	line;

	book.index = 0;
	while (true)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
			ft_add(&book);
		else if (line == "SEARCH")
			ft_search(&book);
		else if (line == "EXIT")
			break ;
	}
	return (0);
}