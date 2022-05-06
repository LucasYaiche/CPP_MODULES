#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*=================*/ 
/*   Constructor   */
/*=================*/

Account::Account(int initial_deposit)
{
	return ;
}

/*=================*/ 
/*    Destructor   */
/*=================*/

Account::~Account()
{
	return ;
}

/*=================*/ 
/*     Getters     */
/*=================*/

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

/*=================*/ 
/*    Fonctions    */
/*=================*/

void	Account::makeDeposit (int deposit)
{
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return true;
}

int Account::checkAmount() const
{
	return this->_amount;
}

void	Account::displayStatus() const
{
	int i=0;
	i += 1;
}

void Account::_displayTimestamp()
{
	int i=0;
	i += 1;
}

void Account::displayAccountsInfos()
{
}

