#ifndef CRYPTO_CALCULATOR_HPP
#define CRYPTO_CALCULATOR_HPP

#include <string>
#include <map>

class CryptoCalculator {
public:
    double convertCurrency(const std::string& from, const std::string& to, double amount);
    void displayRate(const std::string& currency);
};

#endif
