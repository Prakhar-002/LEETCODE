# 1277. Count Square Submatrices with All Ones

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/?envType=daily-question&envId=2025-08-20"><strong>➥ ☢️ 1277 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an *m* x *n* matrix consisting of 1s and 0s, determine the number of square submatrices that contain only 1s.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ matrix = [ [0,1,1,1], [1,1,1,1], [0,1,1,1] ]

### 📤 `Output`  ➤ `15`

### 🔦 `Explanation`  ➤ There are 10 squares of side 1, 4 squares of side 2, and 1 square of side 3. The total number of squares is 10 + 4 + 1 = 15.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ matrix = [ [1,0,1], [1,1,0], [1,1,0] ]

### 📤 `Output`  ➤ `7`

### 🔦 `Explanation` ➤ There are 6 squares of side 1 and 1 square of side 2. The total number of squares is 6 + 1 = 7.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ matrix = [ [1, 1, 1], [1, 1, 1], [1, 1, 1] ]

### 📤 `Output`  ➤ `14`

### 🔦 `Explanation` ➤ There are nine 1x1 squares, four 2x2 squares, and one 3x3 square, yielding a total of 9 + 4 + 1 = 14.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= arr.length <= 300` </br>
🔹 `1 <= arr[0].length <= 300` </br>
🔹 `0 <= arr[i][j] <= 1` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Dynamic Programming** </br>
🔸 **Matrix** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/20%20-%2008%20-%202025%20---%20%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/20%20-%2008%20-%202025%20---%20%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/20%20-%2008%20-%202025%20---%20%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/20%20-%2008%20-%202025%20---%20%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201277.%20Count%20Square%20Submatrices%20with%20All%20Ones.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7503b59e-8ca1-4b07-a8d7-9bf257aba59f" width = "700px" height="462px" />

</h1>
