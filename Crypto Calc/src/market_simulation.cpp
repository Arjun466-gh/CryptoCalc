#include "market_simulation.hpp"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

// Function to load historical price data from a file
vector<double> loadHistoricalData() {
    vector<double> prices;
    ifstream file("data/historical_prices.txt"); // Open the file

    // Check if the file opened successfully
    if (!file) {
        cerr << "Error: Could not open historical_prices.txt" << endl;
        return prices; // Return empty vector if file can't be read
    }

    double price;
    while (file >> price) {
        prices.push_back(price); // Read prices from file into vector
    }

    file.close(); // Close the file after reading

    // Debugging: Print loaded prices
    cout << "Loaded Prices: ";
    for (double p : prices) {
        cout << p << " ";
    }
    cout << endl;

    return prices;
}

// Function to calculate the moving average of the historical prices
// Formula: Sum of all prices / Number of prices
double calculateMovingAverage(const vector<double>& prices) {
    if (prices.empty()) {
        return 0.0; // Return 0 if no prices are available
    }

    double sum = 0.0;
    for (double price : prices) {
        sum += price; // Add up all prices
    }

    return sum / prices.size(); // Compute the average
}
