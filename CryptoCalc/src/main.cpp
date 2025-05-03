#include "crypto_calculator.hpp"
#include "file_handler.hpp"
#include "market_simulation.hpp"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int main() {
    int n;
    cout << "Enter number of transactions: ";
    cin >> n;

    vector<shared_ptr<Transaction>> transactions;

    for (int i = 0; i < n; ++i) {
        string coin;
        int quantity;
        double price;
        int typeInput;

        cout << "\nTransaction " << i + 1 << ":\n";
        cout << "Coin name: ";
        cin >> coin;
        cout << "Quantity: ";
        cin >> quantity;
        cout << "Price per coin: ";
        cin >> price;
        cout << "Transaction Type (0 = BUY, 1 = SELL): ";
        cin >> typeInput;

        TransactionType type = static_cast<TransactionType>(typeInput);
        shared_ptr<Transaction> tx = make_shared<Transaction>(coin, quantity, price, type);
        transactions.push_back(tx);
    }

    // Save to text and binary files
    saveTransactionsToText("../data/transactions.txt", transactions);
    saveTransactionsToBinary("../data/transactions.bin", transactions);

    // Display calculated portfolio value
    double portfolioValue = calculatePortfolioValue(transactions);
    cout << "\nFinal Portfolio Value: $" << portfolioValue << endl;

    return 0;
}
