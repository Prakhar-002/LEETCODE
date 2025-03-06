# 2965. Find Missing and Repeated Values

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06"><strong>➥ ♻️ 2965 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 0-indexed 2D integer matrix `grid` of size `n * n` with values in the range `[1, n²]`.  
### Each integer appears exactly once **except**:

- One integer `a` appears **twice**.
- One integer `b` is **missing**.

### The task is to find the repeating and missing numbers `a` and `b`.

### Return a 0-indexed integer array `ans` of size 2 where:

- `ans[0]` equals to `a` (repeated number)
- `ans[1]` equals to `b` (missing number)

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ grid = [[1,3],[2,2]]

  ### 📤 `Output`  ➤ [2,4]

  ### 🔦 `Explanation`  ➤ Number `2` is repeated and number `4` is missing so the answer is `[2,4]`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[9,1,7],[8,9,2],[3,4,6]]

  ### 📤 `Output`  ➤ [9,5]

  ### 🔦 `Explanation` ➤ Number `9` is repeated and number `5` is missing so the answer is `[9,5]`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`2 <= n == grid.length == grid[i].length <= 50`** </br>
🔹 **`1 <= grid[i][j] <= n * n`** </br>
🔹 **For all `x` that `1 <= x <= n * n` there is exactly one `x` that is not equal to any of the grid members.** </br>
🔹 **For all `x` that `1 <= x <= n * n` there is exactly one `x` that is equal to exactly two of the grid members.** </br>
🔹 **For all `x` that `1 <= x <= n * n` except two of them there is exatly one pair of `i`, `j` that `0 <= i, j <= n - 1` and `grid[i][j] == x`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
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


