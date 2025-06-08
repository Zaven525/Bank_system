#include <iostream>

class BankAccount {
public:
    BankAccount();
    BankAccount(const std::string&, int, double);
    BankAccount(const BankAccount&);
    ~BankAccount();
    void deposit(double);
    void display();
    bool withdraw(double);

    //getters
    const std::string& AccountHolder();
    int AccountNumber();
    double Balance();

    //seters
    void AccountHolder(const std::string&);
    void AccountNumber(int);
    void Balance(double);
private:
    std::string _accountHolder;  
    int _accountNumber;  
    double _balance;  
};