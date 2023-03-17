#pragma once
#include <iostream>
#include <string>
#include "Account.hpp"

class Bank {
private:
	Account arr_acc[200];
	int num_acc;
public:
	Bank();
	std::string createAccount(std::string fn, std::string ln, std::string pin);
	bool removeAccount(std::string acc);
	bool withdraw(int amount, std::string acc, std::string pin);
	bool deposit(int amount, std::string acc, std::string pin);
	int getAccountBalance(std::string acc, std::string pin);
};
