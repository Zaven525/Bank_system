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
    //std::string get_accountHolder;
    int get_accountNumber();
    //double get_balance;
private:
    std::string _accountHolder;  
    int _accountNumber;  
    double _balance;  
};