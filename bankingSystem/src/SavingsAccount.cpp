#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string& accountNumber) : BankAccount(accountNumber) {}

void SavingsAccount::deposit(double amount) {
    balance += amount * 1.02;  // Adding a 2% bonus to the savings account balance
}
