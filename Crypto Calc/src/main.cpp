#include <iostream>
#include "crypto_calculator.hpp"
#include "market_simulation.hpp"

using namespace std;

int main() {
    // User inputs
    double investment, buyPrice, sellPrice;
    int numCoins;

    cout << "Enter initial investment amount: $";
    cin >> investment;

    cout << "Enter number of coins purchased: ";
    cin >> numCoins;

    cout << "Enter buying price per coin: $";
    cin >> buyPrice;

    cout << "Enter expected selling price per coin: $";
    cin >> sellPrice;

    // Calculate profit/loss
    double profitLoss = calculateProfitLoss(investment, buyPrice, sellPrice, numCoins);
    displayResults(profitLoss);

    // Market prediction using moving averages
    vector<double> historicalPrices = loadHistoricalData();
    double avgPrice = calculateMovingAverage(historicalPrices);
    cout << "Predicted average market price: $" << avgPrice << endl;

    return 0;
}
