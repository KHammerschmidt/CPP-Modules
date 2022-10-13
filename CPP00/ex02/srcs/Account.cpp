#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount = _totalAmount + initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::Account(void) { return ; }

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	_nbAccounts--;
	std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts(void) { return (_nbAccounts); }
int	Account::getTotalAmount(void) { return (_totalAmount); }
int Account::getNbDeposits(void) { return (_totalNbDeposits); }
int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	std::cout << ";nb_deposits:" <<  _nbDeposits << std::endl;

	_totalNbDeposits++;
	_totalAmount = _totalAmount + deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	_amount = _amount - withdrawal;
	std::cout << ";amount:" << _amount;
	_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;

	_totalNbWithdrawals++;
	_totalAmount = _totalAmount - withdrawal;
	return (true);
}

int		Account::checkAmount(void) const { return (this->_amount); }

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char		buf[19];
	std::time_t	now = std::time(NULL);
	struct tm	*tstruct = std::localtime(&now);
	if (now == -1)
	{
		std::cout << "[TIME NOT AVAILABLE]" << std::endl;
		return ;
	}
	std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", tstruct);
	std::cout << buf;
}
