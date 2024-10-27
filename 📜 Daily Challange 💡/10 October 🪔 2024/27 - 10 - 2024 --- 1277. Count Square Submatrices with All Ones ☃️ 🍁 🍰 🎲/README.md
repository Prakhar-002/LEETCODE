# 1277. Count Square Submatrices with All Ones

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/?envType=daily-question&envId=2024-10-26"><strong>➥ ☢️ 1277 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given a `m * n` matrix of ones and zeros, return how many square submatrices have all ones.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ matrix =

    [
      [0,1,1,1],
      [1,1,1,1],
      [0,1,1,1]
    ]

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤ 
    There are 10 squares of side 1.
    There are 4 squares of side 2.
    There is  1 square of side 3.
    Total number of squares = 10 + 4 + 1 = 15.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  matrix = 
    [
      [1,0,1],
      [1,1,0],
      [1,1,0]
    ]

  ### 📤 `Output`  ➤ 7

  ### 🔦 `Explanation` ➤ 
    There are 6 squares of side 1.  
    There is 1 square of side 2. 
    Total number of squares = 6 + 1 = 7.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= arr.length <= 300`** </br>

🔹 **`1 <= arr[0].length <= 300`** </br>

🔹 **`0 <= arr[i][j] <= 1`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/27%20-%2010%20-%202024%20---%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/27%20-%2010%20-%202024%20---%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/27%20-%2010%20-%202024%20---%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/10%20October%20%F0%9F%AA%94%202024/27%20-%2010%20-%202024%20---%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.js) |
