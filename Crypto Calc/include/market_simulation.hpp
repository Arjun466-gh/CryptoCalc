#ifndef MARKET_SIMULATION_HPP
#define MARKET_SIMULATION_HPP

#include <vector>

// Function to load historical price data from a file
std::vector<double> loadHistoricalData();

// Function to calculate the moving average of given price data
double calculateMovingAverage(const std::vector<double>& prices);

#endif
