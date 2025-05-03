#ifndef MARKET_SIMULATION_HPP
#define MARKET_SIMULATION_HPP

#include <vector>

// Simulate market trend with slight randomness or fixed growth/decline
std::vector<double> simulateMarket(int days, double initialPrice, double volatilityPercent = 5.0);

#endif
