#ifndef ACCOUNT_H  // Check if ACCOUNT_H is NOT defined
#define ACCOUNT_H  // If not, define it (i.e., mark the file as included)

#include <string>
#include <vector>
#include "Transaction.h"

class Account {
public:
    Account(const std::string& name);
    
    // Getters and Setters
    std::string getName() const;
    double getBalance() const;
    
    // Methods to manipulate account balance
    void deposit(double amount);
    void withdraw(double amount);
    
    // Add transaction to the account
    void addTransaction(const Transaction& transaction);

    std::vector<Transaction> getTransactions() const;
    
private:
    std::string name;
    double balance;
    std::vector<Transaction> transactions;
};
#endif // ACCOUNT_H
