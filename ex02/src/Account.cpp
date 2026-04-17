/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 10:32:42 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/16 13:20:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	Account::_totalAmount += _amount;
	Account::_nbAccounts += 1;

	_displayTimestamp();
	Account::checkAmount();
	std::cout << "created\n";
};

Account::~Account( void )
{
	_displayTimestamp();
	checkAmount();
	std::cout << "closed\n";
};

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
};

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
};

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
};

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
};

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::_nbAccounts << ";"
		<< "total:" << Account::_totalAmount << ";"
		<< "deposits:" << Account::_totalNbDeposits << ";"
		<< "withdrawals:" << Account::_totalNbWithdrawals << "\n";
};

void	Account::makeDeposit( int deposit )
{
	if (deposit)
	{
		_displayTimestamp();
		std::cout
			<< "p_amount:" << _amount << ";"
			<< "deposit:" << deposit << ";";
		_amount += deposit;
		Account::_totalAmount += deposit;
		_nbDeposits += 1;
		Account::_totalNbDeposits += 1;
		std::cout
			<< "amount:" << _amount << ";"
			<< "nb_deposits:" << _nbDeposits << "\n";
	}
};

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "wihdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	std::cout
		<< withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
};

int		Account::checkAmount( void ) const
{
	std::cout
		<< "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";";
	return (_amount);
};

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	checkAmount();
	std::cout
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << "\n";
};

void	Account::_displayTimestamp( void )
{
    std::time_t rawtime = std::time(0);
    struct tm *timeinfo = std::gmtime(&rawtime);
    char buffer[20];
    
    std::strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}
