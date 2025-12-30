# 840. Magic Squares In Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/magic-squares-in-grid/description/?envType=daily-question&envId=2025-12-30"><strong>➥ ☢️ 840 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A `3 x 3` *magic square* is a `3 x 3` grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.

### Given a `row x col` grid of integers, how many `3 x 3` contiguous *magic square* subgrids are there?

### Note: while a *magic square* can only contain numbers from `1` to `9`, `grid` may contain numbers up to 15.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![840 que 1](https://github.com/user-attachments/assets/eed4f63c-1fff-4809-bd9c-e733123e6d3c)

  ### 📥 `Input`  ➤ grid = [[4,3,8,4],[9,5,1,9],[2,7,6,2]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ The following subgrid is a 3 x 3 magic square ➺

![840 que 1 ex](https://github.com/user-attachments/assets/f03ffa3d-27f4-4541-a58a-5fc2f08a09fe)

  > while this one is not ➺

![840 que 2 ex](https://github.com/user-attachments/assets/19adb0ca-7b3d-4d91-a79a-c1fd62bc1510)


  > In total, there is only one magic square inside the given grid.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  grid = [[8]]

  ### 📤 `Output`  ➤ 0

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`row == grid.length`** </br>

🔹 **`col == grid[i].length`** </br>

🔹 **`1 <= row, col <= 10`** </br>

🔹 **`0 <= grid[i][j] <= 15`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Hash Table**  </br>
🔸 **Math**  </br>
🔸 **Matrix**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/09%20-%2008%20-%202024%20---%20%20840.%20Magic%20Squares%20In%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-840-MagicSquaresInGrid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/09%20-%2008%20-%202024%20---%20%20840.%20Magic%20Squares%20In%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-840-MagicSquaresInGrid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/09%20-%2008%20-%202024%20---%20%20840.%20Magic%20Squares%20In%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-840-MagicSquaresInGrid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/09%20-%2008%20-%202024%20---%20%20840.%20Magic%20Squares%20In%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-840-MagicSquaresInGrid.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
