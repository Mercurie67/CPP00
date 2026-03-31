/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:49:58 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/26 14:34:13 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )  { return _nbAccounts ; } 
int	Account::getTotalAmount( void ) { return _totalAmount ; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits ; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals ; }

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(NULL);
    std::tm* tm_info = std::localtime(&t);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tm_info);
    std::cout << buffer << " ";
}

int		Account::checkAmount( void ) const {
	return _amount;
}
Account::Account( int initial_deposit ) {

	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m"
				<< ";amount:" << "\033[34m" << _amount << "\033[0m" 
				<< ";created\n" ;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << "\033[34m" << getNbAccounts() << "\033[0m"
				<< ";total:" << "\033[34m" << getTotalAmount() << "\033[0m"
				<< ";deposits:" << "\033[34m" << getNbDeposits() << "\033[0m"
				<< ";withdrawals:" << "\033[34m" << getNbWithdrawals() << "\033[0m"
				<< "\n" ;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m" 
				<< ";amount:" << "\033[34m" << checkAmount() << "\033[0m"
				<< ";deposits:" << "\033[34m" << _nbDeposits << "\033[0m"
				<< ";withdrawals:" << "\033[34m" << _nbWithdrawals << "\033[0m"
				<< "\n" ;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m" 
				<< ";p_amount:" << "\033[34m" << checkAmount() << "\033[0m"
				<< ";deposit:" << "\033[34m" << deposit << "\033[0m"
				<< ";amount:"<< "\033[34m" << checkAmount() + deposit << "\033[0m"
				<< ";nb_deposits:" << "\033[34m" << _nbDeposits << "\033[0m"
				<< "\n" ;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
}

bool	Account::makeWithdrawal (int withdrawal) {
	_displayTimestamp();
	if(_amount < withdrawal) {
		std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m"
				<< ";p_amount:" << "\033[34m" << checkAmount() << "\033[0m"
				<< ";withdrawal:refused\n" ;
		return false;
	}
	else {
		_nbWithdrawals++;
		std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m" 
					<< ";p_amount:" << "\033[34m" << checkAmount() << "\033[0m"
					<< ";withdrawal:" << "\033[34m" << withdrawal << "\033[0m"
					<< ";amount:" << "\033[34m" << checkAmount()  - withdrawal << "\033[0m"
					<< ";nb_withdrawals:" << "\033[34m" << _nbWithdrawals << "\033[0m"
					<< "\n" ;
		_totalNbWithdrawals++;
		_amount = _amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
	}
	return true;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout	<< "index:" << "\033[34m" << _accountIndex << "\033[0m" 
				<< ";amount:" << "\033[34m" << checkAmount() << "\033[0m" 
				<< ";closed\n" ;
}
