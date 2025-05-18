#ifndef BUDGET_H
#define BUDGET_H

#include <string>
#include <unordered_map>
#include "Category.h"

class Budget {
public:
    Budget(const std::string& name);

    void setCategoryLimit(const Category& category, double limit);
    double getCategoryLimit(const Category& category) const;
    double getRemainingBudget(const Category& category) const;

    std::string getName() const;
    std::unordered_map<std::string, double> getCategoryLimits() const;
private:
    std::string name;
    std::unordered_map<std::string, double> categoryLimits;
};

#endif // BUDGET_H
