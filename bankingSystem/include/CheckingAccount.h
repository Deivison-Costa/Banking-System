#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(const std::string& accountNumber);
};

#endif // CHECKINGACCOUNT_H
