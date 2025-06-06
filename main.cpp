#include "BankSystem.h"

int main() {
    BankSystem bank;

    // Adding accounts
    bank.addAccount("Alice Smith", 1001, 500.0);
    bank.addAccount("John Doe", 1002, 1000.0);

    // Display all accounts
    bank.displayAllAccounts();

    // Depositing and withdrawing money
    bank.findAccount(1001)->deposit(200);
    bank.findAccount(1002)->withdraw(150);

    // Transferring funds
    bank.transferFunds(1002, 1001, 300);

    // Display accounts after transactions
    bank.displayAllAccounts();

    return 0;
}  


// int main() {
//     // BankSystem bank_system;
//     // bank_system.addAccount("Sender", 1001, 5000);
//     // bank_system.addAccount("Receiver", 1002, 100);
//     // bank_system.displayAllAccounts();
//     // bank_system.findAccount(1003);
//     // BankAccount* found = bank_system.findAccount(1002);
//     // if (!found) {
//     //     std::cout << "the account is" << std::endl; 
//     //     found->display();
//     // }
//     // bank_system.transferFunds(1002, 1002, 5002);
//     // bank_system.transferFunds(1002, 1001, 500);
//     // bank_system.transferFunds(1001, 1002, 5000);
//     // bank_system.displayAllAccounts();

    
//     return 0;
// }
