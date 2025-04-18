# 2551. Put Marbles in Bags

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/put-marbles-in-bags/description/?envType=daily-question&envId=2025-03-31"><strong>➥ 🫀 2551 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You have `k` bags and are given a 0-indexed integer array `weights` where `weights[i]` is the weight of the i<sup>th</sup> marble. The objective is to divide the marbles into the `k` bags according to the following rules:

- No bag is empty.

- If the i<sup>th</sup> marble and j<sup>th</sup> marble are in a bag, then all marbles with an index between the i<sup>th</sup> and j<sup>th</sup> indices should also be in that same bag.

- If a bag consists of all the marbles with an index from `i` to `j` inclusively, then the cost of the bag is `weights[i] + weights[j]`.

The **score** after distributing the marbles is the sum of the costs of all the `k` bags. 

Your task is to return *the **difference** between the **maximum** and **minimum** scores possible among all valid marble distributions*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ weights = [1,3,5,1], k = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The distribution [1],[3,5,1] results in the minimal score of (1+1) + (3+1) = 6.  The distribution [1,3],[5,1], results in the maximal score of (1+3) + (5+1) = 10.  Thus, we return their difference 10 - 6 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ weights = [1, 3], k = 2

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ The only distribution possible is [1],[3].  Since both the maximal and minimal score are the same, we return 0.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ weights = [4, 5, 6, 7, 8], k = 3

  ### 📤 `Output`  ➤ 11

  ### 🔦 `Explanation`  ➤ Minimal score: [4],[5],[6,7,8] -> (4+4) + (5+5) + (6+8) = 8+10+14 = 32. Maximal score: [4,5,6],[7],[8] -> (4+6) + (7+7) + (8+8) = 10 + 14 + 16 = 40 . Difference is 40-32 = 11 .

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

   ### 📥 `Input`  ➤ weights = [1, 4, 2, 5], k = 4

   ### 📤 `Output`  ➤ 0

   ### 🔦 `Explanation`  ➤ Since k number is equal of numbers of element . they has each single bucket array which ends up become '0'

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= weights.length <= 10<sup>5</sup> </br>

🔹 1 <= weights[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/31%20-%2003%20-%202025%20---%202551.%20Put%20Marbles%20in%20Bags%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202551.%20Put%20Marbles%20in%20Bags.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/31%20-%2003%20-%202025%20---%202551.%20Put%20Marbles%20in%20Bags%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202551.%20Put%20Marbles%20in%20Bags.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/31%20-%2003%20-%202025%20---%202551.%20Put%20Marbles%20in%20Bags%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202551.%20Put%20Marbles%20in%20Bags.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/31%20-%2003%20-%202025%20---%202551.%20Put%20Marbles%20in%20Bags%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202551.%20Put%20Marbles%20in%20Bags.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/a15bbd34-7fdf-4f3d-b90d-d79b7a27f790" width = "700px" height="462px" />

</h1>
