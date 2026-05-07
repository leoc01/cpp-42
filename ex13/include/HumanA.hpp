/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:59 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:50:00 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA();

	void	attack( void ) const;

private:

	std::string	_name;
	Weapon&		_weapon;

};

#endif // HUMANA_HPP
			