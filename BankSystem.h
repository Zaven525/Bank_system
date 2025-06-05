#include "BankAccount.h"
#include <vector>

class BankSystem {
public:
    BankSystem();
    BankSystem(size_t);
    BankSystem(const BankSystem&);
    ~BankSystem();
    void addAccount(const std::string&, int, double);
    BankAccount* findAccount(int accountNumber);
    void transferFunds(int senderAcc, int receiverAcc, double amount);
    void displayAllAccounts();
private:
    std::vector<BankAccount> _account;
};