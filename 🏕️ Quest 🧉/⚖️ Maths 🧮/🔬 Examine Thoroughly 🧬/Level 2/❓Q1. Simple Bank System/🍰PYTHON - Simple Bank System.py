#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2043

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Bank:
      """
      Bank class for managing multiple accounts and supporting
      transfer, deposit, and withdrawal operations.

      All accounts are 1-indexed externally (but stored in a 0-indexed list).
      """

      def __init__(self, balance: List[int]):
            """
            Initialize the bank with the initial balances for all accounts.

            Args:
                  balance (List[int]): Initial balances for each account (index 0 = account 1).

            Example:
                  bank = Bank([10, 100, 20, 50, 30])
            """
            self.balance = balance

      def transfer(self, account1: int, account2: int, money: int) -> bool:
            """
            Transfer money from account1 to account2 if both accounts are valid
            and account1 has enough balance.

            Args:
                  account1 (int): 1-based index of sender account
                  account2 (int): 1-based index of receiver account
                  money (int): Amount to be transferred

            Returns:
                  bool: True if transfer succeeds, False otherwise
            """
            accounts = len(self.balance)
            # Check that both accounts are valid and sender has enough money
            if account1 > accounts or account2 > accounts or self.balance[account1 - 1] < money:
                  return False
            # Perform the transfer
            self.balance[account1 - 1] -= money
            self.balance[account2 - 1] += money
            return True

      def deposit(self, account: int, money: int) -> bool:
            """
            Deposit money into the specified account if it exists.

            Args:
                  account (int): 1-based index of the account to receive money
                  money (int): Amount to deposit

            Returns:
                  bool: True if deposit succeeds, False otherwise
            """
            if account > len(self.balance):
                  return False
            self.balance[account - 1] += money
            return True

      def withdraw(self, account: int, money: int) -> bool:
            """
            Withdraw money from the specified account if it exists and has enough funds.

            Args:
                  account (int): 1-based index of account to withdraw from
                  money (int): Amount to withdraw

            Returns:
                  bool: True if withdrawal succeeds, False otherwise
            """
            # Check for valid account and sufficient funds
            if account > len(self.balance) or self.balance[account - 1] < money:
                  return False
            self.balance[account - 1] -= money
            return True