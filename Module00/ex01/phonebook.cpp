/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:49:55 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/20 15:54:22 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
/*		APRATADO PHONEBOOK		*/


/*		APARTADO DE CREACIÓN DEL CONTACTO	*/

void	Contact::setValue(std::string full_name, std::string scnd_name, std::string nickname
		, std::string ph_number, std::string dark_secret)
{
	this->_fullname = full_name;
	this->_scndname = scnd_name;
	this->_nickname = nickname;
	this->_phnumber = ph_number;
	this->_dsecret = dark_secret;
}

std::string	Contact::getFullname(size_t size) const{
	if (this->_fullname.length() < size){
		std::string full_name = this->_fullname.substr(0, size - 1);
		full_name.push_back('.');
		return full_name;
	}
	return (this->_fullname);
}

std::string	Contact::getScndname(size_t size) const{
	if (this->_scndname.length() < size){
		std::string scnd_name = this->_scndname.substr(0, size - 1);
		scnd_name.push_back('.');
		return (scnd_name);
	}
	return (this->_scndname);
}

std::string	Contact::getNickname(size_t size) const{
	if (this->_nickname.length() > size){
		std::string nickname = this->_nickname.substr(0, size -1);
		nickname.push_back('.');
		return (nickname);
	}
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(size_t size) const{
	if (this->_phnumber.length() > size){
		std::string ph_number =  this->_phnumber.substr(0, size - 1);
		ph_number.push_back('.');
		return (ph_number);
	}
	return (this->_phnumber);
}

std::string Contact::getDarkestSecret(size_t size) const{
	if (this->_dsecret.length() > size){
		std::string dark_secret = _dsecret.substr(0, size - 1);
		dark_secret.push_back('.');
		return (dark_secret);
	}
	return (this->_dsecret);
}

void	Contact::ft_showInfo(void){
	std::cout << "\tFirst Name:\t" << this->_fullname << std::endl;
	std::cout << "\tSecond Name:\t" << this->_scndname << std::endl;
	std::cout << "\tNickname:\t" << this->_nickname << std::endl;
	std::cout << "\tPhoneNumber:\t" << this->_phnumber << std::endl;
	std::cout << "\tDarkest Secret\t" << this->_dsecret << std::endl;
}

/*		FUNCION MAIN PROGRAMA E INSTANCIADOR	*/
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