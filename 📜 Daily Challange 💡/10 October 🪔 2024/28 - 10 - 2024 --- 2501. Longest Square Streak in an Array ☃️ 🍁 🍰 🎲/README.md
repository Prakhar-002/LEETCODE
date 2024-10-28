# 2501. Longest Square Streak in an Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-square-streak-in-an-array/description/?envType=daily-question&envId=2024-10-28"><strong>➥ ☢️ 2501 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. A subsequence of `nums` is called a `square streak` if:

- The length of the subsequence is at least `2`, and

- `after` sorting the subsequence, each element (except the first element) is the `square` of the previous number.

### Return *the length of the `longest square streak` in nums, or return `-1` if there is no `square streak`*.

### A `subsequence` is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [4,3,6,16,8,2]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤ Choose the subsequence [4,16,2]. After sorting it, it becomes [2,4,16].

    ➺ 4 = 2 * 2.
    ➺ 16 = 4 * 4.
    Therefore, [4,16,2] is a square streak.
    It can be shown that every subsequence of length 4 is not a square streak.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,3,5,6,7]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ There is no square streak in nums so return -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **2 <= nums[i] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Binary Search**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |