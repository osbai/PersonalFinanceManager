#include <gtest/gtest.h>
#include "../src/Transaction.h"

TEST(TransactionTest, CreationAndGetters) {
    Transaction t("TXN001", "2025-05-17", "Food", "Lunch", -12.5);

    EXPECT_EQ(t.getId(), "TXN001");
    EXPECT_EQ(t.getDate(), "2025-05-17");
    EXPECT_EQ(t.getCategory(), "Food");
    EXPECT_EQ(t.getDescription(), "Lunch");
    EXPECT_DOUBLE_EQ(t.getAmount(), -12.5);
}

TEST(TransactionTest, Setters) {
    Transaction t("TXN002", "2025-01-01", "Misc", "Placeholder", 0.0);

    t.setDate("2025-12-31");
    t.setCategory("Entertainment");
    t.setDescription("Movie");
    t.setAmount(-20.0);

    EXPECT_EQ(t.getDate(), "2025-12-31");
    EXPECT_EQ(t.getCategory(), "Entertainment");
    EXPECT_EQ(t.getDescription(), "Movie");
    EXPECT_DOUBLE_EQ(t.getAmount(), -20.0);
}
