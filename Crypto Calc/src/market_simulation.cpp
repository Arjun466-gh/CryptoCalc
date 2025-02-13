#include <iostream>
#include <fstream>
#include <vector>
#include "market_simulation.hpp"

using namespace std;

// Load historical prices from file
vector<double> loadHistoricalData() {
    vector<double> prices;
    ifstream file("../data/historical_prices.txt");

    double price;
    while (file >> price) {
        prices.push_back(price);
    }
    file.close();
    return prices;
}

// Calculate moving average (basic market prediction)
double calculateMovingAverage(const vector<double>& prices) {
    if (prices.empty()) return 0.0;

    double sum = 0;
    for (double price : prices) {
        sum += price;
    }
    return sum / prices.size();
}
