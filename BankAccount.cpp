#include "BankAccount.h"

BankAccount::BankAccount() : _accountHolder("Unknown"), _accountNumber(0), _balance(0) {}
BankAccount::BankAccount(std::string accountHolder, int accountNumber, double balance) : _accountHolder(accountHolder), _accountNumber(accountNumber), _balance(balance) {}
BankAccount::BankAccount(const BankAccount& other) {}
BankAccount::~BankAccount() {}

void BankAccount::deposit(double amount) {
    if (amount < 0) {
        std::cout << "U can't deposite negative numbers" << std::endl;
        return;
    }
    _balance += amount;
};

void BankAccount::display() {
    std::cout << "Account holder: " << _accountHolder << std::endl;
    std::cout << "Account number: " << _accountNumber << std::endl;
    std::cout << "Balance:  " << _balance << std::endl;
}

bool BankAccount::withdraw(double amount) {
    if (_balance < amount) {
        std::cout << "Error" << std::endl;
        return false;
    }

    _balance -= amount;
    return true;
}

int BankAccount::get_accountNumber() {
    return _accountNumber;
}



