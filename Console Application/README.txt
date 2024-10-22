                                                                                  Main.cpp
Overview
    This file implements a simple ATM machine simulation that allows users to create bank accounts, log in, and perform basic
    banking operations such as depositing, withdrawing, and checking their account balance. The program uses the BankAccount class defined in BankAccount.h.

Functions
    main() - The entry point of the program that welcomes users to the ATM machine and calls the start() function.
    printIntroMenu() - Displays the introductory menu, allowing users to choose between logging in, creating a new account, or quitting the program.
    printMainMenu() - Displays the main menu for logged-in users, providing options to deposit money, withdraw money, check balance, or quit.
    start() - Handles the main logic of the program. It includes:
        User Authentication: Allows users to log in with their credentials.
        Main Menu Navigation: Once logged in, users can choose to deposit, withdraw, or check their balance.

User Flow
    1. Welcome Message: The program starts with a welcome message.
    2. Intro Menu: Users can select to log in, create a new account, or quit.
    3. Login Process: If the user chooses to log in, they are prompted for their user ID and password.
    4. Main Menu for Logged-In Users: Once logged in, users can deposit funds, withdraw funds, or check their balance through the main menu.
    5. Exit Option: Users can exit the program.

Input Handling
    This program uses cin for input.
                                                                                BankAccount.h
Overview
    This header file defines the BankAccount class, which represents a simple bank account system. It allows users to create an account,
    log in, deposit money, withdraw money, and check their balance.

Class Definition
    BankAccount
    The BankAccount class contains the following private members:

    string userId: Stores the user ID of the account holder.
    string password: Stores the password for account access.
    double balance: Stores the current balance of the account.

Constructors
    Default Constructor: Initializes balance to 0.0.
        BankAccount() : balance(0.0) {}

    Parameterized Constructor: Initializes userId, password, and sets balance to 0.0.
        BankAccount(const string& id, const string& pwd) : userId(id), password(pwd), balance(0.0) {}

Functions
    createBankAccount(): Prompts the user to enter their username and password to create a new account. Returns a new BankAccount object.

    authorizelogin(const string& id, const string& pwd): Checks if the provided user ID and password match the stored credentials. Returns true if login is successful; otherwise, returns false.

    withdraw(double amount): Withdraws a specified amount from the account if sufficient funds are available. Displays a message indicating success or failure.

    deposit(double amount): Deposits a specified amount into the account.

    getBalance(): Returns the current balance of the account.

