#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

#include <string>
#include <vector>

struct Transaction {
    std::string currency;
    double amount;
    std::string timestamp;
};

class FileHandler {
public:
    void saveTransactionsToText(const std::vector<Transaction>& transactions, const std::string& filename);
    void saveTransactionsToBinary(const std::vector<Transaction>& transactions, const std::string& filename);
    std::vector<Transaction> loadTransactionsFromBinary(const std::string& filename);
};

#endif
