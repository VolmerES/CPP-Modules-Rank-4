/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/13 17:56:30 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	PhoneBook{
public:
	char array[8];
};

class	Contact{
public:
	int number;
	std::string name; 
};