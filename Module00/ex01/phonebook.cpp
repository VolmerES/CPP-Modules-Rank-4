/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/14 15:02:29 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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