#include "Transaction.h"

int main() {
    Transaction t1("TXN001", "2025-05-17", "Food", "Lunch at Cafe", -12.50);
    Transaction t2("TXN002", "2025-05-18", "Salary", "Monthly Pay", 2500.00);

    t1.print();
    t2.print();

    return 0;
}
