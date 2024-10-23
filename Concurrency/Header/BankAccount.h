#pragma once

#include <mutex>

class BankAccount {
public:
    BankAccount(int balance);

    // Functions for deposit and withdraw
    void deposit(int amount);
    void withdraw(int amount);

    // Getter for balance
    int getBalance() const;

private:
    int balance;       // Shared resource
    std::mutex mtx;    // Mutex for synchronizing access to the balance
};

