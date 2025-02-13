#include "crypto_calculator.hpp"
#include "market_simulation.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    double investment, buyPrice, sellPrice;
    int numCoins;

    // Get user input for investment details
    cout << "Enter initial investment amount: $";
    cin >> investment;
    cout << "Enter number of coins purchased: ";
    cin >> numCoins;
    cout << "Enter buying price per coin: $";
    cin >> buyPrice;
    cout << "Enter expected selling price per coin: $";
    cin >> sellPrice;

    // Calculate and display profit/loss
    double profitLoss = calculateProfitLoss(investment, buyPrice, sellPrice, numCoins);
    displayResults(profitLoss);

    // Load historical market prices and calculate moving average
    vector<double> historicalPrices = loadHistoricalData();
    double avgPrice = calculateMovingAverage(historicalPrices);

    // Display predicted market price based on moving average
    cout << "Predicted average market price: $" << avgPrice << endl;

    return 0;
}
