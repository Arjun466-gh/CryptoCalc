#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include <string>
#include <iostream>

enum class TransactionType { BUY, SELL };

struct Transaction {
    std::string coin;
    int quantity;
    double pricePerCoin;
    TransactionType type;

    
    Transaction(const std::string& coinName, int qty, double price, TransactionType t)
        : coin(coinName), quantity(qty), pricePerCoin(price), type(t) {}

    void print() const {
        std::cout << "Coin: " << coin
                  << ", Quantity: " << quantity
                  << ", Price: $" << pricePerCoin
                  << ", Type: " << (type == TransactionType::BUY ? "Buy" : "Sell")
                  << std::endl;
    }
};

#endif 
