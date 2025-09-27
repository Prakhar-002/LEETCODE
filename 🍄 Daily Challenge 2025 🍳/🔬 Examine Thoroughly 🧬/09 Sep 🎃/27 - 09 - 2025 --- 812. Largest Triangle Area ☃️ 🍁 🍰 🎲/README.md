# 812. Largest Triangle Area

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/largest-triangle-area/description/?envType=daily-question&envId=2025-09-27"><strong>➥ ♻️ 812 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an array of points on the X-Y plane `points` where `points[i] = [xi, yi]`, return the area of the largest triangle that can be formed by any three different points. Answers within 10<sup>-5</sup> of the actual answer will be accepted.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="300" height="246" alt="812 que 1" src="https://github.com/user-attachments/assets/82bdd020-d691-4a46-b43b-e84025004f83" />

  ### 📥 `Input`  ➤ `points = [[0,0],[0,1],[1,0],[0,2],[2,0]]`

  ### 📤 `Output`  ➤ `2.00000`

  ### 🔦 `Explanation`  ➤

  - The five points are shown in the problem description's figure. The red triangle is the largest.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `points = [[1,0],[0,0],[0,1]]`

  ### 📤 `Output`  ➤ `0.50000`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `3 <= points.length <= 50` </br>
🔹 `-50 <= xi, yi <= 50` </br>
🔹 All the given points are unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Math** </br>
🔸 **Geometry** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/27%20-%2009%20-%202025%20---%20812.%20Largest%20Triangle%20Area%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20812.%20Largest%20Triangle%20Area.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/27%20-%2009%20-%202025%20---%20812.%20Largest%20Triangle%20Area%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20812.%20Largest%20Triangle%20Area.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/27%20-%2009%20-%202025%20---%20812.%20Largest%20Triangle%20Area%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20812.%20Largest%20Triangle%20Area.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/27%20-%2009%20-%202025%20---%20812.%20Largest%20Triangle%20Area%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20812.%20Largest%20Triangle%20Area.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/1703fc5e-9784-4912-8393-62beb94e47bb" width = "700px" height="462px" />

</h1>
