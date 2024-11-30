/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:37:03 by herirand          #+#    #+#             */
/*   Updated: 2024/11/30 14:12:17 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
using namespace std;

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {return;}

Account::Account (int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts ++;
	this->_totalAmount += initial_deposit;
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl; 
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "[" \
		<< 2000 + ltm->tm_year \
		<< (ltm->tm_mon < 9 ? "0":"") << 1 + ltm->tm_mon \
		<< (ltm->tm_mday < 10 ? "0":"") << ltm->tm_mday << "_" \
		<< (ltm->tm_hour < 10 ? "0":"") << ltm->tm_hour \
		<< (ltm->tm_min < 10 ? "0":"") << ltm->tm_min \
		<< (ltm->tm_sec < 10 ? "0":"") << ltm->tm_sec \
		<< "]";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	cout << "accounts" << _nbAccounts <<";total:" <<_totalAmount << ";deposits:" \
	 << _totalNbDeposits << ";withdrawal:" << _totalNbWithdrawals << endl;	
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl; 
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << endl;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals:";
	if (withdrawal > _amount)
	{
		cout << "refused" << endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	cout  << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}

void	Account::displayStatus(void)const
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex <<";amount:" << _amount << \
	";deposits:" << _nbDeposits << ";withdrawal:" << _nbWithdrawals << endl;	
}

int	Account::checkAmount(void) const{return 1;}