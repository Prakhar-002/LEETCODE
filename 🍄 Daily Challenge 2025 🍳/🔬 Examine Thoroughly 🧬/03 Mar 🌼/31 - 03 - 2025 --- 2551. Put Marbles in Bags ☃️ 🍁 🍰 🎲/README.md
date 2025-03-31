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

  ### 🔦 `Explanation`  ➤
The distribution [1],[3,5,1] results in the minimal score of (1+1) + (3+1) = 6.
The distribution [1,3],[5,1], results in the maximal score of (1+3) + (5+1) = 10.
Thus, we return their difference 10 - 6 = 4.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ weights = [1, 3], k = 2

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤
The only distribution possible is [1],[3].
Since both the maximal and minimal score are the same, we return 0.

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
