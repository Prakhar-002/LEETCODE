# 3652. Best Time to Buy and Sell Stock using Strategy

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ 3652 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two integer arrays `prices` and `strategy`, where:
- `prices[i]` is the price of a given stock on the `i`‑th day.
- `strategy[i]` represents a trading action on the `i`‑th day, where:
  - `-1` indicates buying one unit of the stock.
  - `0` indicates holding the stock.
  - `1` indicates selling one unit of the stock.

### You are also given an **even** integer `k`, and may perform **at most one** modification to `strategy`. A modification consists of:
- Selecting exactly `k` **consecutive** elements in `strategy`.
- Setting the **first** `k / 2` elements to `0` (hold).
- Setting the **last** `k / 2` elements to `1` (sell).

### The **profit** is defined as the sum of `strategy[i] * prices[i]` across all days. 

### Return the **maximum possible profit** you can achieve. 

### Note: There are **no constraints** on budget or stock ownership, so all buy and sell operations are feasible regardless of past actions.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`prices = [4,2,8]`, `strategy = [-1,0,1]`, `k = 2`

### 📤 `Output`  ➤ `10`

### 🔦 `Explanation`  ➤  

- Original: `[-1, 0, 1]`  
  Profit = `(-1 × 4) + (0 × 2) + (1 × 8) = -4 + 0 + 8 = 4`

- Modify `[0, 1]` → `[0, 1, 1]`  
  Profit = `(0 × 4) + (1 × 2) + (1 × 8) = 0 + 2 + 8 = 10`

- Modify `[1, 2]` → `[-1, 0, 1]`  
  Profit = `(-1 × 4) + (0 × 2) + (1 × 8) = 4`

Maximum possible profit is `10`, achieved by modifying subarray `[0, 1]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`prices = [5,4,3]`, `strategy = [1,1,0]`, `k = 2`

### 📤 `Output`  ➤ `9`

### 🔦 `Explanation` ➤  

- Original: `[1, 1, 0]`  
  Profit = `(1 × 5) + (1 × 4) + (0 × 3) = 5 + 4 + 0 = 9`

- Modify `[0, 1]` → `[0, 1, 0]`  
  Profit = `(0 × 5) + (1 × 4) + (0 × 3) = 0 + 4 + 0 = 4`

- Modify `[1, 2]` → `[1, 0, 1]`  
  Profit = `(1 × 5) + (0 × 4) + (1 × 3) = 5 + 0 + 3 = 8`

Maximum possible profit is `9`, achieved **without** any modification.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= prices.length == strategy.length <= 10^5` </br>
🔹 `1 <= prices[i] <= 10^5` </br>
🔹 `-1 <= strategy[i] <= 1` </br>
🔹 `2 <= k <= prices.length` </br>
🔹 `k` is **even** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Sliding Window** </br>
🔸 **Prefix Sum** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
