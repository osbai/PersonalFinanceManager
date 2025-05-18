#ifndef FINANCE_MANAGER_H
#define FINANCE_MANAGER_H

#include <vector>
#include "Account.h"
#include "Category.h"
#include "Budget.h"

class FinanceManager {
public:
    void createAccount(const std::string& name);
    void createCategory(const std::string& name);
    void createBudget(const std::string& name);
    
    Account* getAccount(const std::string& name);
    Category* getCategory(const std::string& name);
    Budget* getBudget(const std::string& name);
    
private:
    std::vector<Account> accounts;
    std::vector<Category> categories;
    std::vector<Budget> budgets;
};

#endif // FINANCE_MANAGER_H

