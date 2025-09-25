# 120. Triangle

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/triangle/?envType=daily-question&envId=2025-09-25"><strong>➥ ☢️ 120 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a triangle array, return the minimum path sum from top to bottom.

### For each step, you may move to an adjacent number of the row below. More formally, if you are on index `i` on the current row, you may move to either index `i` or index `i + 1` on the next row.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]`

  ### 📤 `Output`  ➤ `11`

  ### 🔦 `Explanation`  ➤ ➺
   The triangle looks like:

&nbsp;&nbsp;&nbsp;<ins>2</ins></br>
&nbsp;&nbsp;<ins>3</ins> 4</br>
&nbsp;6 <ins>5</ins> 7</br>
4 <ins>1</ins> 8 3

   The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `triangle = [[-10]]`

  ### 📤 `Output`  ➤ `-10`

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= triangle.length <= 200` </br>
🔹 `triangle[0].length == 1` </br>
🔹 `triangle[i].length == triangle[i - 1].length + 1` </br>
🔹 `-10^4 <= triangle[i][j] <= 10^4` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/25%20-%2009%20-%202025%20---%20120.%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20120.%20Triangle.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/25%20-%2009%20-%202025%20---%20120.%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20120.%20Triangle.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/25%20-%2009%20-%202025%20---%20120.%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20120.%20Triangle.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/25%20-%2009%20-%202025%20---%20120.%20Triangle%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20120.%20Triangle.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/5db5233a-75d2-4ea4-bd21-5bbb3d3a28e8" width = "700px" height="462px" />

</h1>
