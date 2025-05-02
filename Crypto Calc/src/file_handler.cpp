#include "file_handler.hpp"
#include <fstream>
#include <iostream>

void writeTransactionsToText(const std::vector<Transaction>& transactions, const std::string& filename) {
    std::ofstream out(filename);
    if (!out) {
        std::cerr << "Error opening file for writing.\n";
        return;
    }

    for (const auto& tx : transactions) {
        out << tx.coin << " " << tx.quantity << " " << tx.pricePerCoin << " " << static_cast<int>(tx.type) << "\n";
    }
    out.close();
}

void readTransactionsFromText(std::vector<Transaction>& transactions, const std::string& filename) {
    std::ifstream in(filename);
    if (!in) {
        std::cerr << "Error opening file for reading.\n";
        return;
    }

    std::string coin;
    double qty, price;
    int type;
    while (in >> coin >> qty >> price >> type) {
        transactions.emplace_back(coin, qty, price, static_cast<TransactionType>(type));
    }
    in.close();
}
