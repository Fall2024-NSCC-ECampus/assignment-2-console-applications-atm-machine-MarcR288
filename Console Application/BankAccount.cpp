//
// Created by Marc_ on 2024-10-31.
//
#include "BankAccount.h"

#include <iomanip>
#include <limits>
#include <cmath>

BankAccount BankAccount::createBankAccount() {
    cout << "Please enter your username" << endl;
    cin >> userId;
    cout << "Please enter your password" << endl;
    cin >> password;

    cout << "Thank you! Your account has been created!" << endl;
    return BankAccount(userId, password);
}

void printIntroMenu() {
    cout << "Please Select an option from the menu below: " << endl;
    cout << "l -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit" << endl;
}

void printMainMenu() {
    cout << "Please Select an option from the menu below: " << endl;
    cout << "d -> Deposit Money" << endl;
    cout << "w -> Withdraw Money" << endl;
    cout << "r -> Request Balance" << endl;
    cout << "q -> Quit" << endl;
}

bool BankAccount::authorizelogin(){
    string id, pwd;
    cout << "Please enter your user id: " << endl;
    cin >> id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter your password: " << endl;
    cin >> pwd;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (id == userId && pwd == password) {
        cout << "******** LOGIN SUCCESS! ********" << endl;
        return true;
    } else {
        cout << "******** LOGIN FAILED! ********" << endl;
        return false;
    }
}

void BankAccount::deposit() {
    double amount;
    cout << "Please enter the amount you want to deposit: " << endl;
    cin >> amount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    balance = roundToTwoDecimalPlaces(balance + amount);
    printBalance();
}

void BankAccount::withdraw() {
    double amount;
    cout << "Please enter the amount you want to withdraw: $" << endl;
    cin >> amount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (amount <= balance) {
        balance = roundToTwoDecimalPlaces(balance - amount);
        cout << "Withdraw successful!" << endl;
        printBalance();
    } else {
        cout << "Withdraw failed! - Insufficient Funds" << endl;
    }
};

void BankAccount::printBalance() {
    cout << "Your balance is $" << fixed << setprecision(2) << getBalance() << "." << endl;
}

double BankAccount::roundToTwoDecimalPlaces(double amount) {
    return floor(amount * 100 + 0.5) / 100;
}




