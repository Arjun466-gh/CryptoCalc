#include <iostream>
#include "crypto_calculator.hpp"

using namespace std;

// Function to calculate profit/loss
double calculateProfitLoss(double investment, double buyPrice, double sellPrice, int numCoins) {
    return (sellPrice - buyPrice) * numCoins;
}

// Function to display results
void displayResults(double profitLoss) {
    cout << "Your estimated profit/loss: $" << profitLoss << endl;
}
