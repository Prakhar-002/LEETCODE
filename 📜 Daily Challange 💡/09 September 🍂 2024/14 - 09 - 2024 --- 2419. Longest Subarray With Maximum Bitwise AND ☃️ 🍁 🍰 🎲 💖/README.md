# 2419. Longest Subarray With Maximum Bitwise AND

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/description/?envType=daily-question&envId=2024-09-14"><strong>➥ ☢️ 2419 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums` of size `n`.

### Consider a `non-empty` subarray from `nums` that has the `maximum` possible `bitwise AND`.

- In other words, let `k` be the maximum value of the bitwise AND of `any` subarray of `nums`. Then, only subarrays with a bitwise AND equal to `k` should be considered.

### Return *the length of the `longest` such subarray*.

### The bitwise AND of an array is the bitwise AND of all the numbers in it.

### A subarray is a contiguous sequence of elements within an arr

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [1,2,3,3,2,2]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ 

    ➺ The maximum possible bitwise AND of a subarray is 3.
    
    ➺ The longest subarray with that value is [3,3], so we return 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  nums = [1,2,3,4]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ 

    ➺ The maximum possible bitwise AND of a subarray is 4.

    ➺ The longest subarray with that value is [4], so we return 1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **1 <= nums[i] <= 10<sup>6</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Brainteaser**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/14%20-%2009%20-%202024%20---%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/14%20-%2009%20-%202024%20---%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/14%20-%2009%20-%202024%20---%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/14%20-%2009%20-%202024%20---%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/14%20-%2009%20-%202024%20---%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202419.%20Longest%20Subarray%20With%20Maximum%20Bitwise%20AND.c)  |
