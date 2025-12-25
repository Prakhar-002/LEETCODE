//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2043

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

/**
 * Bank class for managing multiple accounts.
 * Supports transfer, deposit, and withdrawal operations.
 * Accounts are 1-indexed externally (but stored in a 0-indexed array).
 */
public class Bank {
      private long[] balance;

      /**
       * Initialize the bank with the initial balances for all accounts.
       *
       * @param balance Initial balances for each account (index 0 = account 1)
       *
       *                Example:
       *                Bank bank = new Bank(new long[]{10, 100, 20, 50, 30});
       */
      public Bank(long[] balance) {
            this.balance = balance;
      }

      /**
       * Transfer money from account1 to account2 if both accounts are valid
       * and account1 has enough balance.
       *
       * @param account1 1-based index of sender account
       * @param account2 1-based index of receiver account
       * @param money    Amount to be transferred
       * @return True if transfer succeeds, False otherwise
       */
      public boolean transfer(int account1, int account2, long money) {
            int accounts = balance.length;
            if (account1 > accounts || account2 > accounts || balance[account1 - 1] < money) {
                  return false;
            }
            balance[account1 - 1] -= money;
            balance[account2 - 1] += money;
            return true;
      }

      /**
       * Deposit money into the specified account if it exists.
       *
       * @param account 1-based index of the account to receive money
       * @param money   Amount to deposit
       * @return True if deposit succeeds, False otherwise
       */
      public boolean deposit(int account, long money) {
            if (account > balance.length) {
                  return false;
            }
            balance[account - 1] += money;
            return true;
      }

      /**
       * Withdraw money from the specified account if it exists and has enough funds.
       *
       * @param account 1-based index of account to withdraw from
       * @param money   Amount to withdraw
       * @return True if withdrawal succeeds, False otherwise
       */
      public boolean withdraw(int account, long money) {
            if (account > balance.length || balance[account - 1] < money) {
                  return false;
            }
            balance[account - 1] -= money;
            return true;
      }
}