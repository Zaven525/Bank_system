#include "BankSystem.h"

BankSystem::BankSystem() {}
BankSystem::BankSystem(size_t size) : _account(size){}
BankSystem::~BankSystem(){}

void BankSystem::addAccount(const std::string& name, int accountNumber, double intitialBalance) {
    int n = _account.size();
    for (int i = 0; i < n; i++) {
        if (_account[i].AccountNumber() == accountNumber){
            std::cout << "Account with this number already exists" << std::endl;
            return;
        }
    }
    _account.emplace_back(BankAccount(name, accountNumber, intitialBalance));
}

BankAccount* BankSystem::findAccount(int accountNumber) {
    int n = _account.size();
    for (int i = 0; i < n; i++) {
        if (_account[i].AccountNumber() == accountNumber){
            return &_account[i];
        }
    }
    std::cout << "We dont have that account" << std::endl;
    return nullptr;
}

void BankSystem::transferFunds(int senderAcc, int receiverAcc, double amount){
    BankAccount* sender = findAccount(senderAcc);
    BankAccount* receiver = findAccount(receiverAcc);
    if (!sender || !receiver) {
        return;
    }

    else if(sender == receiver) {
        std::cout << "U cant transfer to ur account" << std::endl;
        return;
    }
    

    if (sender->withdraw(amount)){    
        receiver->deposit(amount);
    }
}

void BankSystem::displayAllAccounts() {
    int n = _account.size();
    for (int i = 0; i < n; i++) {
        _account[i].display();
        std::cout << std::endl;
    }
}