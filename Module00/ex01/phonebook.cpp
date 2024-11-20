/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/20 13:08:32 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setValue(std::string full_name, std::string scnd_name, std::string nickname
		, std::string ph_number, std::string dark_secret)
{
	this->_fullname = full_name;
	this->_scndname = scnd_name;
	this->_nickname = nickname;
	this->_phnumber = ph_number;
	this->_dsecret = dark_secret;
}



int	main()
{
	PhoneBook	PhoneInstance;
	Contact		ContactInstance;
	std::string input;
	bool		signal (true);

	std::cout << "Bienvenido a tu agenda de contactos. Opciones disponibles ADD, SEARCH, EXIT" << std::endl;
	while (signal == true)
	{
		std::cout << "Ingrese una opción:";
		std::cin >> input;
		std::cout << input << std::endl;
		if (input.compare("ADD") == 0)
		{
			std::cout << "AÑADIENDO..." << std::endl;
			//funcion de añadir contacto
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "BUSCANDO..." << std::endl;
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "SALIENDO..." << std::endl;
			signal = false;
		}
		else
			std::cout << "¡OPCIÓN INVALIDA!" << std::endl;
	}
	return (0);	
}