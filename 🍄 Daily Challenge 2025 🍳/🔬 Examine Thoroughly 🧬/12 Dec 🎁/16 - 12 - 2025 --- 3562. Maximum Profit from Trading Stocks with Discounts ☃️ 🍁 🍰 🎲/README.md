# 

</br>

<h2 align="center"> 

<a href=""><strong>➥ ☢️ ---- Leetcode Medium ☢️ </strong></a>
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
