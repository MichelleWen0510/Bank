/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Prject 3 Task 1
*/
#pragma once
#include <iostream>
#include <string>

class Account
{
private:
	std::string first_name;
	std::string last_name;
	std::string account_num;
	std::string pin_num;
	int bal;
	std::string generateAccountNumber();
public:
	Account();
	Account(std::string f, std::string l, std::string p);
	void setFirstName(std::string fn);
	void setLastName(std::string ln);
	bool setPin(std::string pin);
	std::string getFirstName();
	std::string getLastName();
	std::string getAccountNumber();
	std::string getPin();
	int getBalance();
	bool transaction(int amount);
};

