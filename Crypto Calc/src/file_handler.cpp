#include "../include/file_handler.hpp"
#include <fstream>
#include <iostream>

bool saveTransactionsToText(const std::string& filename, const std::vector<std::shared_ptr<Transaction>>& transactions) {
    std::ofstream out(filename);
    if (!out.is_open()) {
        std::cerr << "Error opening file for writing: " << filename << "\n";
        return false;
    }

    for (const auto& tx : transactions) {
        out << tx->coin << " " << tx->quantity << " " << tx->pricePerCoin << " " << static_cast<int>(tx->type) << "\n";
    }

    out.close();
    return true;
}

bool saveTransactionsToBinary(const std::string& filename, const std::vector<std::shared_ptr<Transaction>>& transactions) {
    std::ofstream out(filename, std::ios::binary);
    if (!out.is_open()) {
        std::cerr << "Error opening file for binary write: " << filename << "\n";
        return false;
    }

    for (const auto& tx : transactions) {
        size_t length = tx->coin.size();
        out.write(reinterpret_cast<char*>(&length), sizeof(length));
        out.write(tx->coin.c_str(), length);
        out.write(reinterpret_cast<char*>(&tx->quantity), sizeof(tx->quantity));
        out.write(reinterpret_cast<char*>(&tx->pricePerCoin), sizeof(tx->pricePerCoin));
        int type = static_cast<int>(tx->type);
        out.write(reinterpret_cast<char*>(&type), sizeof(type));
    }

    out.close();
    return true;
}
