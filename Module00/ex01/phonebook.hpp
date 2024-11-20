/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:53 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/20 13:14:05 by jdelorme         ###   ########.fr       */
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

#define MAX_CONTACTS 8

class	PhoneBook{
public:

	PhoneBook(void);
	~PhoneBook(void);
};

class	Contact{
private:
	std::string _fullname;
	std::string _scndname;
	std::string _nickname;
	std::string _phnumber;
	std::string _dsecret;
public:
	Contact(void);
	~Contact(void);
	/*Función setter atributos privados del contacto*/
	void	setValue(std::string full_name, std::string scnd_name, std::string nickname
		, std::string ph_number, std::string dark_secret);
	/*Funciones getter atributos para el setter sobre el contacto*/
	std::string getFullname(size_t size) const; //		X
	std::string getScndname(size_t size) const; //		X
	std::string getNickname(size_t size) const; //		X
	std::string getPhoneNumber(size_t size) const;//	X
	std::string getDarkestSecret(size_t size) const;//	X
};