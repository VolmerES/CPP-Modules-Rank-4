/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelorme <jdelorme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:09 by jdelorme          #+#    #+#             */
/*   Updated: 2024/11/25 15:52:11 by jdelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*			WEAPON CLASS			*/

class	Weapon{
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon(void);
		
		const std::string&	getType() const;
		void				setType(std::string param);
	
};

/*			HUMAN A CLASS			*/

class	HumanA{
	private:
		std::string	_nameA;
		Weapon*	_weaponA;
		
	public:
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
		HumanB(std::string name, Weapon& Weapon);
		~HumanB(void);

		void	setWeapon(Weapon& Weapon);
		void	attack(void) const;
};