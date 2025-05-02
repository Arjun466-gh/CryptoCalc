#include "crypto_calculator.hpp"
#include "file_handler.hpp"
#include "market_simulation.hpp"
#include "transaction.hpp"

#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<Transaction>> portfolio;

    // Example dummy transaction
    portfolio.push_back(std::make_shared<Transaction>("Bitcoin", 2, 30000, TransactionType::BUY));

    double portfolioValue = calculatePortfolioValue(portfolio);
    std::cout << "Current Portfolio Value: $" << portfolioValue << std::endl;

    return 0;
}
