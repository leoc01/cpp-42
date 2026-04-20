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

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie* zombies = zombieHorde(3, "Roberto");

	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	//zombies[3].announce();
	delete[] zombies;
}
