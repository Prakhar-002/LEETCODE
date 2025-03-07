# 2523. Closest Prime Numbers in Range

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/closest-prime-numbers-in-range/description/?envType=daily-question&envId=2025-03-07"><strong>➥ ☢️ 2523 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given two positive integers `left` and `right`, find the two integers `num1` and `num2` such that:

- `left <= num1 < num2 <= right`
- Both `num1` and `num2` are **prime numbers**.
- `num2 - num1` is **the minimum** amongst all other pairs satisfying the above conditions.

### Return the positive integer array `ans = [num1, num2]`.

- If there are multiple pairs satisfying these conditions, return the one with the **smallest num1** value.
- If no such numbers exist, return `[-1, -1]`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ left = 10, right = 19

  ### 📤 `Output`  ➤ [11, 13]

  ### 🔦 `Explanation`  ➤ The prime numbers between `10` and `19` are `11`, `13`, `17`, and `19`.</br></br>The closest gap between any pair is `2`, which can be achieved by `[11,13]` or `[17,19]`.</br></br>Since `11` is smaller than `17`, we return the first pair.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ left = 4, right = 6

  ### 📤 `Output`  ➤ [-1,-1]

  ### 🔦 `Explanation` ➤ There exists only **one prime number** in the given range, so the conditions cannot be satisfied.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= left <= right <= 10⁶` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Number Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/07%20-%2003%20-%202025%20---%202523.%20Closest%20Prime%20Numbers%20in%20Range%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%202523.%20Closest%20Prime%20Numbers%20in%20Range.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/07%20-%2003%20-%202025%20---%202523.%20Closest%20Prime%20Numbers%20in%20Range%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%202523.%20Closest%20Prime%20Numbers%20in%20Range.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/07%20-%2003%20-%202025%20---%202523.%20Closest%20Prime%20Numbers%20in%20Range%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%202523.%20Closest%20Prime%20Numbers%20in%20Range.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/07%20-%2003%20-%202025%20---%202523.%20Closest%20Prime%20Numbers%20in%20Range%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202523.%20Closest%20Prime%20Numbers%20in%20Range.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/07%20-%2003%20-%202025%20---%202523.%20Closest%20Prime%20Numbers%20in%20Range%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%202523.%20Closest%20Prime%20Numbers%20in%20Range.c)  |
