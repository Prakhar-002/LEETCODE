//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2043

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

/*
 * Bank class for managing multiple accounts.
 * Supports transfer, deposit, and withdrawal operations.
 * Accounts are 1-indexed externally (internally stored 0-indexed).
 */
#include <vector>
using namespace std;

class Bank {
private:
      vector<long long> balance;

public:
      /**
       * Initialize the bank with the initial balances for all accounts.
       * @param balance Initial balances for each account (index 0 = account 1)
       */
      Bank(vector<long long>& balance) : balance(balance) {}

      /**
       * Transfer money from account1 to account2 if valid and account1 has enough funds.
       * @param account1 1-based index of sender account
       * @param account2 1-based index of receiver account
       * @param money Amount to transfer
       * @return True if transfer succeeds, False otherwise
       */
      bool transfer(int account1, int account2, long long money) {
            int accounts = balance.size();
            if (account1 > accounts || account2 > accounts || balance[account1 - 1] < money) {
                  return false;
            }
            balance[account1 - 1] -= money;
            balance[account2 - 1] += money;
            return true;
      }

      /**
       * Deposit money into the specified account if valid.
       * @param account 1-based index of account to receive money
       * @param money Amount to deposit
       * @return True if deposit succeeds, False otherwise
       */
      bool deposit(int account, long long money) {
            if (account > balance.size()) {
                  return false;
            }
            balance[account - 1] += money;
            return true;
      }

      /**
       * Withdraw money from the specified account if valid and funds are sufficient.
       * @param account 1-based index of account to withdraw from
       * @param money Amount to withdraw
       * @return True if withdrawal succeeds, False otherwise
       */
      bool withdraw(int account, long long money) {
            if (account > balance.size() || balance[account - 1] < money) {
                  return false;
            }
            balance[account - 1] -= money;
            return true;
      }
};