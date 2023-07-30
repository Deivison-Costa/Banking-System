#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(const std::string& accountNumber);
    void deposit(double amount) override;
};

#endif // SAVINGSACCOUNT_H
