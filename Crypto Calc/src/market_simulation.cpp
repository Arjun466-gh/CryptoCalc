#include "market_simulation.hpp"
#include <random>

double simulateMarketChange(double basePrice) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-0.15, 0.15);
    return basePrice * (1 + dis(gen));
}
