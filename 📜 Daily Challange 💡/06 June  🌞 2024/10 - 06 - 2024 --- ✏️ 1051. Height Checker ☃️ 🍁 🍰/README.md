# 1051. Height Checker
</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/height-checker/?envType=daily-question&envId=2024-06-23"><strong>➥ ♻️ 1051 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in `non-decreasing order` by height. Let this ordering be represented by the integer array `expected` where `expected[i]` is the expected height of the ith student in line.

### You are given an integer array `heights` representing the current order that the students are standing in. Each `heights[i]` is the height of the `ith` student in line `(0-indexed)`.

### Return the `number of indices` where `heights[i] != expected[i]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ heights = [1,1,4,2,1,3]

  ### Output  ➤ 3

  ### Explanation  ➤ </br> heights:  [1,1,_4,2,_1,_3] </br> expected: [1,1,_1,2,_3,_4] </br>  Indices 2, 4, and 5 do not match.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤ heights = [5,1,2,3,4]

  ### Output  ➤ 5

  ### Explanation ➤ 

    heights:  [5,1,2,3,4]
    expected: [1,2,3,4,5]
    All indices do not match.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ heights = [1,2,3,4,5]

  ### Output  ➤ 0

  ### Explanation ➤ 

    heights:  [1,2,3,4,5]
    expected: [1,2,3,4,5]
    All indices match.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= heights.length <= 100**
- **1 <= heights[i] <= 100**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Array**
2. **Sorting**
3. **SCounting Sort**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/10%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201051.%20Height%20Checker%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%81JAVA_O(n)_1051_HeightChecker.java) |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/10%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201051.%20Height%20Checker%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%8D%B0PYTHON_O(n)_1051_HeightChecker.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/10%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201051.%20Height%20Checker%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%E2%98%83%EF%B8%8FJAVASCRIPT_O(n)_1051_HeightChecker.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/10%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%201051.%20Height%20Checker%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0/%F0%9F%92%96C_1051_HeightChecker.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/height-checker/solutions/5288059/100-beats-two-approach-true-explanation-beginner-friendly-4-lang)  |
