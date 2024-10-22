#include <iostream>
#include <stdlib.h>
#include <limits>
#include "BankAccount.h"

using namespace std;

void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();


char menuInput;

int main() {
    cout << "Hi! Welcome to Mr. Zamar’s ATM Machine!" << endl;
    // call the function start
    start();
    return 0;
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



void start() {
    BankAccount account;
    char choice;

    while (true) {
        printIntroMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

        switch (choice) {
            case 'l': {
                string id, pwd;
                cout << "Please enter your user id: " << endl;
                cin >> id;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
                cout << "Please enter your password: " << endl;
                cin >> pwd;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

                if (account.authorizelogin(id, pwd)) {
                    cout << "Access Granted!" << endl;

                    // Main menu loop for logged-in user
                    char mainChoice;
                    while (true) {
                        printMainMenu(); // Print the main menu
                        cin >> mainChoice;

                        switch (mainChoice) {
                            case 'd': {
                                double amount;
                                cout << "Please enter the amount you want to deposit: " << endl;
                                cin >> amount;
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
                                account.deposit(amount);
                                cout << "Deposit successful! Your balance is: $" << account.getBalance() << endl;
                                break;
                            }
                            case 'w': {
                                double amount;
                                cout << "Please enter the amount you want to withdraw: $" << endl;
                                cin >> amount;
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
                                account.withdraw(amount);
                                break;
                            }
                            case 'r': {
                                cout << "Your balance is $" << account.getBalance() << "." << endl;
                                break;
                            }
                            case 'q': {
                                cout << "Thanks for stopping by!" << endl;
                                exit(0);
                            }
                            default:
                                cout << "Invalid option. Please try again." << endl;
                        }
                    }
                }
                break;
            }
            case 'c':
                account.createBankAccount();
            break;
            case 'q':
                cout << "Thanks for stopping by!" << endl;
            exit(0);
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
