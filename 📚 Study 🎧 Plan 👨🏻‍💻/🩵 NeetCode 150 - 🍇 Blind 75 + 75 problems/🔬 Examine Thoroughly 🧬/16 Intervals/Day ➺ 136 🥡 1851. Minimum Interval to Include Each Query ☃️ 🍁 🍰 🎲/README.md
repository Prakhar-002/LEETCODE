# 1851. Minimum Interval to Include Each Query

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-interval-to-include-each-query/description/"><strong>➥ 🫀 1851 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `intervals`, where `intervals[i] = [lefti, righti]` describes the ith interval starting at `lefti` and ending at `righti` (inclusive). The size of an interval is defined as the number of integers it contains, or more formally `righti - lefti + 1`.

### You are also given an integer array `queries`. The answer to the jth query is the size of the smallest interval i such that `lefti <= queries[j] <= righti`. If no such interval exists, the answer is -1.

### Return an array containing the answers to the queries.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `intervals = [[1,4],[2,4],[3,6],[4,4]], queries = [2,3,4,5]`

  ### 📤 `Output`  ➤ `[3,3,1,4]`

  ### 🔦 `Explanation`  ➤ ➺

  - The queries are processed as follows:
    - Query = 2: The interval `[2,4]` is the smallest interval containing 2. The answer is `4 - 2 + 1 = 3`.
    - Query = 3: The interval `[2,4]` is the smallest interval containing 3. The answer is `4 - 2 + 1 = 3`.
    - Query = 4: The interval `[4,4]` is the smallest interval containing 4. The answer is `4 - 4 + 1 = 1`.
    - Query = 5: The interval `[3,6]` is the smallest interval containing 5. The answer is `6 - 3 + 1 = 4`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `intervals = [[2,3],[2,5],[1,8],[20,25]], queries = [2,19,5,22]`

  ### 📤 `Output`  ➤ `[2,-1,4,6]`

  ### 🔦 `Explanation`  ➤ ➺

  - The queries are processed as follows:
    - Query = 2: The interval `[2,3]` is the smallest interval containing 2. The answer is `3 - 2 + 1 = 2`.
    - Query = 19: None of the intervals contain 19. The answer is -1.
    - Query = 5: The interval `[2,5]` is the smallest interval containing 5. The answer is `5 - 2 + 1 = 4`.
    - Query = 22: The interval `[20,25]` is the smallest interval containing 22. The answer is `25 - 20 + 1 = 6`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= intervals.length <= 10^5` </br>
🔹 `1 <= queries.length <= 10^5` </br>
🔹 `intervals[i].length == 2` </br>
🔹 `1 <= lefti <= righti <= 10^7` </br>
🔹 `1 <= queries[j] <= 10^7` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Binary Search** </br>
🔸 **Line Sweep** </br>
🔸 **Sorting** </br>
🔸 **Heap (Priority Queue)** </br>

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
