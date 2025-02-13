#ifndef CRYPTO_CALCULATOR_HPP
#define CRYPTO_CALCULATOR_HPP

// Function to calculate profit or loss from a cryptocurrency trade
double calculateProfitLoss(double investment, double buyPrice, double sellPrice, int numCoins);

// Function to display the calculated profit or loss
void displayResults(double profitLoss);

#endif
