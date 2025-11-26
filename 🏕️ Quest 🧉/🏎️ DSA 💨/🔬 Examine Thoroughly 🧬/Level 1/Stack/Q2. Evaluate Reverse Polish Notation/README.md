# 150Q2. Evaluate Reverse Polish Notation

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=problem-list-v2&envId=dsa-linear-shoal-stack"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of strings `tokens` that represents an arithmetic expression in a **Reverse Polish Notation**.

### Evaluate the expression and return *an integer that represents the value of the expression*.

### Note that

- The valid operators are **'+'**, **'-'**, **'*'**, and **'/'**.

- Each operand may be an integer or another expression.

- The division between two integers always truncates toward zero.

- There will not be any division by zero.

- The input represents a **valid arithmetic expression** in a reverse Polish notation.

- The answer and all the intermediate calculations can be represented in a **32-bit integer**.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ tokens = ["2","1","+","3","*"]`

  ### 📤 `Output`  ➤ 9

  ### 🔦 `Explanation`  ➤  ((2 + 1) * 3) = 9

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ tokens = ["4","13","5","/","+"]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation` ➤  (4 + (13 / 5)) = 6

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]

  ### 📤 `Output`  ➤ 22

  ### 🔦 `Explanation`  ➤ 

```Js
    ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
    = ((10 * (6 / (12 * -11))) + 17) + 5
    = ((10 * (6 / -132)) + 17) + 5
    = ((10 * 0) + 17) + 5
    = (0 + 17) + 5
    = 17 + 5
    = 22
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **1 <= tokens.length <= 10<sup>4</sup>** </br>

🔹 **tokens[i] is either an operator: `"+"`, `"-"`, `"*"`, `"/"`, or an integer in the range `[-200, 200]`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Stack**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Stack/Q2.%20Evaluate%20Reverse%20Polish%20Notation/%F0%9F%8D%81JAVA%20-%20Evaluate%20Reverse%20Polish%20Notation.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Stack/Q2.%20Evaluate%20Reverse%20Polish%20Notation/%F0%9F%8E%B2CPP%20-%20Evaluate%20Reverse%20Polish%20Notation.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Stack/Q2.%20Evaluate%20Reverse%20Polish%20Notation/%F0%9F%8D%B0PYTHON%20-%20Evaluate%20Reverse%20Polish%20Notation.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%201/Stack/Q2.%20Evaluate%20Reverse%20Polish%20Notation/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Evaluate%20Reverse%20Polish%20Notation.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1e47c37d-435c-4953-9ab3-292104ce5130" width = "700px" height="462px" />

</h1>
