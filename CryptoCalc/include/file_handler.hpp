#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

#include "transaction.hpp"
#include <vector>
#include <string>
#include <memory>

bool saveTransactionsToText(const std::string& filename, const std::vector<std::shared_ptr<Transaction>>& transactions);
bool saveTransactionsToBinary(const std::string& filename, const std::vector<std::shared_ptr<Transaction>>& transactions);

#endif
