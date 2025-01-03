# 2270. Number of Ways to Split Array

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/number-of-ways-to-split-array/description/?envType=daily-question&envId=2025-01-03"><strong>➥ ☢️ 2270 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a `0-indexed` integer array `nums` of length `n`.

### `nums` contains a `valid split` at index `i` if the following are true:

- The sum of the first `i + 1` elements is **greater than or equal** to the sum of the last `n - i - 1` elements.

- There is **at least one** element to the right of `i`. That is, `0 <= i < n - 1`.

### Return *the number of valid splits in `nums`*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [10,4,-8,7]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ There are three ways of splitting nums into two non-empty parts:

➺ Split nums at index 0. Then, the first part is [10], and its sum is 10. The second part is [4,-8,7], and its sum is 3. Since 10 >= 3, i = 0 is a valid split.

➺ Split nums at index 1. Then, the first part is [10,4], and its sum is 14. The second part is [-8,7], and its sum is -1. Since 14 >= -1, i = 1 is a valid split.

➺ Split nums at index 2. Then, the first part is [10,4,-8], and its sum is 6. The second part is [7], and its sum is 7. Since 6 < 7, i = 2 is not a valid split.

Thus, the number of valid splits in nums is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,3,1,0]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ There are two valid splits in nums:

➺ Split nums at index 1. Then, the first part is [2,3], and its sum is 5. The second part is [1,0], and its sum is 1. Since 5 >= 1, i = 1 is a valid split. 

➺ Split nums at index 2. Then, the first part is [2,3,1], and its sum is 6. The second part is [0], and its sum is 0. Since 6 >= 0, i = 2 is a valid split.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= nums.length <= 10<sup>5</sup>** </br>

🔹 **-105 <= nums[i] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Prefix Sum**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/03%20-%2001%20-%202025%20---%20%202270.%20Number%20of%20Ways%20to%20Split%20Array%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202270.%20Number%20of%20Ways%20to%20Split%20Array.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/03%20-%2001%20-%202025%20---%20%202270.%20Number%20of%20Ways%20to%20Split%20Array%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202270.%20Number%20of%20Ways%20to%20Split%20Array.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/03%20-%2001%20-%202025%20---%20%202270.%20Number%20of%20Ways%20to%20Split%20Array%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202270.%20Number%20of%20Ways%20to%20Split%20Array.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/03%20-%2001%20-%202025%20---%20%202270.%20Number%20of%20Ways%20to%20Split%20Array%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202270.%20Number%20of%20Ways%20to%20Split%20Array.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/01%20Jan%20%F0%9F%AA%BC/03%20-%2001%20-%202025%20---%20%202270.%20Number%20of%20Ways%20to%20Split%20Array%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202270.%20Number%20of%20Ways%20to%20Split%20Array.c)  |
