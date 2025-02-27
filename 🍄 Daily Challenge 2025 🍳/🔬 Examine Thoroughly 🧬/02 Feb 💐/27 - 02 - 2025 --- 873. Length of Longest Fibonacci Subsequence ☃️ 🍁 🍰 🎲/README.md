# 873. Length of Longest Fibonacci Subsequence

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/?envType=daily-question&envId=2025-02-27"><strong>➥ ☢️ 873 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A sequence x1, x2, ..., xn is *Fibonacci-like* if:

- n >= 3

- xi + xi+1 == xi+2 for all i + 2 <= n

### Given a strictly increasing array `arr` of positive integers forming a sequence, return *the length of the longest Fibonacci-like subsequence of* `arr`. If one does not exist, return `0`.

### A subsequence is derived from another sequence `arr` by deleting any number of elements (including none) from `arr`, without changing the order of the remaining elements. For example, `[3, 5, 8]` is a subsequence of `[3, 4, 5, 6, 7, 8]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤  arr = [1,2,3,4,5,6,7,8]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤ The longest subsequence that is fibonacci-like: [1,2,3,5,8].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ arr = [1,3,7,11,12,14,18]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ The longest subsequence that is fibonacci-like: [1,11,12], [3,11,14] or [7,11,18].

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= arr.length <= 1000`** </br>

🔹 **1 <= arr[i] < arr[i + 1] <= 10<sup>9</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/27%20-%2002%20-%202025%20---%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/27%20-%2002%20-%202025%20---%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/27%20-%2002%20-%202025%20---%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/02%20Feb%20%F0%9F%92%90/27%20-%2002%20-%202025%20---%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20873.%20Length%20of%20Longest%20Fibonacci%20Subsequence.js) |
