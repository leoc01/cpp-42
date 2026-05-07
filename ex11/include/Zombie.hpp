/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:50:23 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:50:24 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:

    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void    announce( void );
    void    setName( std::string name );

private:

    std::string _name;

};

#endif // ZOMBIE_HPP