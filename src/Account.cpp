#include "Account.h"

Account::Account(const std::string& name) : name(name), balance(0.0) {}

std::string Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && balance >= amount) {
        balance -= amount;
    }
}

void Account::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

std::vector<Transaction> Account::getTransactions() const {
    return transactions;
}
