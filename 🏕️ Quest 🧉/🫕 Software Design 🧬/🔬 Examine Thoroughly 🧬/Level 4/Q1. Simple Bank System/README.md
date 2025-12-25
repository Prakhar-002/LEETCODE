# Q1. Simple Bank System

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/simple-bank-system/description/?envType=daily-question&envId=2025-10-26"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have been tasked with writing a program for a popular bank that will automate all its incoming transactions (transfer, deposit, and withdraw). The bank has `n` accounts numbered from 1 to `n`. The initial balance of each account is stored in a 0-indexed integer array `balance`, with the `(i + 1)`th account having an initial balance of `balance[i]`.

### Execute all the valid transactions. A transaction is valid if:

- The given account number(s) are between 1 and `n`, and
- The amount of money withdrawn or transferred from is less than or equal to the balance of the account.

### Implement the `Bank` class:

- `Bank(long[] balance)` Initializes the object with the 0-indexed integer array `balance`.
- `boolean transfer(int account1, int account2, long money)` Transfers `money` dollars from the account numbered `account1` to the account numbered `account2`. Return `true` if the transaction was successful, `false` otherwise.
- `boolean deposit(int account, long money)` Deposit `money` dollars into the account numbered `account`. Return `true` if the transaction was successful, `false` otherwise.
- `boolean withdraw(int account, long money)` Withdraw `money` dollars from the account numbered `account`. Return `true` if the transaction was successful, `false` otherwise.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `["Bank", "withdraw", "transfer", "deposit", "transfer", "withdraw"]
[[[10, 100, 20, 50, 30]], [3, 10], [5, 1, 20], [5, 20], [3, 4, 15], [10, 50]]`

  ### 📤 `Output`  ➤ `[null, true, true, true, false, false]`

  ### 🔦 `Explanation`  ➤ ➺

```js

  Bank bank = new Bank([10, 100, 20, 50, 30]);
  bank.withdraw(3, 10);    // return true, account 3 has a balance of $20, so it is valid to withdraw $10. Account 3 has $20 - $10 = $10.
  bank.transfer(5, 1, 20); // return true, account 5 has a balance of $30, so it is valid to transfer $20. Account 5 has $30 - $20 = $10, and account 1 has $10 + $20 = $30.
  bank.deposit(5, 20);     // return true, it is valid to deposit $20 to account 5. Account 5 has $10 + $20 = $30.
  bank.transfer(3, 4, 15); // return false, the current balance of account 3 is $10, so it is invalid to transfer $15 from it.
  bank.withdraw(10, 50);   // return false, it is invalid because account 10 does not exist.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == balance.length` </br>
🔹 `1 <= n, account, account1, account2 <= 10^5` </br>
🔹 `0 <= balance[i], money <= 10^12` </br>
🔹 At most `10^4` calls will be made to each function `transfer`, `deposit`, `withdraw`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Design** </br>
🔸 **Simulation** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/26%20-%2010%20-%202025%20---%202043.%20Simple%20Bank%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202043.%20Simple%20Bank%20System.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/26%20-%2010%20-%202025%20---%202043.%20Simple%20Bank%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202043.%20Simple%20Bank%20System.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/26%20-%2010%20-%202025%20---%202043.%20Simple%20Bank%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202043.%20Simple%20Bank%20System.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/10%20Oct%20%F0%9F%9B%95/26%20-%2010%20-%202025%20---%202043.%20Simple%20Bank%20System%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202043.%20Simple%20Bank%20System.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/e4d78158-c078-46f1-b218-1b68dedc202d" width = "700px" height="462px" />

</h1>
