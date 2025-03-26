# 2033. Minimum Operations to Make a Uni-Value Grid

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/description/?envType=daily-question&envId=2025-03-26"><strong>➥ ☢️ 2033 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

You are given a **2D integer grid** of size `m x n` and an integer `x`.  

In one operation, you can **add** `x` to or **subtract** `x` from any element in the grid.  

A **uni-value grid** is a grid where **all the elements are equal**.  

### 🔹 Task:

- Return the **minimum number of operations** required to make the grid **uni-value**.
- If it is **not possible**, return `-1`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src='https://github.com/user-attachments/assets/4427098f-3245-4e19-9b94-a9be103aa2c4' width='164px' height='165px' />

  ### 📥 `Input`  ➤ grid = [[2,4],[6,8]], x = 2

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ We can make every element equal to 4 by doing the following: 
- Add x to 2 once.
- Subtract x from 6 once.
- Subtract x from 8 twice.
A total of 4 operations were used.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src='https://github.com/user-attachments/assets/bf4d3fb6-c942-4709-b80b-af22439206e6' width='164px' height='165px'  />

  ### 📥 `Input` ➤ grid = [[1,5],[2,3]], x = 1

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation` ➤ We can make every element equal to 3.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src='https://github.com/user-attachments/assets/52016bfb-0bb5-45be-b7c3-aff318d5feaf' width='164px' height='165px' />

  ### 📥 `Input` ➤ grid = [[1,2],[3,4]], x = 2

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation`  ➤ It is impossible to make every element equal.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ grid = [[1,3,5],[7,9,11]], x = 2

  ### 📤 `Output`  ➤ 10

  ### 🔦 `Explanation`  ➤ If make element become 7 using '2', then all become same only minimum operations

  [1,3,5]
	[7,9,11]

=> [7,7,7,7,7,7] the operations count as 

| 1-7 |/2 + |3-7|/2+ |5-7|/2 + |7-7|/2 +| 9-7|/2 + | 11-7|/2 
=> 3+2+1+0+1+2 = 9

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `m == grid.length` </br>
🔹 `n == grid[i].length` </br>
🔹 1 <= m, n <= 10<sup>5</sup> </br>
🔹 1 <= m * n <= 10<sup>5</sup> </br>
🔹 1 <= x, grid[i][j] <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Sorting**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/26%20-%2003%20-%202025%20---%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/26%20-%2003%20-%202025%20---%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/26%20-%2003%20-%202025%20---%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/03%20Mar%20%F0%9F%8C%BC/26%20-%2003%20-%202025%20---%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202033.%20Minimum%20Operations%20to%20Make%20a%20Uni-Value%20Grid.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/aa870550-7c4f-402a-ba0c-b47c150968c9" width = "700px" height="462px" />

</h1>
