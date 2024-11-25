/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:17 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/25 15:50:42 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


/*			WEAPON CLASS			*/
const std::string&	Weapon::getType() const{
	const std::string& typeREF = this->_type;
	return typeREF;
}

void	Weapon::setType(std::string param){
	this->_type = param;
}

/*			HUMAN B CLASS			*/

void	HumanB::attack(void) const{
	std::cout << this->_nameB << ": attacks with their " << this->_weaponB.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon){
	this->_weaponB = Weapon;
}


/*			HUMAN A CLASS			*/

void	HumanA::setWeapon(Weapon& Weapon){
	this->_weaponA = Weapon;
}

void	HumanA::attack(void) const{
	if ()
	std::cout << this->_nameA << ": attacks with their " << this->_weaponA.getType(); << std::endl;
	else 
		//no weapon
}

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
return 0;
}