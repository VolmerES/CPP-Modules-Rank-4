/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:48:36 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/22 13:05:55 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieclass.hpp"

ZombieClass::ZombieClass(std::string name){
	std::cout << name << " CREATED" << std::endl;
}

ZombieClass::~ZombieClass(void){
	std::cout << this->_name << " DESTROY" << std::endl;
}

void	announce(void){
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

ZombieClass* newZombie(std::string name){
	return new ZombieClass(name);
}

void	randomChump(std::string name){
	new	ZombieClass(name);
	announce();
}

int	main()
{
	ZombieClass	*Instance;
	
	newZombie("Escamil");
	randomChump("Pereza");
	return (0);
}