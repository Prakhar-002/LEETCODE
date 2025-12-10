# Q3. Maximum Path Quality of a Graph

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/maximum-path-quality-of-a-graph/description/?envType=problem-list-v2&envId=dsa-graph-theory-peaks-graph"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is an **undirected graph** with `n` nodes numbered from `0` to `n - 1` (inclusive). You are given a 0-indexed integer array `values` where `values[i]` is the value of the `i`‑th node, and a 0-indexed 2D integer array `edges`, where each `edges[j] = [uⱼ, vⱼ, timeⱼ]` indicates that there is an undirected edge between nodes `uⱼ` and `vⱼ`, and it takes `timeⱼ` seconds to travel between them. You are also given an integer `maxTime`.

- A **valid path** is any path that **starts at node `0`**, **ends at node `0`**, and takes **at most `maxTime` seconds** in total.
- You may **visit the same node multiple times**.
- The **quality** of a valid path is the **sum of the values of the unique nodes** visited in the path (each node’s value is added **at most once**).

### Your task is to **return the maximum quality** of any valid path.

> Note: There are **at most four edges** connected to each node.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="452" height="286" alt="2065 que 1" src="https://github.com/user-attachments/assets/c128da4b-bf7f-4a71-9819-639f0789fbd2" />

### 📥 `Input`  ➤  
`values = [0,32,10,43]`  
`edges = [[0,1,10],[1,2,15],[0,3,10]]`  
`maxTime = 49`

### 📤 `Output`  ➤ `75`

### 🔦 `Explanation`  ➤ One possible valid path is `0 -> 1 -> 0 -> 3 -> 0`. The total time is `10 + 10 + 10 + 10 = 40 <= 49`. The unique visited nodes are `0, 1, 3`, so the path quality is `0 + 32 + 43 = 75`.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="452" height="286" alt="2065 que 2" src="https://github.com/user-attachments/assets/35b3fbf5-076d-42c8-a910-9fa5f05474fd" />

### 📥 `Input` ➤  
`values = [5,10,15,20]`  
`edges = [[0,1,10],[1,2,10],[0,3,10]]`  
`maxTime = 30`

### 📤 `Output`  ➤ `25`

### 🔦 `Explanation` ➤ One valid path is `0 -> 3 -> 0`. The total time is `10 + 10 = 20 <= 30`. The unique visited nodes are `0` and `3`, giving a path quality of `5 + 20 = 25`.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img width="442" height="319" alt="2065 que 3" src="https://github.com/user-attachments/assets/b49fdf49-df97-4411-93e0-5248eb172f1d" />

### 📥 `Input` ➤  
`values = [1,2,3,4]`  
`edges = [[0,1,10],[1,2,11],[2,3,12],[1,3,13]]`  
`maxTime = 50`

### 📤 `Output`  ➤ `7`

### 🔦 `Explanation` ➤ One valid path is `0 -> 1 -> 3 -> 1 -> 0`. The total time is `10 + 13 + 13 + 10 = 46 <= 50`. The unique visited nodes are `0, 1, 3`, so the path quality is `1 + 2 + 4 = 7`.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `n == values.length` </br>
🔹 `1 <= n <= 1000` </br>
🔹 `0 <= values[i] <= 10^8` </br>
🔹 `0 <= edges.length <= 2000` </br>
🔹 `edges[j].length == 3` </br>
🔹 `0 <= uⱼ < vⱼ <= n - 1` </br>
🔹 `10 <= timeⱼ, maxTime <= 100` </br>
🔹 All pairs `[uⱼ, vⱼ]` are **unique**. </br>
🔹 There are **at most four edges** connected to each node. </br>
🔹 The graph **may not be connected**. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Backtracking** </br>
🔸 **Graph** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q3.%20Maximum%20Path%20Quality%20of%20a%20Graph/%F0%9F%8D%81JAVA%20-%20Maximum%20Path%20Quality%20of%20a%20Graph.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q3.%20Maximum%20Path%20Quality%20of%20a%20Graph/%F0%9F%8E%B2CPP%20-%20Maximum%20Path%20Quality%20of%20a%20Graph.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q3.%20Maximum%20Path%20Quality%20of%20a%20Graph/%F0%9F%8D%B0PYTHON%20-%20Maximum%20Path%20Quality%20of%20a%20Graph.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%206/Graph/Q3.%20Maximum%20Path%20Quality%20of%20a%20Graph/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Maximum%20Path%20Quality%20of%20a%20Graph.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/29af64a0-a057-443d-ac1e-713f217a3e7a" width = "700px" height="462px" />

</h1>
