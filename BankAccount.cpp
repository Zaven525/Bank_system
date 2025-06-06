#include "BankAccount.h"

BankAccount::BankAccount() : _accountHolder("Unknown"), _accountNumber(0), _balance(0) {}
BankAccount::BankAccount(std::string accountHolder, int accountNumber, double balance) : _accountHolder(accountHolder), _accountNumber(accountNumber), _balance(balance) {}
BankAccount::BankAccount(const BankAccount& other)
    : _accountHolder(other._accountHolder),
      _accountNumber(other._accountNumber),
      _balance(other._balance) {}
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

//getters
std::string BankAccount::AccountHolder() {
    return _accountHolder;
}

int BankAccount::AccountNumber() {
    return _accountNumber;
}

double BankAccount::Balance() {
    return _balance;
}

//setters

void BankAccount::AccountHolder(std::string accountHolder) {
    _accountHolder = accountHolder;
}

void BankAccount::AccountNumber(int accountNumber) {
    _accountNumber = accountNumber;
}

void BankAccount::Balance(double balance) {
    _balance = balance;
}