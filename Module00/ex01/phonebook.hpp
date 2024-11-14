/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:53 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/14 15:13:30 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//CONTACT.HPP
//Necesitamos un constructor de contacto
//Necesitamos un destructor de contacto

//PHONEBOOK.HPP
//Constructor y destructor
//
#include <iostream>
#include <string>

class	PhoneBook{
public:

	PhoneBook(void);
	~PhoneBook(void);
};

class	Contact{
private:
	std::string f_name;
	std::string s_name;
	std::string nickname;
	std::string ph_number;
	std::string d_secret;
public:
	Contact(void);
	~Contact(void);
};