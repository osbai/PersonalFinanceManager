#include "FinanceManager.h"

void FinanceManager::createAccount(const std::string& name) {
    accounts.emplace_back(name);
}

void FinanceManager::createCategory(const std::string& name) {
    categories.emplace_back(name);
}

void FinanceManager::createBudget(const std::string& name) {
    budgets.emplace_back(name);
}

Account* FinanceManager::getAccount(const std::string& name) {
    for (auto& account : accounts) {
        if (account.getName() == name) {
            return &account;
        }
    }
    return nullptr;
}

Category* FinanceManager::getCategory(const std::string& name) {
    for (auto& category : categories) {
        if (category.getName() == name) {
            return &category;
        }
    }
    return nullptr;
}

Budget* FinanceManager::getBudget(const std::string& name) {
    for (auto& budget : budgets) {
        if (budget.getName() == name) {
            return &budget;
        }
    }
    return nullptr;
}

