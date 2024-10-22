//
// Created by Marc_ on 2024-10-22.
//

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


#include<iostream>
#include<string>

using namespace std;

class BankAccount {
private:
    string userId;
    string password;
    double balance;;

public:
    BankAccount() : balance(0.0) {}

    BankAccount(const string& id, const string& pwd) : userId(id), password(pwd), balance(0.0) {}

    BankAccount createBankAccount() {
        cout << "Please enter your username" << endl;
        cin >> userId;
        cout << "Please enter your password" << endl;
        cin >> password;

        cout << "Thank you! Your account has been created!" << endl;
        return BankAccount(userId, password);

    }

    bool authorizelogin(const string& id, const string& pwd) {
        if (id == userId && pwd == password) {
            cout << "******** LOGIN SUCCESS! ********" << endl;
            return true;
        } else {
            cout << "******** LOGIN FAILED! ********" << endl;
            return false;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw successful!" << endl;
            cout <<"Your account balance is: $" << balance << endl;
        } else {
            cout << "Withdraw failed! - Insufficient Funds" << endl;
        }
    };

    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }
};
#endif //BANKACCOUNT_H