# 241. Different Ways to Add Parentheses

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/different-ways-to-add-parentheses/description/?envType=daily-question&envId=2024-09-19"><strong>➥ ☢️ 241 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `expression` of numbers and operators, return *all possible results from computing all the different possible ways to group numbers and operators*. You may return the answer in `any order`.

### The test cases are generated such that the output values fit in a 32-bit integer and the number of different results does not exceed 10<sup>4</sup>.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ expression = "2-1-1"

  ### 📤 `Output`  ➤ [0,2]

  ### 🔦 `Explanation`  ➤ ➺
  
        ➺ ((2-1)-1) = 0 

        ➺ (2-(1-1)) = 2

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ expression = "2*3-4*5"

  ### 📤 `Output`  ➤ [-34,-14,-10,-10,10]

  ### 🔦 `Explanation` ➤ 

      ➺ (2*(3-(4*5))) = -34 

      ➺ ((2*3)-(4*5)) = -14 
      
      ➺ ((2*(3-4))*5) = -10 
      
      ➺ (2*((3-4)*5)) = -10 
      
      ➺ (((2*3)-4)*5) = 10

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= expression.length <= 20`** </br>

🔹 **`expression` consists of digits and the operator `'+'`, `'-'`, and `'*'`.** </br>

🔹 **All the integer values in the input expression are in the range `[0, 99]`.** </br>

🔹 **The integer values in the input expression do not have a leading `'-'` or `'+'` denoting the sign.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **String**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Recursion**  </br>
🔸 **Memoization**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/19%20-%2009%20-%202024%20---%20241.%20Different%20Ways%20to%20Add%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20241.%20Different%20Ways%20to%20Add%20Parentheses.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/19%20-%2009%20-%202024%20---%20241.%20Different%20Ways%20to%20Add%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20241.%20Different%20Ways%20to%20Add%20Parentheses.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/19%20-%2009%20-%202024%20---%20241.%20Different%20Ways%20to%20Add%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20241.%20Different%20Ways%20to%20Add%20Parentheses.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/19%20-%2009%20-%202024%20---%20241.%20Different%20Ways%20to%20Add%20Parentheses%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20241.%20Different%20Ways%20to%20Add%20Parentheses.js) |

