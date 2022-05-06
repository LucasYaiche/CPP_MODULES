#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); //ok
	static int	getTotalAmount( void ); //ok
	static int	getNbDeposits( void ); //ok
	static int	getNbWithdrawals( void ); //ok
	static void	displayAccountsInfos( void ); //ok

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit ); //ok
	bool	makeWithdrawal( int withdrawal ); 
	int		checkAmount( void ) const; //ok
	void	displayStatus( void ) const; //ok


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};

#endif /* __ACCOUNT_H__ */