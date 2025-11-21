//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2043

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

/**
 * Bank class for managing multiple accounts and supporting
 * transfer, deposit, and withdrawal operations.
 * Accounts are 1-indexed externally (stored as 0-indexed array).
 *
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */
class Bank {
      /**
       * Initialize the bank with the initial balances for all accounts.
       * @param {number[]} balance - Initial balances for each account (index 0 = account 1)
       *
       * Example: const bank = new Bank([10, 100, 20, 50, 30]);
       */
      constructor(balance) {
            this.balance = balance;
      }

      /**
       * Transfer money from account1 to account2 if valid and account1 has enough funds.
       * @param {number} account1 - 1-based index of sender account
       * @param {number} account2 - 1-based index of receiver account
       * @param {number} money - Amount to transfer
       * @return {boolean} True if transfer succeeds, False otherwise
       */
      transfer(account1, account2, money) {
            const accounts = this.balance.length;
            if (account1 > accounts || account2 > accounts || this.balance[account1 - 1] < money) {
                  return false;
            }
            this.balance[account1 - 1] -= money;
            this.balance[account2 - 1] += money;
            return true;
      }

      /**
       * Deposit money into the specified account if valid.
       * @param {number} account - 1-based index of account to receive money
       * @param {number} money - Amount to deposit
       * @return {boolean} True if deposit succeeds, False otherwise
       */
      deposit(account, money) {
            if (account > this.balance.length) {
                  return false;
            }
            this.balance[account - 1] += money;
            return true;
      }

      /**
       * Withdraw money from the specified account if valid and funds are sufficient.
       * @param {number} account - 1-based index of account to withdraw from
       * @param {number} money - Amount to withdraw
       * @return {boolean} True if withdrawal succeeds, False otherwise
       */
      withdraw(account, money) {
            if (account > this.balance.length || this.balance[account - 1] < money) {
                  return false;
            }
            this.balance[account - 1] -= money;
            return true;
      }
}