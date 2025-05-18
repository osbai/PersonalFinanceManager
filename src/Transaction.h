#ifndef TRANSACTION_H  // Check if ACCOUNT_H is NOT defined
#define TRANSACTION_H  // If not, define it (i.e., mark the file as included)

#include <string>
#include <iostream>
#include <iomanip>

class Transaction {
private:
    std::string id;          // Unique ID for each transaction
    std::string date;        // Format: YYYY-MM-DD
    std::string category;
    std::string description;
    double amount;

public:
    Transaction();
    Transaction(std::string id, std::string date, std::string category,
                std::string description, double amount);

    // Getters
    std::string getId() const;
    std::string getDate() const;
    std::string getCategory() const;
    std::string getDescription() const;
    double getAmount() const;

    // Setters
    void setDate(const std::string& date);
    void setCategory(const std::string& category);
    void setDescription(const std::string& description);
    void setAmount(double amount);

    // Utility
    void print() const;
};

#endif // TRANSACTION_H
