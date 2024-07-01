# 41. First Missing Positive

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/first-missing-positive/description/"><strong>➥ 🫀 41 Leetcode Que Hard 🫀 </strong></a>
</h2>

</br> 

# Description 📜 ˋ°•*⁀➷

### Given an unsorted integer array `nums`. Return *the smallest positive integer that is not present in `nums`*.

### You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,2,0]

  ### Output  ➤ 3

  ### Explanation  ➤ The numbers in the range [1,2] are all in the array.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [3,4,-1,1]

  ### Output  ➤ 2

  ### Explanation ➤ 1 is in the array but 2 is missing.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ nums = [7,8,9,11,12]

  ### Output  ➤ 1

  ### Explanation  ➤ The smallest positive integer 1 is missing.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10^5**
- **-2^31 <= nums[i] <= 2^31 - 1**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Hash Table**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2041.%20First%20Missing%20Positive%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_41_FirstMissingPositive.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2041.%20First%20Missing%20Positive%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_41_FirstMissingPositive.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2041.%20First%20Missing%20Positive%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_41_FirstMissingPositive.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2041.%20First%20Missing%20Positive%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_41_FirstMissingPositive.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8E%AD%20LEVEL%20wise%20que%20with%20solution%20%F0%9F%8E%AF/%F0%9F%AB%80%20Hard%20%F0%9F%AB%80/%F0%9F%AB%80%20Hard%2041.%20First%20Missing%20Positive%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_41_FirstMissingPositive.c)  |
