#include "BankingSystem.h"

BankingSystem::~BankingSystem() {
    for (auto account : accounts) {
        delete account;
    }
}

BankAccount& BankingSystem::findAccount(const std::string& accountNumber) {
    for (auto account : accounts) {
        if (account->getAccountNumber() == accountNumber) {
            return *account;
        }
    }
    throw std::runtime_error("Account not found!");
}
