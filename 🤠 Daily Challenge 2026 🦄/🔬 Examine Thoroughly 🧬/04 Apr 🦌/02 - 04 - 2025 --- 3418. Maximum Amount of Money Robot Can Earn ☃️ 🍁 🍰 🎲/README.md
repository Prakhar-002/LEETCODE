# 3418. Maximum Amount of Money Robot Can Earn

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-amount-of-money-robot-can-earn/description/?envType=daily-question&envId=2026-04-02"><strong>➥ ☢️ 3418 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷
### You are given an `m x n` grid. A robot starts at the **top-left corner** `(0, 0)` and wants to reach the **bottom-right corner** `(m - 1, n - 1)`. The robot can move either **right** or **down** at any point in time.
### The grid contains a value `coins[i][j]` in each cell:
### &nbsp;&nbsp;&nbsp;&nbsp;• If `coins[i][j] >= 0`, the robot **gains** that many coins.
### &nbsp;&nbsp;&nbsp;&nbsp;• If `coins[i][j] < 0`, the robot encounters a **robber**, and the robber **steals** the absolute value of `coins[i][j]` coins.
### The robot has a special ability to **neutralize robbers** in **at most 2 cells** on its path, preventing them from stealing coins in those cells.
### **Note:** The robot's total coins can be **negative**.
### Return the **maximum profit** the robot can gain on the route.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  ### 📥 `Input`  ➤ coins = [[0,1,-1],[1,-2,3],[2,-3,4]]
  ### 📤 `Output`  ➤ 8
  ### 🔦 `Explanation`  ➤ Path: `(0,0)`→`(0,1)`→`(1,1)`→`(1,2)`→`(2,2)`. Neutralize robber at `(1,1)`. Coins collected: `0+1+0+3+4 = 8`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷
  ### 📥 `Input` ➤ coins = [[10,10,10],[10,10,10]]
  ### 📤 `Output`  ➤ 40
  ### 🔦 `Explanation` ➤ Path: `(0,0)`→`(0,1)`→`(0,2)`→`(1,2)`. All values are positive so no neutralization needed. Coins collected: `10+10+10+10 = 40`.

</br>

# Constraints 🔒 ˋ°•*⁀➷
🔹 `m == coins.length` </br>
🔹 `n == coins[i].length` </br>
🔹 `1 <= m, n <= 500` </br>
🔹 `-1000 <= coins[i][j] <= 1000` </br>

</br>

# Topics 📋 ˋ°•*⁀➷
🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Matrix** </br>

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
