#include "BankAccount.h"

int main() {
    BankAccount bank_account("Zaven", 1001, 5000);
    bank_account.deposit(500);
    bank_account.withdraw(200);
    bank_account.display();

    
    return 0;
}