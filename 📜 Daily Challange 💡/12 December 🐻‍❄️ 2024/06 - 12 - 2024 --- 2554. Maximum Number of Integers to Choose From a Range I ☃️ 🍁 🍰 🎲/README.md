# 2554. Maximum Number of Integers to Choose From a Range I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/?envType=daily-question&envId=2024-12-06"><strong>➥ ☢️ 2554 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `banned` and two integers `n` and `maxSum`. You are choosing some number of integers following the below rules:

- The chosen integers have to be in the range `[1, n]`.

- Each integer can be chosen `at most once`.

- The chosen integers should not be in the array `banned`.

- The sum of the chosen integers should not exceed `maxSum`.

### Return the maximum number of integers you can choose following the mentioned rules.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ banned = [1,6,5], n = 5, maxSum = 6

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ ➺ You can choose the integers 2 and 4.</br> 2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤ You cannot choose any integer while following the mentioned conditions.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  banned = [11], n = 7, maxSum = 50

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation`  ➤ You can choose the integers 1, 2, 3, 4, 5, 6, and 7.</br> They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= banned.length <= 10<sup>4</sup>** </br>

🔹 **1 <= banned[i], n <= 10<sup>4</sup>** </br>

🔹 **1 <= maxSum <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Binary Search**  </br>
🔸 **Greedy**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
