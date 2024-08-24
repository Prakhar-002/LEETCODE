# 592. Fraction Addition and Subtraction

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/fraction-addition-and-subtraction/description/?envType=daily-question&envId=2024-08-23"><strong>➥ ☢️ 592 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a string `expression` representing an expression of fraction addition and subtraction, return the calculation result in string format.

### The final result should be an [irreducible fraction](https://en.wikipedia.org/wiki/Irreducible_fraction). If your final result is an integer, change it to the format of a fraction that has a denominator `1`. So in this case, `2` should be converted to `2/1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ expression = "-1/2+1/2"

  ### 📤 `Output`  ➤  "0/1"

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ expression = "-1/2+1/2+1/3"

  ### 📤 `Output`  ➤ "1/3"

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  expression = "1/3-1/2"

  ### 📤 `Output`  ➤  "-1/6"

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **The input string only contains `'0'` to `'9'`, `'/'`, `'+'` and `'-'`. So does the output.** </br>

🔹 **Each fraction (input and output) has the format `± numerator/denominator`. If the first input fraction or the output is positive, then `'+'` will be omitted.** </br>

🔹 **The input only contains valid `irreducible fractions`, where the `numerator` and `denominator` of each fraction will always be in the range `[1, 10]`. If the denominator is `1`, it means this fraction is actually an integer in a fraction format defined above.** </br>

🔹 **The number of given fractions will be in the range `[1, 10]`.** </br>

🔹 **The numerator and denominator of the `final result` are guaranteed to be valid and in the range of `32-bit` int.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **String**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/23%20-%2008%20-%202024%20---%20592.%20Fraction%20Addition%20and%20Subtraction%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-592-FractionAdditionAndSubtraction.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/23%20-%2008%20-%202024%20---%20592.%20Fraction%20Addition%20and%20Subtraction%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-592-FractionAdditionAndSubtraction.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/23%20-%2008%20-%202024%20---%20592.%20Fraction%20Addition%20and%20Subtraction%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-592-FractionAdditionAndSubtraction.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/23%20-%2008%20-%202024%20---%20592.%20Fraction%20Addition%20and%20Subtraction%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-592-FractionAdditionAndSubtraction.js) |

