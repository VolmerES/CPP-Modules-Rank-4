/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:54:32 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/14 15:01:10 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor PhoneBook llamado" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor PhoneBook llamado" << std::endl;
	return;
}

Contact::Contact(void){
	std::cout << "Constructor Contacto llamado" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Destructor Contacto llamado" << std::endl;
}
