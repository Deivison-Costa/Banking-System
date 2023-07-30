#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "BankingSystem.h"

int main() {
    BankingSystem bankingSystem;

    bool exitMenu = false;

    while (!exitMenu) {
        std::cout << "----- Menu -----" << std::endl
            << "1. Create Account" << std::endl
            << "2. Deposit" << std::endl
            << "3. Withdraw" << std::endl
            << "4. Check Balance" << std::endl
            << "5. Exit" << std::endl
            << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter account number: ";
                std::string accountNumber;
                std::cin >> accountNumber;

                std::cout << "Select account type:" << std::endl
                    << "1. Checking Account" << std::endl
                    << "2. Savings Account" << std::endl
                    << "Enter your choice: ";

                int accountTypeChoice;
                std::cin >> accountTypeChoice;

                try {
                    if (accountTypeChoice == 1) {
                        bankingSystem.createAccount<CheckingAccount>(accountNumber);
                        std::cout << "Checking Account created successfully!" << std::endl;
                    } else if (accountTypeChoice == 2) {
                        bankingSystem.createAccount<SavingsAccount>(accountNumber);
                        std::cout << "Savings Account created successfully!" << std::endl;
                    } else {
                        std::cout << "Invalid account type choice." << std::endl;
                    }
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 2: {
                std::cout << "Enter account number: ";
                std::string accountNumber;
                std::cin >> accountNumber;

                try {
                    BankAccount& account = bankingSystem.findAccount(accountNumber);
                    double amount;
                    std::cout << "Enter amount to deposit: ";
                    std::cin >> amount;
                    account.deposit(amount);
                    std::cout << "Deposit successful!" << std::endl;
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 3: {
                std::cout << "Enter account number: ";
                std::string accountNumber;
                std::cin >> accountNumber;

                try {
                    BankAccount& account = bankingSystem.findAccount(accountNumber);
                    double amount;
                    std::cout << "Enter amount to withdraw: ";
                    std::cin >> amount;
                    account.withdraw(amount);
                    std::cout << "Withdrawal successful!" << std::endl;
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 4: {
                std::cout << "Enter account number: ";
                std::string accountNumber;
                std::cin >> accountNumber;

                try {
                    BankAccount& account = bankingSystem.findAccount(accountNumber);
                    account.printBalance();
                } catch (const std::exception& e) {
                    std::cout << "Error: " << e.what() << std::endl;
                }
                break;
            }
            case 5:
                exitMenu = true;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
        std::cout << std::endl;
    }

    return 0;
}
