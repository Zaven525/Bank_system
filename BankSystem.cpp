#include "BankSystem.h"

BankSystem::BankSystem() {}
BankSystem::BankSystem(size_t size) : _account(size){}
BankSystem::~BankSystem(){}

void BankSystem::addAccount(const std::string& name, int accountNumber, double intitialBalance) {
    _account.push_back(BankAccount(name, accountNumber, intitialBalance));
}

BankAccount* BankSystem::findAccount(int accountNumber) {
    int n = _account.size();
    for (int i = 0; i < n; i++) {
        if (_account[i].get_accountNumber() == accountNumber){
            return &_account[i];
        }
    }
}
