# 945. Minimum Increment to Make Array Unique

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-increment-to-make-array-unique/?envType=daily-question&envId=2024-06-23"><strong>➥ ☢️ 945 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer array `nums`. In one move, you can pick an index `i` where `0 <= i < nums.length` and increment `nums[i]` by `1`.

### *Return the minimum number of moves to make every value in `nums` **unique***.

### The test cases are generated so that the answer fits in a 32-bit integer.

 
# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,2,2]

  ### Output  ➤ 1

  ### Explanation  ➤  After 1 move, the array could be [1, 2, 3].
</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [3,2,1,2,1,7]

  ### Output  ➤ 6

  ### Explanation ➤  After 6 moves, the array could be [3, 4, 1, 2, 5, 7].It can be shown with 5 or less moves that it is impossible for the array to have all unique values.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **0 <= nums[i] <= 10^5**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Greedy**
3. **Sorting**
4. **Counting**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/14%20-%2006%20-%202024%20---%20%20945.%20Minimum%20Increment%20to%20Make%20Array%20Unique%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_O(n)_945_MinimumIncrementToMakeArrayUnique..java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/14%20-%2006%20-%202024%20---%20%20945.%20Minimum%20Increment%20to%20Make%20Array%20Unique%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_945_MinimumIncrementToMakeArrayUnique.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/14%20-%2006%20-%202024%20---%20%20945.%20Minimum%20Increment%20to%20Make%20Array%20Unique%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_O(n)_945_MinimumIncrementToMakeArrayUnique.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/14%20-%2006%20-%202024%20---%20%20945.%20Minimum%20Increment%20to%20Make%20Array%20Unique%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_O(n)_945_MinimumIncrementToMakeArrayUnique.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/14%20-%2006%20-%202024%20---%20%20945.%20Minimum%20Increment%20to%20Make%20Array%20Unique%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_945_MinimumIncrementToMakeArrayUnique.c)  |

