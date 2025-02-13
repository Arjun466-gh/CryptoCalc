#ifndef MARKET_SIMULATION_HPP
#define MARKET_SIMULATION_HPP

#include <vector>

// Function declarations
std::vector<double> loadHistoricalData();
double calculateMovingAverage(const std::vector<double>& prices);

#endif
