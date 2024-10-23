#include <iostream>
#include <thread>
#include "BankAccount.h"

using namespace std;

// Function to perform a series of deposits and withdrawals in a thread
void bankUser(BankAccount& account, int deposits, int withdrawals) {
    for (int i = 0; i < deposits; ++i) {
        account.deposit(10); // Each deposit is 10
    }
    for (int i = 0; i < withdrawals; ++i) {
        account.withdraw(5); // Each withdrawal is 5
    }
}

int main() {
    BankAccount account(100);  // Initial balance of 100

    // Create multiple threads simulating different users
    thread t1(bankUser, ref(account), 10, 5);
    thread t2(bankUser, ref(account), 20, 10);
    thread t3(bankUser, ref(account), 15, 7);

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();

    // Output the final balance
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}
