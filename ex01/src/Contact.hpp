/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:41:55 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/24 17:36:00 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};