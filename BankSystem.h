#include "BankAccount.h"
#include <vector>

class BankSystem {
public:
    BankSystem();
    BankSystem(size_t);
    BankSystem(const BankSystem&);
    ~BankSystem();
    void addAccount(const std::string&, int, double);
    BankAccount* findAccount(int);
    void transferFunds(int, int, double);
    void displayAllAccounts();
private:
    std::vector<BankAccount> _account;
};