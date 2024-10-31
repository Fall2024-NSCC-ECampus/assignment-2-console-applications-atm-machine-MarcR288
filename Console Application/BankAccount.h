//
// Created by Marc_ on 2024-10-22.
//

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


#include<iostream>
#include <limits>
#include<string>

using namespace std;

class BankAccount {
private:
    string userId;
    string password;
    double balance;;

public:
    //Default Constructor
    BankAccount() : balance(0.0) {}

    BankAccount(const string& id, const string& pwd) : userId(id), password(pwd), balance(0.0) {}

    double getBalance() {return balance;}



    //Function Declarations
    BankAccount createBankAccount();
    void printIntroMenu();
    void printMainMenu();
    bool authorizelogin();
    void deposit();
    void withdraw();
    void printBalance();
    double roundToTwoDecimalPlaces(double amount);
};
#endif //BANKACCOUNT_H