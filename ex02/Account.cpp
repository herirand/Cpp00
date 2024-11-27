/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:37:03 by herirand          #+#    #+#             */
/*   Updated: 2024/11/27 15:24:51 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
using namespace std;

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
// this->_nbAccounts = 0;
// this->_totalAmount = 0;
// this->_totalNbDeposits = 0;
// this->_totalNbWithdrawals = 0;
Account::Account(void)
{
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	// // this->_nbAccounts = 0;
	// // this->_totalAmount = 0;
	this->_accountIndex = 0;
	// // this->_totalNbDeposits = 0;
	// // this->_totalNbWithdrawals = 0;
	return ;
}

Account::Account (int initial_deposit)
{
	static int	index = 0;

	this->_nbAccounts = initial_deposit;
	cout << "index:" << _accountIndex << ";amount:" << _nbAccounts << ";created" << endl; 
	_accountIndex = index;
	index ++;
}

Account::~Account(void)
{
	cout << "index:" << _accountIndex << ";amount:" << _nbAccounts << ";closed" << endl; 
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
	this->_totalAmount += deposit;
	this->_totalNbDeposits = _nbDeposits;
	this->_nbDeposits += 1;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _totalAmount)
	{
		//cout << "refused";
		return (false);
	}
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals = _nbWithdrawals;
	return (true);
}

int	Account::checkAmount(void)const
{
	cout << "index:8;" << "total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawal:" << _totalNbWithdrawals << endl;	
	return (1);
}

void	Account::displayAccountsInfos( void )
{
	int	index = 8;
	int	nbaccoun = getNbAccounts();
	int	nbdepos = getNbDeposits();
	int	nbwith = getNbWithdrawals();

	cout << "index:" << index <<";amount:" << nbaccoun << ";deposits:" << nbdepos << ";withdrawal:" << nbwith << endl;	

}
void	Account::displayStatus(void)const
{

	cout << "index:" << _accountIndex <<";amount:" << _nbAccounts << ";deposits:" << _nbDeposits << ";withdrawal:" << _nbWithdrawals << endl;	

}
