# 78. Subsets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/subsets/description/?envType=daily-question&envId=2024-05-21"><strong>➥ ☢️ 78 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array nums of `unique` elements, return all possible subsets (the power set).

### The solution set `must not` contain duplicate subsets. Return the solution in `any order`.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ nums = [1,2,3]

  ### Output  ➤ [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  nums = [0]

  ### Output  ➤[[],[0]] 

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= nums.length <= 10**
- **-10 <= nums[i] <= 10**
- **All the numbers of nums are `unique`.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Backtracking**
3. **Bit Manipulation**

</br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2069%20%F0%9F%A5%A1%2078.%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%2078.%20Subsets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2069%20%F0%9F%A5%A1%2078.%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%2078.%20Subsets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2069%20%F0%9F%A5%A1%2078.%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%2078.%20Subsets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Backtracking/Day%20%E2%9E%BA%2069%20%F0%9F%A5%A1%2078.%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%2078.%20Subsets.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/9b2f32ea-6056-4f76-bb33-8a1ad8340295" width = "700px" height="462px" />

</h1>
