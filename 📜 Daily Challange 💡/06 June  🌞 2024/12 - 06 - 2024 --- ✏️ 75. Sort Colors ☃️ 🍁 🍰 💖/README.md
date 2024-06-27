# 75. Sort Colors

</br> 

<h2 align="center"> 

<a href="https://leetcode.com/problems/sort-colors/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 75 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array `nums` with `n` objects colored red, white, or blue, sort them [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

### We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.

### You must solve this problem without using the library's sort function.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [2,0,2,1,1,0]

  ### Output  ➤ [0,0,1,1,2,2]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  [2,0,1]

  ### Output  ➤ [0,1,2]

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **n == nums.length**
- **1 <= n <= 300**
- **`nums[i]` is either `0`, `1`, or `2`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Queue**
3. **Sliding Window**
4. **Heap (Priority Queue)**
5. **Ordered Set**
6. **Monotonic Queue**

# Follow up 🚨 ˋ°•*⁀➷

#### Could you come up with a one-pass algorithm using only constant extra space?


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/12%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%2075.%20Sort%20Colors%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%81JAVA_75_SortColors.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/12%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%2075.%20Sort%20Colors%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_75_SortColors.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/12%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%2075.%20Sort%20Colors%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_75_SortColors.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/12%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%2075.%20Sort%20Colors%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%92%96/%F0%9F%92%96C_75_SortColors.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/sort-colors/solutions/5301200/counting-sort-2-approach-both-beats-4-languages)  |
