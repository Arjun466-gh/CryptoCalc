#include "crypto_calculator.hpp"
#include <iostream>

using namespace std;

// Function to calculate profit or loss
// Formula: (Selling Price - Buying Price) * Number of Coins
double calculateProfitLoss(double investment, double buyPrice, double sellPrice, int numCoins) {
    return (sellPrice - buyPrice) * numCoins;
}

// Function to display the profit/loss result
void displayResults(double profitLoss) {
    cout << "Your estimated profit/loss: $" << profitLoss << endl;
}
