#include "transaction.hpp"
#include <iostream>

Transaction::Transaction(const std::string& coinName, double amount, double price, TransactionType type)
    : coin(coinName), quantity(amount), pricePerCoin(price), type(type) {}

void Transaction::print() const {
    std::cout << "Transaction: " << coin
              << " | Amount: " << quantity
              << " | Price: $" << pricePerCoin
              << " | Type: " << (type == TransactionType::BUY ? "BUY" : "SELL")
              << std::endl;
}
