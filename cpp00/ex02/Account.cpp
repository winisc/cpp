/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 03:43:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/19 21:49:15 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}


int Account::checkAmount(void) const
{
    return _totalAmount;
}

bool Account::makeWithdrawal( int withdrawal )
{
    int p_amount;
    
    p_amount = _amount;
    if ( withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal: refused"
            << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals ++;
    _totalNbWithdrawals ++;
    _totalAmount -= withdrawal;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"
        << withdrawal << ";amount:" << _amount << ";nb_deposits:" << ";nb_withdrawals:"
        << _nbWithdrawals << std::endl;
    return true;
}

void Account::makeDeposit( int deposit )
{
    int p_amount;

    p_amount = _amount;
    _amount += deposit;
    _nbDeposits ++;
    _totalNbDeposits ++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"
        << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount <<
        ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;

}

void Account::_displayTimestamp( void )
{
    time_t  time_now;
    tm      *fileds_time;
    char    buffer[80];

    time_now = std::time(NULL);
    fileds_time = std::localtime(&time_now);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", fileds_time);
    std::cout << buffer;
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
