#include <iostream>
#include "Account.hpp"
#include "Bank.hpp"

int main()
{
	Bank nb;
	std::string acc1 = nb.createAccount("M","W","1000") ;
	std::string acc2 = nb.createAccount("A","B","2000");
	std::cout << "Deposit 1000 in acc1: " << nb.deposit(1000,acc1,"1000") << std::endl;
	std::cout << "Amount in acc1: " << nb.getAccountBalance(acc1,"1000") << std::endl;
	std::cout << "Withdraw 500 in acc1: " << nb.withdraw(500,acc1,"1000") << std::endl;
	std::cout << "Amount in acc1: " << nb.getAccountBalance(acc1,"1000") << std::endl;
	std::cout << "Withdraw 700 in acc1: " << nb.withdraw(700,acc1,"1000") << std::endl;
	std::cout << "Amount in acc1: " << nb.getAccountBalance(acc1,"1000") << std::endl;
	std::cout << "Deposit 200 in acc1 (w/ dif pin): " << nb.deposit(200,acc1,"2000") << std::endl;
	std::cout << "Amount in acc1: " << nb.getAccountBalance(acc1,"1000") << std::endl;
	std::cout << "Amount in acc1 (w/ dif pin): " << nb.getAccountBalance(acc1,"2000") << std::endl;
	std::cout << "Deposit 1000 in acc2: " << nb.deposit(1000,acc2,"2000") << std::endl;
	std::cout << "Amount in acc2: " << nb.getAccountBalance(acc2,"2000") << std::endl;
	std::cout << "Removed acc2: " << nb.removeAccount(acc2) << std::endl;
	
}
