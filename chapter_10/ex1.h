#ifndef EX1_H_
#define EX1_H_

#include <string>

class BankAccount
{
private:
    std::string name;
    std::string accoount;
    double balance;

public:
    BankAccount();
    BankAccount(const std::string &n = "no name", const std::string &a = "00000000", double b = 0.0)
        : name(n), accoount(a), balance(b) {}
    void show() const;
    void deposit(double amount);
    void withdraw(double amount);
};

#endif