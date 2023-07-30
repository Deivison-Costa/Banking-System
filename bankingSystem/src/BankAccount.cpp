#include "BankAccount.h"

BankAccount::BankAccount(const std::string& accountNumber) : accountNumber(accountNumber), balance(0.0) {}

BankAccount::~BankAccount() {}

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount > balance) {
        throw std::runtime_error("Insufficient balance!");
    }
    balance -= amount;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::printBalance() const {
    std::cout << "Account balance for " << accountNumber << ": $" << balance << std::endl;
}

std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}
