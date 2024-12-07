# 2226. Maximum Candies Allocated to K Children

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-candies-allocated-to-k-children/"><strong>➥ ☢️ 2226 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` integer array `candies`. Each element in the array denotes a pile of candies of size `candies[i]`. You can divide each pile into any number of `sub piles`, but you `cannot` merge two piles together.

### You are also given an integer `k`. You should allocate piles of candies to `k` children such that each child gets the `same` number of candies. Each child can take `at most one` pile of candies and some piles of candies may go unused.

### Return *the `maximum number of candies` each child can get*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ candies = [5,8,6], k = 3

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ We can divide candies[1] into 2 piles of size 5 and 3, and candies[2] into 2 piles of size 5 and 1. We now have five piles of candies of sizes 5, 5, 3, 5, and 1. We can allocate the 3 piles of size 5 to 3 children. It can be proven that each child cannot receive more than 5 candies.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ candies = [2,5], k = 11

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤  There are 11 children but only 7 candies in total, so it is impossible to ensure each child receives at least one candy. Thus, each child gets no candy and the answer is 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= candies.length <= 10<sup>5</sup>** </br>

🔹 **1 <= candies[i] <= 10<sup>7</sup>** </br>

🔹 **1 <= k <= 10<sup>12</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
