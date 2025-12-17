# 3562. Maximum Profit from Trading Stocks with Discounts

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-profit-from-trading-stocks-with-discounts/description/?envType=daily-question&envId=2025-12-17"><strong>➥ 🫀 3562 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `n`, representing the number of employees in a company. Each employee has a unique ID from `1` to `n`, and employee `1` is the CEO. You are also given two 1-based integer arrays `present` and `future`, each of length `n`, where:
- `present[i]` represents the **current** price at which the `i`‑th employee can buy a stock today.
- `future[i]` represents the **expected** price at which the `i`‑th employee can sell the stock tomorrow.

### The company hierarchy is represented by a 2D integer array `hierarchy`, where `hierarchy[i] = [uᵢ, vᵢ]` means that employee `uᵢ` is the **direct boss** of employee `vᵢ`. 

### Additionally, you are given an integer `budget` representing the total funds available for investment.

### The company has a discount policy: if an employee’s direct boss purchases their own stock, then the employee can buy their stock at **half** the original price (`floor(present[v] / 2)`). You may buy each stock **at most once**, and you **cannot** use any profit earned from future stock prices to fund additional investments (only the initial `budget` can be used).

### Return the **maximum profit** that can be achieved without exceeding the given `budget`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤  
`n = 2`  
`present = [1,2]`  
`future = [4,3]`  
`hierarchy = [[1,2]]`  
`budget = 3`

### 📤 `Output`  ➤ `5`

### 🔦 `Explanation`  ➤  
Employee `1` buys at price `1` → profit `4 - 1 = 3`.  
Since employee `1` is the direct boss of employee `2`, employee `2` gets discounted price `floor(2 / 2) = 1` → profit `3 - 1 = 2`.  
Total cost `1 + 1 = 2 <= budget`, total profit `3 + 2 = 5`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 2`  
`present = [3,4]`  
`future = [5,8]`  
`hierarchy = [[1,2]]`  
`budget = 4`

### 📤 `Output`  ➤ `4`

### 🔦 `Explanation` ➤  
The best choice is for employee `2` to buy at price `4` → profit `8 - 4 = 4`.  
Both employees cannot buy together within the given budget, so the maximum profit is `4`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 3`  
`present = [4,6,8]`  
`future = [7,9,11]`  
`hierarchy = [[1,2],[1,3]]`  
`budget = 10`

### 📤 `Output`  ➤ `10`

### 🔦 `Explanation` ➤  
Employee `1` buys at price `4` → profit `7 - 4 = 3`.  
Employee `3` gets discounted price `floor(8 / 2) = 4` → profit `11 - 4 = 7`.  
Total cost `4 + 4 = 8 <= budget`, total profit `3 + 7 = 10`.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤  
`n = 3`  
`present = [5,2,3]`  
`future = [8,5,6]`  
`hierarchy = [[1,2],[2,3]]`  
`budget = 7`

### 📤 `Output`  ➤ `12`

### 🔦 `Explanation` ➤  
Employee `1` buys at price `5` → profit `8 - 5 = 3`.  
Employee `2` gets discounted price `floor(2 / 2) = 1` → profit `5 - 1 = 4`.  
Employee `3` gets discounted price `floor(3 / 2) = 1` → profit `6 - 1 = 5`.  
Total cost `5 + 1 + 1 = 7 <= budget`, total profit `3 + 4 + 5 = 12`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= n <= 160` </br>
🔹 `present.length == future.length == n` </br>
🔹 `1 <= present[i], future[i] <= 50` </br>
🔹 `hierarchy.length == n - 1` </br>
🔹 `hierarchy[i] == [uᵢ, vᵢ]` </br>
🔹 `1 <= uᵢ, vᵢ <= n` </br>
🔹 `uᵢ != vᵢ` </br>
🔹 `1 <= budget <= 160` </br>
🔹 There are no duplicate edges. </br>
🔹 Employee `1` is the direct or indirect boss of every employee. </br>
🔹 The input graph `hierarchy` has no cycles. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Tree** </br>
🔸 **Depth-First Search** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/16%20-%2012%20-%202025%20---%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Discounts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Dis.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/16%20-%2012%20-%202025%20---%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Discounts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Disco.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/16%20-%2012%20-%202025%20---%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Discounts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Dis.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/16%20-%2012%20-%202025%20---%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with%20Discounts%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203562.%20Maximum%20Profit%20from%20Trading%20Stocks%20with.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/38a2dc57-65ce-49ef-a4fc-3a50a9895a17" width = "700px" height="462px" />

</h1>
