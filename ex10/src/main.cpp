/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:28:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/07 21:43:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
	Zombie* heap_zombie = newZombie("Heap Zombie");

	randomChump("Stack Zombie");
	heap_zombie->announce();
	delete heap_zombie;
}
