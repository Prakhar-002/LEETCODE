# 3531. Count Covered Buildings

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-covered-buildings/description/?envType=daily-question&envId=2025-12-11"><strong>➥ ☢️ 3531 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a positive integer `n`, representing an `n x n` city. You are also given a 2D grid `buildings`, where `buildings[i] = [x, y]` denotes a **unique** building located at coordinates `[x, y]`.

### A building is **covered** if there is at least one building in all **four** directions: left, right, above, and below. Return the number of **covered** buildings.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![3531 que 1](https://github.com/user-attachments/assets/3b9cfca1-fdfc-487a-808c-de0f2473f250)

### 📥 `Input`  ➤ `n = 3, buildings = [[1,2],[2,2],[3,2],[2,1],[2,3]]`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation`  ➤ Only building `[2,2]` is covered as it has at least one building:
- above `([1,2])`
- below `([3,2])`
- left `([2,1])`
- right `([2,3])`  
Thus, the count of covered buildings is `1`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![3531 que 2](https://github.com/user-attachments/assets/47f84cd4-ba7f-4fbd-a9d4-c086384aa1c0)

### 📥 `Input` ➤ `n = 3, buildings = [[1,1],[1,2],[2,1],[2,2]]`

### 📤 `Output`  ➤ `0`

### 🔦 `Explanation` ➤ No building has at least one building in all four directions.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src ="https://github.com/user-attachments/assets/d3d66c9e-ce87-4f8b-a789-2336f08ae7a2" width = "267px" height="273px" />


### 📥 `Input` ➤ `n = 5, buildings = [[1,3],[3,2],[3,3],[3,5],[5,3]]`

### 📤 `Output`  ➤ `1`

### 🔦 `Explanation` ➤ Only building `[3,3]` is covered as it has at least one building:
- above `([1,3])`
- below `([5,3])`
- left `([3,2])`
- right `([3,5])`  
Thus, the count of covered buildings is `1`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 10^5` </br>
🔹 `1 <= buildings.length <= 10^5` </br>
🔹 `buildings[i] = [x, y]` </br>
🔹 `1 <= x, y <= n` </br>
🔹 All coordinates of `buildings` are **unique**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Sorting** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/11%20-%2012%20-%202025%20---%203531.%20Count%20Covered%20Buildings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203531.%20Count%20Covered%20Buildings.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/11%20-%2012%20-%202025%20---%203531.%20Count%20Covered%20Buildings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203531.%20Count%20Covered%20Buildings.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/11%20-%2012%20-%202025%20---%203531.%20Count%20Covered%20Buildings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203531.%20Count%20Covered%20Buildings.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/11%20-%2012%20-%202025%20---%203531.%20Count%20Covered%20Buildings%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203531.%20Count%20Covered%20Buildings.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/75c19e1c-c3d5-460e-abf6-6cf40251b71b" width = "700px" height="462px" />

</h1>
