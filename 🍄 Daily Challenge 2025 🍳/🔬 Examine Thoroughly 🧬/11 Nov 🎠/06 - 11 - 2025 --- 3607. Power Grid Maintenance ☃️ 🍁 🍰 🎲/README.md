# 3607. Power Grid Maintenance

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/power-grid-maintenance/description/?envType=daily-question&envId=2025-11-06"><strong>➥ ☢️ 3607 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an integer `c` representing `c` power stations, each with a unique identifier id from 1 to `c` (1‑based indexing).

### These stations are interconnected via `n` bidirectional cables, represented by a 2D array `connections`, where each element `connections[i] = [ui, vi]` indicates a connection between station `ui` and station `vi`. Stations that are directly or indirectly connected form a power grid.

### Initially, all stations are online (operational).

### You are also given a 2D array `queries`, where each query is one of the following two types:

- `[1, x]`: A maintenance check is requested for station `x`. If station `x` is online, it resolves the check by itself. If station `x` is offline, the check is resolved by the operational station with the smallest id in the same power grid as `x`. If no operational station exists in that grid, return -1.
- `[2, x]`: Station `x` goes offline (i.e., it becomes non-operational).

### Return an array of integers representing the results of each query of type `[1, x]` in the order they appear.

### Note: The power grid preserves its structure; an offline (non‑operational) node remains part of its grid and taking it offline does not alter connectivity.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `c = 5, connections = [[1,2],[2,3],[3,4],[4,5]], queries = [[1,3],[2,1],[1,1],[2,2],[1,2]]`

  ### 📤 `Output`  ➤ `[3,2,3]`

  ### 🔦 `Explanation`  ➤ 

<img src ="https://github.com/user-attachments/assets/7378caa1-9452-4c04-a679-5b36349c09ba"  />


  - Initially, all stations `{1, 2, 3, 4, 5}` are online and form a single power grid.
  - Query `[1,3]`: Station 3 is online, so the maintenance check is resolved by station 3.
  - Query `[2,1]`: Station 1 goes offline. The remaining online stations are `{2, 3, 4, 5}`.
  - Query `[1,1]`: Station 1 is offline, so the check is resolved by the operational station with the smallest id among `{2, 3, 4, 5}`, which is station 2.
  - Query `[2,2]`: Station 2 goes offline. The remaining online stations are `{3, 4, 5}`.
  - Query `[1,2]`: Station 2 is offline, so the check is resolved by the operational station with the smallest id among `{3, 4, 5}`, which is station 3.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ `c = 3, connections = [], queries = [[1,1],[2,1],[1,1]]`

  ### 📤 `Output`  ➤ `[1,-1]`

  ### 🔦 `Explanation`  ➤ ➺

  - There are no connections, so each station is its own isolated grid.
  - Query `[1,1]`: Station 1 is online in its isolated grid, so the maintenance check is resolved by station 1.
  - Query `[2,1]`: Station 1 goes offline.
  - Query `[1,1]`: Station 1 is offline and there are no other stations in its grid, so the result is -1.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `1 <= c <= 10^5` </br>
🔹 `0 <= n == connections.length <= min(10^5, c * (c - 1) / 2)` </br>
🔹 `connections[i].length == 2` </br>
🔹 `1 <= ui, vi <= c` </br>
🔹 `ui != vi` </br>
🔹 `1 <= queries.length <= 2 * 10^5` </br>
🔹 `queries[i].length == 2` </br>
🔹 `queries[i][0]` is either 1 or 2. </br>
🔹 `1 <= queries[i][1] <= c` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Depth-First Search** </br>
🔸 **Breadth-First Search** </br>
🔸 **Union Find** </br>
🔸 **Graph** </br>
🔸 **Heap (Priority Queue)** </br>
🔸 **Ordered Set** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/06%20-%2011%20-%202025%20---%203607.%20Power%20Grid%20Maintenance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203607.%20Power%20Grid%20Maintenance.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/06%20-%2011%20-%202025%20---%203607.%20Power%20Grid%20Maintenance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203607.%20Power%20Grid%20Maintenance.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/06%20-%2011%20-%202025%20---%203607.%20Power%20Grid%20Maintenance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203607.%20Power%20Grid%20Maintenance.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/11%20Nov%20%F0%9F%8E%A0/06%20-%2011%20-%202025%20---%203607.%20Power%20Grid%20Maintenance%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203607.%20Power%20Grid%20Maintenance.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/871f2334-aa29-4e70-b337-07c7f3bb51b8" width = "700px" height="462px" />

</h1>
