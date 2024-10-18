# 2044. Count Number of Maximum Bitwise-OR Subsets

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/description/?envType=daily-question&envId=2024-10-18"><strong>➥ ☢️ 2044 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an integer array `nums`, find the `maximum` possible `bitwise` `OR` of a subset of `nums` and return *`the number of different non-empty subsets` with the maximum bitwise OR*.

### An array `a` is a `subset` of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`. Two subsets are considered `different` if the indices of the elements chosen are different.

### The bitwise OR of an array `a` is equal to `a[0] OR a[1] OR ... OR a[a.length - 1]` (0-indexed).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ nums = [3,1]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤ The maximum possible bitwise OR of a subset is 3. There are 2 subsets with a bitwise OR of 3:

    ➺ [3]
    ➺ [3,1]

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [2,2,2]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ All non-empty subsets of [2,2,2] have a bitwise OR of 2. There are 23 - 1 = 7 total subsets.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = [3,2,1,5]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ The maximum possible bitwise OR of a subset is 7. There are 6 subsets with a bitwise OR of 7:

    ➺ [3,5]
    ➺ [3,1,5]
    ➺ [3,2,5]
    ➺ [3,2,1,5]
    ➺ [2,5]
    ➺ [2,1,5]

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= nums.length <= 16`** </br>

🔹 **1 <= nums[i] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Backtracking**  </br>
🔸 **Bit Manipulation**  </br>
🔸 **Enumeration**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/18%20-%2010%20-%202024%20---%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/18%20-%2010%20-%202024%20---%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/18%20-%2010%20-%202024%20---%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/18%20-%2010%20-%202024%20---%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202044.%20Count%20Number%20of%20Maximum%20Bitwise-OR%20Subsets.js) |



