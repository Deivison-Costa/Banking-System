#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>
#include <iostream>
#include <stdexcept>

class BankAccount {
protected:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& accountNumber);
    virtual ~BankAccount();
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    virtual double getBalance() const;
    virtual void printBalance() const;
    std::string getAccountNumber() const;
};

#endif  // BANK_ACCOUNT_H
