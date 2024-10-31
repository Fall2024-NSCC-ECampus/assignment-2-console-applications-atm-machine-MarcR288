                Main.cpp
Overview
    This file implements a simple ATM machine simulation that allows users to create bank accounts, log in,
    and perform basic banking operations such as depositing, withdrawing, and checking their account balance.
    The program uses the BankAccount class defined in BankAccount.h.

Functions
    main() - The entry point of the program that welcomes users to the ATM machine and calls the start() function.
    printIntroMenu() - Displays the introductory menu, allowing users to choose between logging in, creating a
    new account, or quitting the program.
    printMainMenu() - Displays the main menu for logged-in users, providing options to deposit money,
    withdraw money, check balance, or quit.
    start() - Handles the main logic of the program. It includes:
        User Authentication: Allows users to log in with their credentials.
        Main Menu Navigation: Once logged in, users can choose to deposit, withdraw, or check their balance.

User Flow
    1. Welcome Message: The program starts with a welcome message.
    2. Intro Menu: Users can select to log in, create a new account, or quit.
    3. Login Process: If the user chooses to log in, they are prompted for their user ID and password.
    4. Main Menu for Logged-In Users: Once logged in, users can deposit funds, withdraw funds, or check their balance
    through the main menu.
    5. Exit Option: Users can exit the program.

Input Handling
    This program uses cin for input.


                BankAccount Class (BankAccount.h)
Overview
The BankAccount class provides a simple representation of a bank account with functionalities for creating an account,
depositing and withdrawing funds, and checking the account balance.

Features
Account Creation: Users can create a new bank account by providing a user ID and password.
Deposit and Withdraw: Users can deposit money into their account and withdraw funds,
with balance checks to prevent overdrafts.
Balance Retrieval: Users can retrieve the current balance of their account, formatted to two decimal places.
User Authentication: The class supports user login functionality to ensure secure access.

                BankAccount Class Implementation (BankAccont.cpp)
Overview
    This file implements the BankAccount class, which provides functionalities for managing a simple bank account.
    It allows users to create accounts, log in, deposit and withdraw funds, and check their balance. The implementation
    ensures that all monetary values are rounded to two decimal places.

Features
    Account Creation: Users can create a new bank account by providing a username and password.
    User Login: The class supports user authentication to ensure secure access to account functionalities.
    Deposit and Withdrawal: Users can deposit money into their account and withdraw funds, with necessary checks for
    sufficient balance.
    Balance Display: Users can view their current balance, formatted to two decimal places.
    Functions
    BankAccount BankAccount::createBankAccount()
    Prompts the user to enter a username and password to create a new bank account. Returns a BankAccount object
    initialized with the provided credentials.

void printIntroMenu()
Displays the introductory menu with options to log in, create a new account, or quit the application.

void printMainMenu()
Displays the main menu with options to deposit money, withdraw money, check the balance, or quit the application.

bool BankAccount::authorizelogin()
Prompts the user to enter their user ID and password to authenticate. Returns true if the login is successful;
otherwise, returns false.

void BankAccount::deposit()
Prompts the user to enter an amount to deposit into their account. Updates the balance and displays the new balance.

void BankAccount::withdraw()
Prompts the user to enter an amount to withdraw. Checks if sufficient funds are available, updates the balance if the
withdrawal is successful, and displays the new balance.

void BankAccount::printBalance()
Displays the current balance of the account, formatted to two decimal places.

double BankAccount::roundToTwoDecimalPlaces(double amount)
Rounds a given amount to two decimal places for proper monetary representation.