# 3573. Best Time to Buy and Sell Stock V

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock-v/description/?envType=daily-question&envId=2025-12-17"><strong>➥ ☢️ 3573 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `prices` where `prices[i]` is the price of a stock in dollars on the `i`‑th day, and an integer `k`. 

### You are allowed to make at most `k` transactions, where each transaction can be either:

- **Normal transaction**: Buy on day `i`, then sell on a later day `j` (`i < j`), profit = `prices[j] - prices[i]`.
- **Short selling transaction**: Sell on day `i`, then buy back on a later day `j` (`i < j`), profit = `prices[i] - prices[j]`.

### You must complete each transaction before starting another, and you **cannot** buy or sell on the same day you are selling or buying back from a previous transaction. 

### Return the **maximum total profit** you can earn by making at most `k` transactions.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  `prices = [1,7,9,8,2]`, `k = 2`

### 📤 `Output`  ➤ `14`

### 🔦 `Explanation`  ➤  
Two transactions:
- Normal: buy on day `0` for `1`, sell on day `2` for `9` → profit `9 - 1 = 8`.  
- Short: sell on day `3` for `8`, buy back on day `4` for `2` → profit `8 - 2 = 6`.  
Total profit = `8 + 6 = 14`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`prices = [12,16,19,19,8,1,19,13,9]`, `k = 3`

### 📤 `Output`  ➤ `36`

### 🔦 `Explanation` ➤  
Three transactions:
- Normal: buy on day `0` for `12`, sell on day `2` for `19` → profit `7`.  
- Short: sell on day `3` for `19`, buy back on day `4` for `8` → profit `11`.  
- Normal: buy on day `5` for `1`, sell on day `6` for `19` → profit `18`.  
Total profit = `7 + 11 + 18 = 36`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= prices.length <= 10^3` </br>
🔹 `1 <= prices[i] <= 10^9` </br>
🔹 `1 <= k <= prices.length / 2` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
