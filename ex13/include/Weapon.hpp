/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:53 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {

public:

	Weapon();
	Weapon( std::string type );
	~Weapon();

	const std::string&	getType() const;
	void				setType( std::string type );

private:

	std::string _type;
};

#endif // WEAPON_HPP