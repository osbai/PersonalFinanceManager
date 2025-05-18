#include "Budget.h"
#include "Category.h"

Budget::Budget(const std::string& name) : name(name) {}

void Budget::setCategoryLimit(const Category& category, double limit) {
    categoryLimits[category.getName()] = limit;
}

double Budget::getCategoryLimit(const Category& category) const {
    auto it = categoryLimits.find(category.getName());
    return (it != categoryLimits.end()) ? it->second : 0.0;
}

double Budget::getRemainingBudget(const Category& category) const {
    double limit = getCategoryLimit(category);
    // Add logic to subtract transactions if necessary in the future
    return limit;  // In this simple version, just return the limit
}


std::string Budget::getName() const {
    return name;
}

std::unordered_map<std::string, double> Budget::getCategoryLimits() const {
    return categoryLimits;
}
