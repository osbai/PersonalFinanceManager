#include <gtest/gtest.h>
#include "../src/Account.h"
#include "../src/Category.h"
#include "../src/Budget.h"
#include "../src/FinanceManager.h"

// -------- Category Tests --------
TEST(CategoryTest, Creation) {
    Category cat("Groceries");
    EXPECT_EQ(cat.getName(), "Groceries");
}

// -------- Budget Tests --------
TEST(BudgetTest, CreationAndLimits) {
    Budget bud("Budget");
    Category groceries("Groceries");
    bud.setCategoryLimit(groceries, 500.0);
    double limit = bud.getCategoryLimit(groceries);
    EXPECT_DOUBLE_EQ(limit, 500.0);
}

// // -------- FinanceManager Tests --------
// TEST(FinanceManagerTest, AddAndRetrieveAll) {
//     FinanceManager fm;

//     Account a("Wallet");
//     fm.addAccount(a);

//     Category c("Food");
//     fm.addCategory(c);

//     Budget b("Food", 300.0);
//     fm.addBudget(b);

//     ASSERT_EQ(fm.getAccounts().size(), 1);
//     EXPECT_EQ(fm.getAccounts()[0].getName(), "Wallet");

//     ASSERT_EQ(fm.getCategories().size(), 1);
//     EXPECT_EQ(fm.getCategories()[0].getName(), "Food");

//     ASSERT_EQ(fm.getBudgets().size(), 1);
//     EXPECT_EQ(fm.getBudgets()[0].getCategory(), "Food");
//     EXPECT_DOUBLE_EQ(fm.getBudgets()[0].getLimit(), 300.0);
// }
