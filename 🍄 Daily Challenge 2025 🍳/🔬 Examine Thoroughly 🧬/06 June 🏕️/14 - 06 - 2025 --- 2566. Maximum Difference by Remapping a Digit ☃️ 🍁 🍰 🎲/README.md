# 2566. Maximum Difference by Remapping a Digit

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/description/?envType=daily-question&envId=2025-06-14"><strong>➥ ♻️ 2566 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `num`.  Bob is planning a sneaky trick: he will remap one of the ten possible digits (0 to 9) to another digit.

### Your goal is to return the difference between the *maximum* and *minimum* values that Bob can create by remapping exactly one digit within `num`.

### Important notes:

- When Bob remaps a digit `d1` to another digit `d2`, every instance of the digit `d1` in `num` is replaced with `d2`.
- Bob is allowed to remap a digit to itself, meaning `num` could remain unchanged.
- Bob may use a different digit mapping to obtain the minimum and maximum values.
- The resulting number after the remapping *can* contain leading zeroes.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ num = 11891

  ### 📤 `Output`  ➤ 99009

  ### 🔦 `Explanation`  ➤</br></br> To achieve the maximum value, Bob can remap the digit 1 to the digit 9 to yield 99899.</br></br> To achieve the minimum value, Bob can remap the digit 1 to the digit 0, yielding 890.</br></br> The difference between these two numbers is 99899 - 890 = 99009.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ num = 90

  ### 📤 `Output`  ➤ 99

  ### 🔦 `Explanation` ➤ The maximum value that can be returned by the function is 99 (if 0 is replaced by 9) and the minimum value that can be returned by the function is 0 (if 9 is replaced by 0). </br> Thus, we return 99 - 0 = 99.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= num <= 10<sup>8</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>

🔸 **Greedy**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/14%20-%2006%20-%202025%20---%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/14%20-%2006%20-%202025%20---%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/14%20-%2006%20-%202025%20---%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/06%20June%20%F0%9F%8F%95%EF%B8%8F/14%20-%2006%20-%202025%20---%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202566.%20Maximum%20Difference%20by%20Remapping%20a%20Digit.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/69bf0b78-86e5-4934-a5c9-26059d3f2e7e" width = "700px" height="462px" />

</h1>
