#include <iostream>
#include <cassert>
#include "../src/Transaction.h"

void test_transaction_creation() {
    Transaction t("TXN001", "2025-05-17", "Food", "Lunch", -12.5);

    assert(t.getId() == "TXN001");
    assert(t.getDate() == "2025-05-17");
    assert(t.getCategory() == "Food");
    assert(t.getDescription() == "Lunch");
    assert(t.getAmount() == -12.5);
}

void test_transaction_setters() {
    Transaction t("TXN002", "2025-01-01", "Misc", "Test", 0.0);

    t.setDate("2025-12-31");
    t.setCategory("Entertainment");
    t.setDescription("Movie");
    t.setAmount(-20.0);

    assert(t.getDate() == "2025-12-31");
    assert(t.getCategory() == "Entertainment");
    assert(t.getDescription() == "Movie");
    assert(t.getAmount() == -20.0);
}

int main() {
    test_transaction_creation();
    test_transaction_setters();

    std::cout << "✅ All basic tests passed.\n";
    return 0;
}
