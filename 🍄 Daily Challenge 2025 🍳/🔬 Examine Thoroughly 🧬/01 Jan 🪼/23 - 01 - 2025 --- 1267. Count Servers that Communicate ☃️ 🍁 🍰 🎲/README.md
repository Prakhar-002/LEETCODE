# 1267. Count Servers that Communicate

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-servers-that-communicate/description/?envType=daily-question&envId=2025-01-23"><strong>➥ ☢️ 1267 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a map of a server center, represented as a `m * n` integer matrix `grid`, where `1` means that on that cell there is a server and `0` means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

### Return the number of servers that communicate with any other server.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/8bc7fc30-8717-4e75-b139-8cf296c03426" width="202px" height="203px"/>

  ### 📥 `Input`  ➤ grid = [[1,0],[0,1]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ No servers can communicate with others.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/af005315-84f4-4564-be25-84a2de779cb5" width="203px" height="203px"/>

  ### 📥 `Input` ➤ grid = [[1,0],[1,1]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤  All three servers can communicate with at least one other server.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/73e79c88-013b-49ee-b997-6393c5eb9600" width="443px" height="443px"/>

  ### 📥 `Input` ➤ grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]

  ### 📤 `Output`  ➤ 4

  ### 🔦 `Explanation`  ➤ The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`m == grid.length`** </br>

🔹 **`n == grid[i].length`** </br>

🔹 **`1 <= m <= 250`** </br>

🔹 **`1 <= n <= 250`** </br>

🔹 **`grid[i][j] == 0 or 1`** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Matrix**  </br>
🔸 **Counting**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
