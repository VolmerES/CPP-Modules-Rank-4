/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:09 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/25 17:34:26 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

/*			WEAPON CLASS			*/

class	Weapon{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		
		std::string&	getType();
		void				setType(std::string param);
	
};

/*			HUMAN A CLASS			*/

class	HumanA //: public Weapon
{
	private:
		std::string	_nameA;
		Weapon*	_weaponA;
		
	public:
		HumanA(void);
		HumanA(std::string name, Weapon& Weapon);
		~HumanA(void);

		void	setWeapon(Weapon& Weapon);
		void	attack(void) const;
	
};

/*			HUMAN B CLASS			*/

class	HumanB{
	private:
		std::string _nameB;
		Weapon* _weaponB;

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon& Weapon);
		void	attack(void) const;
};

#endif