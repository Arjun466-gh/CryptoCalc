    #include <gtest/gtest.h>
    #include "../include/crypto_calculator.hpp"
    #include "../include/transaction.hpp"
    #include <memory>
    #include <vector>

    TEST(ProfitLossCalculation, BasicCalculation) {
        double investment = 10000;
        double buyPrice = 2000;
        double sellPrice = 3000;
        int numCoins = 5;

        double expectedProfit = (sellPrice - buyPrice) * numCoins;
        EXPECT_EQ(calculateProfitLoss(investment, buyPrice, sellPrice, numCoins), expectedProfit);
    }

    TEST(PortfolioValueCalculation, SharedPointerUsage) {
        std::vector<std::shared_ptr<Transaction>> transactions;
        transactions.push_back(std::make_shared<Transaction>("BTC", 2, 25000, TransactionType::BUY));
        transactions.push_back(std::make_shared<Transaction>("ETH", 1, 1800, TransactionType::BUY));

        double expectedValue = (2 * 25000) + (1 * 1800);
        EXPECT_EQ(calculatePortfolioValue(transactions), expectedValue);
    }

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
