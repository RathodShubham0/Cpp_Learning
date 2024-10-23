#include "BankAccount.h"

BankAccount::BankAccount(int initialBalance) : balance(initialBalance) {}

// Function to deposit money, with thread safety
void BankAccount::deposit(int amount) {
    std::lock_guard<std::mutex> lock(mtx);  // Locks the mutex
    balance += amount;
}

// Function to withdraw money, with thread safety
void BankAccount::withdraw(int amount) {
    std::lock_guard<std::mutex> lock(mtx);  // Locks the mutex
    if (balance >= amount) {
        balance -= amount;
    }
}

// Getter for balance
int BankAccount::getBalance() const {
    return balance;
}
