# 1975. Maximum Matrix Sum

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-matrix-sum/description/?envType=daily-question&envId=2024-11-24"><strong>➥ ☢️ 1975 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an n x n integer matrix. You can do the following operation any number of times:

- Choose any `two adjacent` elements of `matrix` and `multiply` each of them by `-1`.

### Two elements are considered `adjacent` if and only if they share a `border`.

### Your goal is to `maximize` the summation of the matrix's elements. Return *the maximum sum of the matrix's elements using the operation mentioned above*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷
  
![1975 que 1](https://github.com/user-attachments/assets/ef9b4923-07d1-4282-9cc6-5b1f9c1345f3)

  ### 📥 `Input`  ➤ matrix = [[1,-1],[-1,1]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ We can follow the following steps to reach sum equals 4:</br> ➺ Multiply the 2 elements in the first row by -1.</br> ➺ Multiply the 2 elements in the first column by -1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1975 que 2](https://github.com/user-attachments/assets/aa38a136-50d4-4536-887e-935d26f60de8)

  ### 📥 `Input` ➤ matrix = [[1,2,3],[-1,-2,-3],[1,2,3]]

  ### 📤 `Output`  ➤ 16

  ### 🔦 `Explanation` ➤ We can follow the following step to reach sum equals 16:</br> ➺ Multiply the 2 last elements in the second row by -1.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == matrix.length == matrix[i].length`** </br>

🔹 **`2 <= n <= 250`** </br>

🔹 **-10<sup>5</sup> <= matrix[i][j] <= 10<sup>5</sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Greedy**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/24%20-%2011%20-%202024%20---%20%201975.%20Maximum%20Matrix%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201975.%20Maximum%20Matrix%20Sum.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/24%20-%2011%20-%202024%20---%20%201975.%20Maximum%20Matrix%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201975.%20Maximum%20Matrix%20Sum.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/24%20-%2011%20-%202024%20---%20%201975.%20Maximum%20Matrix%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201975.%20Maximum%20Matrix%20Sum.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/11%20November%20%F0%9F%8E%A1%202024/24%20-%2011%20-%202024%20---%20%201975.%20Maximum%20Matrix%20Sum%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201975.%20Maximum%20Matrix%20Sum.js) |
