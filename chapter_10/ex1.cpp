#include <iostream>
#include "ex1.h"

void BankAccount::show() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Account: " << accoount << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

void BankAccount::deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Deposit amount can't be negative. Transaction is aborted.\n";
    }
    else
    {
        balance += amount;
    }
}

void BankAccount::withdraw(double amount)
{
    if (amount < 0)
    {
        std::cout << "Withdrawal amount can't be negative. Transaction is aborted.\n";
    }
    else if (amount > balance)
    {
        std::cout << "You can't withdraw more than your balance! Transaction is aborted.\n";
    }
    else
    {
        balance -= amount;
    }
}

BankAccount::BankAccount()
{
    name = "no name";
    accoount = "00000000";
    balance = 0.0;
}
