/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:50:17 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:50:18 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : _name(name) {};

Zombie::~Zombie( void ) {
	std::cout << _name << " was destroyed\n";
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName( std::string name ) {
	_name = name;
}