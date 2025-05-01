#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

#include "transaction.hpp"
#include <vector>
#include <string>

bool loadHistoricalPrices(const std::string& filename, std::vector<double>& prices);
bool saveTransactionsToText(const std::string& filename, const std::vector<Transaction>& transactions);
bool saveTransactionsToBinary(const std::string& filename, const std::vector<Transaction>& transactions);
bool loadTransactionsFromBinary(const std::string& filename, std::vector<Transaction>& transactions);

#endif 
