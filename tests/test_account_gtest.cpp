#include <gtest/gtest.h>
#include "../src/Account.h"
#include "../src/Transaction.h"

TEST(AccountTest, CreateAccount) {
    Account acc("Checking");
    EXPECT_EQ(acc.getName(), "Checking");
    EXPECT_DOUBLE_EQ(acc.getBalance(), 0.0);
}

TEST(AccountTest, DepositMoney) {
    Account acc("Savings");
    acc.deposit(150.0);
    EXPECT_DOUBLE_EQ(acc.getBalance(), 150.0);
}

TEST(AccountTest, WithdrawMoney) {
    Account acc("Wallet");
    acc.deposit(200.0);
    acc.withdraw(50.0);
    EXPECT_DOUBLE_EQ(acc.getBalance(), 150.0);
}

TEST(AccountTest, PreventOverdraft) {
    Account acc("Basic");
    acc.deposit(100.0);
    acc.withdraw(150.0);  // Should not allow overdraft
    EXPECT_DOUBLE_EQ(acc.getBalance(), 100.0);
}

TEST(AccountTest, AddTransaction) {
    Account acc("Main");
    Transaction t("T001", "2025-05-17", "Food", "Dinner", -25.0);
    acc.addTransaction(t);
    
    // Can't directly test transaction list without exposing it,
    // so test via balance updates if logic is extended to do so later
    EXPECT_DOUBLE_EQ(acc.getBalance(), 0.0); // Assuming balance is only affected by deposit/withdraw
}

TEST(AccountTest, GetTransactions) {
    Account acc("Main");
    Transaction t1("T001", "2025-05-17", "Food", "Dinner", -25.0);
    Transaction t2("T002", "2025-05-18", "Groceries", "Groceries", -50.0);
    acc.addTransaction(t1);
    acc.addTransaction(t2);
    
    std::vector<Transaction> transactions = acc.getTransactions();
    EXPECT_EQ(transactions.size(), 2);
    EXPECT_EQ(transactions[0].getId(), "T001");
    EXPECT_EQ(transactions[1].getId(), "T002");
}
