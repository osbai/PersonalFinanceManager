#include "Transaction.h"

Transaction::Transaction() : amount(0.0) {}

Transaction::Transaction(std::string id, std::string date,
                         std::string category, std::string description,
                         double amount)
    : id(id), date(date), category(category),
      description(description), amount(amount) {}

// Getters
std::string Transaction::getId() const { return id; }
std::string Transaction::getDate() const { return date; }
std::string Transaction::getCategory() const { return category; }
std::string Transaction::getDescription() const { return description; }
double Transaction::getAmount() const { return amount; }

// Setters
void Transaction::setDate(const std::string& date) { this->date = date; }
void Transaction::setCategory(const std::string& category) { this->category = category; }
void Transaction::setDescription(const std::string& description) { this->description = description; }
void Transaction::setAmount(double amount) { this->amount = amount; }

// Utility
void Transaction::print() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "[" << id << "] "
              << date << " | "
              << category << " | "
              << description << " | $"
              << amount << std::endl;
}
