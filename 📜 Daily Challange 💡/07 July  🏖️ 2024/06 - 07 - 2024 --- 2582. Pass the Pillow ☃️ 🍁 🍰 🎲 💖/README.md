# 2582. Pass the Pillow

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/pass-the-pillow/description/?envType=daily-question&envId=2024-07-06"><strong>➥ ♻️ 2582 Leetcode Que Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` people standing in a line labeled from `1` to `n`. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

- For example, once the pillow reaches the `n`<sup>th</sup> person they pass it to the `n - 1`<sup>th</sup> person, then to the `n - 2`<sup>th</sup> person and so on.

### Given the two positive integers `n` and `time`, return *the index of the person holding the pillow after `time` seconds*.


</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤  n = 4, time = 5

  ### 📤 Output  ➤ 2

  ### 🔦 Explanation  ➤  People pass the pillow in the following way: 1 -> 2 -> 3 -> 4 -> 3 -> 2.</br> After five seconds, the 2nd person is holding the pillow.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤ n = 3, time = 2

  ### 📤 Output  ➤ 3

  ### 🔦 Explanation ➤ People pass the pillow in the following way: 1 -> 2 -> 3.</br> After two seconds, the 3rd person is holding the pillow.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= n <= 1000** </br>
🔹 **1 <= time <= 1000** </br>


</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Simulation**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/06%20-%2007%20-%202024%20---%202582.%20Pass%20the%20Pillow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-2582-PassThePillow.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/06%20-%2007%20-%202024%20---%202582.%20Pass%20the%20Pillow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-2582-PassThePillow.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/06%20-%2007%20-%202024%20---%202582.%20Pass%20the%20Pillow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-2582-PassThePillow.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/06%20-%2007%20-%202024%20---%202582.%20Pass%20the%20Pillow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-2582-PassThePillow.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/06%20-%2007%20-%202024%20---%202582.%20Pass%20the%20Pillow%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-2582-PassThePillow.c)  |
