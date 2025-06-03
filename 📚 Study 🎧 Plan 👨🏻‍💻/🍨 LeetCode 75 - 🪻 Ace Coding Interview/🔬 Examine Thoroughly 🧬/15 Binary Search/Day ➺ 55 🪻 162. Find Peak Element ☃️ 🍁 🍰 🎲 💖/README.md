# 162. Find Peak Element

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-peak-element/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 162 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A peak element is defined as an element in an array that is strictly greater than its immediate neighbors.

You are given a 0-indexed integer array `nums`. Your goal is to find any peak element within this array and return its index.

It is possible for an array to have multiple peak elements. Your function is allowed to return the index of any one of these peaks.

Important notes:

- You can imagine that `nums[-1] = nums[n] = -∞` (negative infinity). In effect, any element is always considered to be strictly greater than a nonexistent neighbor outside the array bounds.
- Your solution *must* have a time complexity of O(log n).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,1]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ 3 is a peak element and your function should return the index number 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [1,2,1,3,5,6,4]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= nums.length <= 1000 </br>

🔹 -2<sup>31</sup> <= nums[i] <= 2<sup>31</sup> - 1 </br>

🔹 nums[i] != nums[i + 1] for all valid i. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2055%20%F0%9F%AA%BB%20162.%20Find%20Peak%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20162.%20Find%20Peak%20Element.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2055%20%F0%9F%AA%BB%20162.%20Find%20Peak%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20162.%20Find%20Peak%20Element.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2055%20%F0%9F%AA%BB%20162.%20Find%20Peak%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20162.%20Find%20Peak%20Element.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2055%20%F0%9F%AA%BB%20162.%20Find%20Peak%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20162.%20Find%20Peak%20Element.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/15%20Binary%20Search/Day%20%E2%9E%BA%2055%20%F0%9F%AA%BB%20162.%20Find%20Peak%20Element%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20162.%20Find%20Peak%20Element.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ca7d510d-4bda-44a8-8703-a73030e6eb3c" width = "700px" height="462px" />

</h1>
