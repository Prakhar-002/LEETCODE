# 539. Minimum Time Difference

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-time-difference/description/?envType=daily-question&envId=2024-09-16"><strong>➥ ☢️ 539 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a list of 24-hour clock time points in `"HH:MM"` format, return *the minimum `minutes` difference between any two time-points in the list*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ timePoints = ["23:59","00:00"]

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ timePoints = ["00:00","23:59","00:00"]

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= timePoints.length <= 2 * 10<sup>4</sup>** </br>

🔹 **`timePoints[i]` is in the format `"HH:MM"`.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **String**  </br>
🔸 **Sorting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/16%20-%2009%20-%202024%20---%20539.%20Minimum%20Time%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA%20-%20539.%20Minimum%20Time%20Difference.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/16%20-%2009%20-%202024%20---%20539.%20Minimum%20Time%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP%20-%20539.%20Minimum%20Time%20Difference.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/16%20-%2009%20-%202024%20---%20539.%20Minimum%20Time%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON%20-%20539.%20Minimum%20Time%20Difference.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/16%20-%2009%20-%202024%20---%20539.%20Minimum%20Time%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20539.%20Minimum%20Time%20Difference.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/09%20September%20%F0%9F%8D%82%202024/16%20-%2009%20-%202024%20---%20539.%20Minimum%20Time%20Difference%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C%20-%20539.%20Minimum%20Time%20Difference.c)  |

