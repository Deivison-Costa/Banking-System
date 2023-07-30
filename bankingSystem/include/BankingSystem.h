#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H

#include "BankAccount.h"
#include <vector>

class BankingSystem {
private:
    std::vector<BankAccount*> accounts;
public:
    ~BankingSystem();
    template <typename T>
    T& createAccount(const std::string& accountNumber) {
        T* newAccount = new T(accountNumber);
        accounts.push_back(newAccount);
        return *newAccount;
    }
    BankAccount& findAccount(const std::string& accountNumber);
};

#endif // BANKINGSYSTEM_H
