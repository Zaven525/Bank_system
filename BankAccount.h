#include <iostream>

class BankAccount {
public:
    BankAccount();
    BankAccount(std::string, int, double);
    BankAccount(const BankAccount&);
    ~BankAccount();
    void deposit(double);
    void display();
    bool withdraw(double);

    //getters
    std::string AccountHolder();
    int AccountNumber();
    double Balance();

    //seters
    void AccountHolder(std::string);
    void AccountNumber(int);
    void Balance(double);
private:
    std::string _accountHolder;  
    int _accountNumber;  
    double _balance;  
};