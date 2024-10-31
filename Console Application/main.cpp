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
    cout << "Hi! Welcome to Mr. Zamar's ATM Machine!" << endl;
    // call the function start
    start();
    return 0;
}

void start() {
    BankAccount account;
    char choice;

    while (true) {
        printIntroMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears the input buffer

        switch (choice) {
            //Login
            case 'l': {
                if (account.authorizelogin()) {
                    cout << "Access Granted!" << endl;
                    //Loop for logged-in user
                    char mainChoice;
                    while (true) {
                        printMainMenu();
                        cin >> mainChoice;
                        switch (mainChoice) {
                            //Deposit
                            case 'd': {
                                account.deposit();
                                break;
                            }
                            //Withdraw Funds
                            case 'w': {
                                account.withdraw();
                                break;
                            }
                            //Request Balance
                            case 'r': {
                            account.printBalance();
                                break;
                            }
                            //Quit
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
            //Create Bank Account
            case 'c':
                account.createBankAccount();
            break;
            //Quit
            case 'q':
                cout << "Thanks for stopping by!" << endl;
            exit(0);
            //Default Case
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
