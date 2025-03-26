# 2033. Minimum Operations to Make a Uni-Value Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/description/?envType=daily-question&envId=2025-03-26"><strong>➥ ☢️ 2033 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a **2D integer grid** of size `m x n` and an integer `x`.  

In one operation, you can **add** `x` to or **subtract** `x` from any element in the grid.  

A **uni-value grid** is a grid where **all the elements are equal**.  

### 🔹 Task:

- Return the **minimum number of operations** required to make the grid **uni-value**.
- If it is **not possible**, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [[2,4],[6,8]], x = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ We can make every element equal to 4 by doing the following: 
- Add x to 2 once.
- Subtract x from 6 once.
- Subtract x from 8 twice.
A total of 4 operations were used.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,5],[2,3]], x = 1

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ We can make every element equal to 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,2],[3,4]], x = 2

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ It is impossible to make every element equal.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,3,5],[7,9,11]], x = 2

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation`  ➤ If make element become 7 using '2', then all become same only minimum operations

  [1,3,5]
	[7,9,11]

	=> [7,7,7,7,7,7] the operations count as | 1-7 |/2 + |3-7|/2+ |5-7|/2 + |7-7|/2 +| 9-7|/2 + | 11-7|/2 => 3+2+1+0+1+2 = 9

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `m == grid.length` </br>
🔹 `n == grid[i].length` </br>
🔹 1 <= m, n <= 10<sup>5</sup> </br>
🔹 1 <= m * n <= 10<sup>5</sup> </br>
🔹 1 <= x, grid[i][j] <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Sorting**  </br>
🔸 **Matrix**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
