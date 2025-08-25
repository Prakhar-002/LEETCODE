# 498. Diagonal Traverse

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/diagonal-traverse/description/?envType=daily-question&envId=2025-08-25"><strong>➥ ☢️ 498 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Given an *m* x *n* matrix `mat`, return an array containing all the elements of the matrix in diagonal order.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/27f41b70-8716-4be2-9579-99ea02fd76b4" width="334" height="334"/>

  ### 📥 `Input`  ➤ `mat = [[1,2,3],[4,5,6],[7,8,9]]`

  ### 📤 `Output`  ➤ [1,2,4,7,5,3,6,8,9]

  ### 🔦 `Explanation`  ➤ ➺ The elements are traversed in the following diagonal order: 1 -> 2 -> 4 -> 7 -> 5 -> 3 -> 6 -> 8 -> 9.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `mat = [[1,2],[3,4]]`

  ### 📤 `Output`  ➤ [1,2,3,4]

  ### 🔦 `Explanation` ➤ The elements are traversed in the following diagonal order: 1 -> 2 -> 3 -> 4.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ `mat = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]`

  ### 📤 `Output`  ➤ [1,2,5,9,6,3,4,7,10,11,8,12]

  ### 🔦 `Explanation`  ➤ Diagonal traversal of the given matrix.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `m == mat.length` </br>

🔹 `n == mat[i].length` </br>

🔹 `1 <= m, n <= 10^4` </br>

🔹 `1 <= m * n <= 10^4` </br>

🔹 `-10^5 <= mat[i][j] <= 10^5` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Matrix**  </br>
🔸 **Simulation**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/25%20-%2008%20-%202025%20---%20%20498.%20Diagonal%20Traverse%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20498.%20Diagonal%20Traverse.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/25%20-%2008%20-%202025%20---%20%20498.%20Diagonal%20Traverse%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20498.%20Diagonal%20Traverse.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/25%20-%2008%20-%202025%20---%20%20498.%20Diagonal%20Traverse%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20498.%20Diagonal%20Traverse.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/25%20-%2008%20-%202025%20---%20%20498.%20Diagonal%20Traverse%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20498.%20Diagonal%20Traverse.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/f2411d7a-97d9-424c-86de-6a14a954c524" width = "700px" height="462px" />

</h1>
