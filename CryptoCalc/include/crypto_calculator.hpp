#ifndef CRYPTO_CALCULATOR_HPP
#define CRYPTO_CALCULATOR_HPP

#include "transaction.hpp"
#include <vector>
#include <memory>

double calculateProfitLoss(double investment, double buyPrice, double sellPrice, int numCoins);
void displayResults(double profitLoss);

// Using smart pointer for possible transaction tracking
double calculatePortfolioValue(const std::vector<std::shared_ptr<Transaction>>& transactions);

#endif 

