/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:55 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:57 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string name );
	~HumanB();

	void	attack( void ) const;
	void	setWeapon( Weapon& weapon );

private:

	std::string	_name;
	Weapon*		_weapon;

};

#endif // HUMANB_HPP
			