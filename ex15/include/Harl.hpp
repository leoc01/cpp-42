/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:01 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:02 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <algorithm>

class Harl {

public:

	Harl();
	~Harl();

	void complain( std::string level );


private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif // HARL_HPP