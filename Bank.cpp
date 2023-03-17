/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Project 3 Task 2
*/

#include <iostream>
#include <string>
#include "Bank.hpp"

Bank::Bank()
{
	num_acc=0;
}

std::string Bank::createAccount(std::string fn, std::string ln, std::string pin)
{
	std::string accNum;
	Account temp(fn,ln,pin);
	if(num_acc < 200)
	{
		arr_acc[num_acc]=temp;
		num_acc++;
		accNum=temp.getAccountNumber();
		return accNum;
	}
	return "-1";
}

bool Bank::removeAccount(std::string acc)
{
	Account temp;
	for(int i=0;i<num_acc;i++)
	{
		if(acc==arr_acc[i].getAccountNumber())
		{
			arr_acc[i]=temp;
			return true;
		}
	}
	return false;
}

bool Bank::withdraw(int amount,std::string acc, std::string pin)
{
	for(int i=0;i<num_acc;i++)
	{
		if(acc==arr_acc[i].getAccountNumber() && pin==arr_acc[i].getPin()) 
		{
			if(arr_acc[i].transaction(-amount))
			{
				return true;
			}
		}
	}
	return false;
}

bool Bank::deposit(int amount, std::string acc, std::string pin)
{
	for(int i=0;i<num_acc;i++)
	{
		if(acc==arr_acc[i].getAccountNumber() && pin==arr_acc[i].getPin())
		{
			if(arr_acc[i].transaction(amount))
			{
				return true;
			}
		}
	}
	return false;
}

int Bank::getAccountBalance(std::string acc, std::string pin)
{
	for(int i=0;i<num_acc;i++)
	{
		if(acc==arr_acc[i].getAccountNumber() && pin==arr_acc[i].getPin()) 
		{
			return arr_acc[i].getBalance();
		}
	}
	return -1;
}


