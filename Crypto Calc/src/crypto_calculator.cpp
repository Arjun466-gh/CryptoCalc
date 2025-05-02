#include "crypto_calculator.hpp"
#include <iostream>

double calculateProfitLoss(double investment, double buyPrice, double sellPrice, int numCoins) {
    double totalCost = buyPrice * numCoins;
    double totalReturn = sellPrice * numCoins;
    return totalReturn - totalCost;
}

void displayResults(double profitLoss) {
    if (profitLoss >= 0)
        std::cout << "Profit: $" << profitLoss << std::endl;
    else
        std::cout << "Loss: $" << -profitLoss << std::endl;
}

double calculatePortfolioValue(const std::vector<std::shared_ptr<Transaction>>& transactions) {
    double total = 0;
    for (const auto& tx : transactions) {
        if (tx->type == TransactionType::BUY)
            total += tx->quantity * tx->pricePerCoin;
        else
            total -= tx->quantity * tx->pricePerCoin;
    }
    return total;
}
