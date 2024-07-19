# 1380. Lucky Numbers in a Matrix

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/?envType=daily-question&envId=2024-07-19"><strong>➥ ♻️ 1380 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an `m x n` matrix of `distinct` numbers, return *all `lucky numbers` in the matrix in any order*.

### A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 Input  ➤ matrix = [[3,7,8],[9,11,13],[15,16,17]]

  ### 📤 Output  ➤ [15]

  ### 🔦 Explanation  ➤ 15 is the only lucky number since it is the minimum in its row and the maximum in its column.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]

  ### 📤 Output  ➤ [12]

  ### 🔦 Explanation ➤ 12 is the only lucky number since it is the minimum in its row and the maximum in its column.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 Input ➤  matrix = [[7,8],[1,2]]

  ### 📤 Output  ➤  [7]

  ### 🔦 Explanation  ➤  7 is the only lucky number since it is the minimum in its row and the maximum in its column.
 

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == mat.length`** </br>
🔹 **`n == mat[i].length`** </br>
🔹 **`1 <= n, m <= 50`** </br>
🔹 **1 <= matrix[i][j] <= 10<sup>5</sup>.** </br>
🔹 **All elements in the matrix are distinct.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/19%20-%2007%20-%202024%20---%201380.%20Lucky%20Numbers%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%81JAVA-1380-LuckyNumbersInAMatrix.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/19%20-%2007%20-%202024%20---%201380.%20Lucky%20Numbers%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8E%B2CPP-1380-LuckyNumbersInAMatrix.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/19%20-%2007%20-%202024%20---%201380.%20Lucky%20Numbers%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%8D%B0PYTHON-1380-LuckyNumbersInAMatrix.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/19%20-%2007%20-%202024%20---%201380.%20Lucky%20Numbers%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%E2%98%83%EF%B8%8FJAVASCRIPT-1380-LuckyNumbersInAMatrix.js) |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/19%20-%2007%20-%202024%20---%201380.%20Lucky%20Numbers%20in%20a%20Matrix%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2%20%F0%9F%92%96/%F0%9F%92%96C-1380-LuckyNumbersInAMatrix.c)  |

