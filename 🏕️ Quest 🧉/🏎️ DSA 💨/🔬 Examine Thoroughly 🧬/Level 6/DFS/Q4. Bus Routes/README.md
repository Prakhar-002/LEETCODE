# Q4. Bus Routes

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/bus-routes/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-dfs"><strong>➥ 🫀 Q4 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `routes` representing bus routes where `routes[i]` is a bus route that the `i`‑th bus repeats forever. 

- For example, if `routes[0] = [1, 5, 7]`, this means that the `0`‑th bus travels in the sequence `1 -> 5 -> 7 -> 1 -> 5 -> 7 -> 1 -> ...` forever. 

### You will start at the bus stop `source` (you are not on any bus initially), and you want to go to the bus stop `target`. You can travel between bus stops **by buses only**. 

### Return the **least number of buses** you must take to travel from `source` to `target`. Return `-1` if it is not possible.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

### 📥 `Input`  ➤ `routes = [[1,2,7],[3,6,7]], source = 1, target = 6`

### 📤 `Output`  ➤ `2`

### 🔦 `Explanation`  ➤ The best strategy is to take the first bus to bus stop `7`, then take the second bus to bus stop `6`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

### 📥 `Input` ➤ `routes = [[7,12],[4,5,15],[6],[15,19],[9,12,13]], source = 15, target = 12`

### 📤 `Output`  ➤ `-1`

### 🔦 `Explanation` ➤ It is not possible to travel from bus stop `15` to bus stop `12` using the given routes.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= routes.length <= 500` </br>
🔹 `1 <= routes[i].length <= 10^5` </br>
🔹 All the values of `routes[i]` are **unique**. </br>
🔹 `sum(routes[i].length) <= 10^5` </br>
🔹 `0 <= routes[i][j] < 10^6` </br>
🔹 `0 <= source, target < 10^6` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Breadth-First Search** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q4.%20Bus%20Routes/%F0%9F%8D%81JAVA%20-%20Bus%20Routes.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q4.%20Bus%20Routes/%F0%9F%8E%B2CPP%20-%20Bus%20Routes.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q4.%20Bus%20Routes/%F0%9F%8D%B0PYTHON%20-%20Bus%20Routes.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/DFS/Q4.%20Bus%20Routes/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Bus%20Routes.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/ad755dfb-dba4-43ba-86c3-67ab87c54fe2" width = "700px" height="462px" />

</h1>
