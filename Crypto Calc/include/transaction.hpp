#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include <string>

enum class TransactionType { BUY, SELL };

struct Transaction {
    std::string coinName;
    TransactionType type;
    double pricePerCoin;
    int quantity;
    std::string timestamp;
};

#endif 
