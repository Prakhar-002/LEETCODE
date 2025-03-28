# 2503. Maximum Number of Points From Grid Queries

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/description/?envType=daily-question&envId=2025-03-28"><strong>➥ 🫀 2503 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `m x n` integer matrix `grid` and an array `queries` of size `k`.

Find an array `answer` of size `k` such that for each integer `queries[i]`, you start in the **top-left** cell of the matrix and repeat the following process:

1️⃣ If `queries[i]` is **strictly greater** than the value of the current cell that you are in, then:  
   - You **gain one point** if it's your first time visiting this cell.  
   - You can move **in all four directions**: up, down, left, and right.  

2️⃣ Otherwise, you **do not get any points**, and the process **ends**.  

After the process, `answer[i]` is the **maximum number of points** you can obtain.  
You are **allowed to revisit** the same cell for each query.

Return the resulting array `answer`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/5b9e135e-0f25-4825-8a40-993104ed5a3d" width="414px" height="110px" />

  ### 📥 `Input`  ➤ grid = [[1,2,3],[2,5,7],[3,5,1]], queries = [5,6,2]

  ### 📤 `Output`  ➤ [5,8,1]

  ### 🔦 `Explanation`  ➤ The diagrams above show which cells we visit to get points for each query.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/dd0d31a0-72c5-4954-aaf2-03ff8378a5df" width="151px" height="101px"/>

  ### 📥 `Input` ➤ grid = [[5,2,1],[1,1,2]], queries = [3]

  ### 📤 `Output`  ➤ [0]

  ### 🔦 `Explanation` ➤ We can not get any points because the value of the top left cell is already greater than or equal to 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1, 3, 5], [2, 4, 6]], queries = [4, 1, 7]

  ### 📤 `Output`  ➤ [2, 0, 6]

  ### 🔦 `Explanation`  ➤ * Query 4: Can visit [1, 2]. Answer is 2.
    * Query 1: Starting cell (1) not less than 1. Answer is 0.
    * Query 7: Can visit all cells. Answer is 6.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ grid = [[2, 3], [4, 5]], queries = [6, 3, 1]
   ### 📤 `Output`  ➤ [4, 1, 0]
   ### 🔦 `Explanation`  ➤
   *Query 6:
   Start at grid[0][0] which equals 2 and since 6 > 2, we get a point
   We can now visit grid[0][1] since 6 > 3 and get a point
   We can now visit grid[1][0] since 6 > 4 and get a point
   Lastly we visit grid[1][1] since 6 > 5 and get a point
   The result is 4

   *Query 3:
   Start at grid[0][0] which equals 2 and since 3 > 2, we get a point
   We can move to grid[0][1], but since 3 !> 3, then the process stops and the result is 1

   *Query 1:
   Start at grid[0][0] which equals 2 and since 1 !> 2, then the process stops and the result is 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `m == grid.length` </br>
🔹 `n == grid[i].length` </br>
🔹 `2 <= m, n <= 1000` </br>
🔹 4 <= m * n <= 10<sup>5</sup> </br>
🔹 `k == queries.length` </br>
🔹 1 <= k <= 10<sup>4</sup> </br>
🔹 1 <= grid[i][j], queries[i] <= 10<sup>6</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Two Pointers**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>
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
