/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Project 3 Task 1

*/

#include <iostream>
#include <string>
#include "Account.hpp"

	std::string Account::generateAccountNumber()
	{
		std::string an_str = "";
                for(int i{0}; i < 8 ; i++)
		{
			int temp = rand() % 10;
			an_str += std::to_string(temp);
		}
		return an_str;
        }

	Account::Account() {
		first_name = "anonymous";
		last_name = "anonymous";
		pin_num = "0000";
		account_num = generateAccountNumber();
		bal = 0;
	}

	Account::Account(std::string f, std::string l, std::string p) {
		first_name = f;
		last_name = l;
		if(p.length()==4)
		{
			pin_num = p;
		} else {
			pin_num = "0000";
		}
		account_num = generateAccountNumber();
		bal = 0;
	}
	void Account::setFirstName(std::string fn)
	{
		first_name = fn;
	}

	void Account::setLastName(std::string ln)
	{
		last_name = ln;
	}

	bool Account::setPin(std::string pin)
	{
		if(pin.length()==4)
		{
			pin_num = pin;
			return true;
		}
		return false;
	}

	std::string Account::getFirstName()
	{
		return first_name;
	}
	
	std::string Account::getLastName()
	{
		return last_name;
	}

	std::string Account::getAccountNumber()
	{
		return account_num;
	}

	std::string Account::getPin()
	{
		return pin_num;
	}

	int Account::getBalance()
	{
		return bal;
	}

	bool Account::transaction(int amount)
	{
		if((bal+amount)<0)
		{
			return false;
		} else {
			bal+=amount;
			return true;
		}
		return false;

	}

