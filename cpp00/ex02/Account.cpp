/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taegokim <taegokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 14:57:50 by taegokim          #+#    #+#             */
/*   Updated: 2026/07/01 18:24:04 by taegokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ): _accountIndex(0)
						, _amount(0)
						, _nbDeposits(0)
						, _nbWithdrawals(0) {}
Account::Account( int initial_deposit ): _accountIndex(_nbAccounts++)
										,_amount(initial_deposit)
										,_nbDeposits(0)
										,_nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	Account::_totalAmount += initial_deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}
int	Account::getTotalAmount( void ){
	return _totalAmount;
}
int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}
void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << checkAmount() << ";";
	_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";
	if (_amount < withdrawal){
		std::cout << "refused" << std::endl;
		return false;	
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << checkAmount() << ";";
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}
int		Account::checkAmount( void ) const{
	return _amount;
}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
void	Account::_displayTimestamp( void ){
    time_t    now = time(NULL);
    struct tm *t  = localtime(&now);
    char buf[20];
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", t);
    std::cout << "[" << buf << "] ";
}