# 2529. Maximum Count of Positive Integer and Negative Integer

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12"><strong>➥ ♻️ 2529 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a **sorted** array `nums` in **non-decreasing order**.  

- **Return** the **maximum** count between the number of **positive** integers and **negative** integers.
- **0 is neither positive nor negative**.

🔹 If `pos` is the number of **positive** integers and `neg` is the number of **negative** integers, return `max(pos, neg)`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[-2, -1, -1, 1, 2, 3]`

  ### 📤 `Output` ➤ `3`

  ### 🔦 `Explanation` ➤ 
- **Positive integers**: `1, 2, 3` → **count = 3**
- **Negative integers**: `-2, -1, -1` → **count = 3**
- **Maximum count** = `max(3, 3) = 3`

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[-3, -2, -1, 0, 0, 1, 2]`

  ### 📤 `Output` ➤ `3`

  ### 🔦 `Explanation` ➤ 
- **Positive integers**: `1, 2` → **count = 2**
- **Negative integers**: `-3, -2, -1` → **count = 3**
- **Maximum count** = `max(2, 3) = 3`

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ nums = `[5, 20, 66, 1314]`

  ### 📤 `Output` ➤ `4`

  ### 🔦 `Explanation` ➤ 
- **Positive integers**: `5, 20, 66, 1314` → **count = 4**
- **Negative integers**: `0`
- **Maximum count** = `max(4, 0) = 4`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= nums.length <= 2000` </br>
🔹 `-2000 <= nums[i] <= 2000` </br>
🔹 `nums` is **sorted in non-decreasing order**. </br>

</br>

# Follow-Up 💡 ˋ°•*⁀➷

🔹 **Can you solve this problem in O(log n) time complexity?** 🤔

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/12%20-%2003%20-%202025%20---%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Negative%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202529.%20Maximum%20Count%20of%20Positive%20Integer%20a.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/12%20-%2003%20-%202025%20---%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Negative%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/12%20-%2003%20-%202025%20---%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Negative%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202529.%20Maximum%20Count%20of%20Positive%20Integer%20a.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/12%20-%2003%20-%202025%20---%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Negative%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202529.%20Maximum%20Count%20of%20Positive%20Integ.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/12%20-%2003%20-%202025%20---%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Negative%20Integer%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202529.%20Maximum%20Count%20of%20Positive%20Integer%20and%20Neg.c)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/24a0b409-51fc-4d52-b1e6-60360516bb9f" width = "700px" height="462px" />

</h1>
