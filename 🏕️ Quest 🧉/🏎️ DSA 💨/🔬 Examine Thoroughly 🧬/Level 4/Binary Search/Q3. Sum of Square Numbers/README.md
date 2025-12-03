# Q3. Sum of Square Numbers

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/sum-of-square-numbers/description/?envType=problem-list-v2&envId=dsa-sorting-plateau-binary-search"><strong>➥ ☢️ Q3 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a non-negative integer `c`, decide whether there're two integers `a` and `b` such that `a^2 + b^2 = c`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ c = 5

  ### Output  ➤ true

  ### Explanation  ➤ 1 * 1 + 2 * 2 = 5

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  c = 3

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **0 <= c <= 231 - 1**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Math**
2. **Two Pointers**
3. **Binary Search**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/17%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20633.%20Sum%20of%20Square%20Numbers%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA_633_SumOfSquareNumbers.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/17%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20633.%20Sum%20of%20Square%20Numbers%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP_633_SumOfSquareNumbers.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/17%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20633.%20Sum%20of%20Square%20Numbers%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON_633_SumOfSquareNumbers.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/17%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20633.%20Sum%20of%20Square%20Numbers%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT_633_SumOfSquareNumbers.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/06%20June%20%20%F0%9F%8C%9E%202024/17%20-%2006%20-%202024%20---%20%E2%9C%8F%EF%B8%8F%20633.%20Sum%20of%20Square%20Numbers%20%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C_633_SumOfSquareNumbers.c)  |
|  [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️](https://leetcode.com/problems/sum-of-square-numbers/solutions/5325268/only-basic-binary-search-beats-with-proof-beginner-friendly-5-language)  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/82f256cd-e07f-4366-80cf-38d65196e53a" width = "700px" height="462px" />

</h1>
