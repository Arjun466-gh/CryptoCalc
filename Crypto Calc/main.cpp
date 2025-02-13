#include <iostream>
#include "crypto_calculator.hpp"
#include "market_simulation.hpp"

using namespace std;

int main() {
    int choice;
    
    do {
        cout << "\nCrypto Investment Calculator\n";
        cout << "1. Calculate Profit/Loss\n";
        cout << "2. Market Prediction\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            double investment, buyPrice, sellPrice;
            int numCoins;

            cout << "Enter initial investment: $";
            cin >> investment;

            cout << "Enter number of coins: ";
            cin >> numCoins;

            cout << "Enter buying price: $";
            cin >> buyPrice;

            cout << "Enter expected selling price: $";
            cin >> sellPrice;

            double profitLoss = calculateProfitLoss(investment, buyPrice, sellPrice, numCoins);
            displayResults(profitLoss);
        } 
        else if (choice == 2) {
            vector<double> prices = loadHistoricalData();
            double avg = calculateMovingAverage(prices);
            cout << "Predicted average market price: $" << avg << endl;
        }
    } while (choice != 3);

    return 0;
}
