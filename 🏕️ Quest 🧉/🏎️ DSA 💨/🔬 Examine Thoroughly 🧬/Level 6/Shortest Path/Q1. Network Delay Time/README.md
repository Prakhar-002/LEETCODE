# Q1. Network Delay Time

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/network-delay-time/description/"><strong>➥ ☢️ Q1 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a network consisting of `n` nodes, labeled from 1 to `n`. Travel times between nodes are provided as directed edges in the `times` array, where `times[i] = [ui, vi, wi]`. This indicates that a signal takes `wi` units of time to travel from source node `ui` to target node `vi`.

### You are tasked with sending a signal from a specified source node `k`. Your goal is to determine the minimum time it takes for the signal to reach *all* `n` nodes in the network.

### Return the minimum time required for all nodes to receive the signal. If there is any node that cannot be reached by the signal, return -1.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/860fb82b-69af-4780-8b7d-97149be4378c" width="" height=""/>

  ### 📥 `Input`  ➤ times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2

  ### 📤 `Output`  ➤ 2

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ times = [[1,2,1]], n = 2, k = 1

  ### 📤 `Output`  ➤ 1

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ times = [[1,2,1]], n = 2, k = 2

  ### 📤 `Output`  ➤ -1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= n <= 100 </br>

🔹 1 <= times.length <= 6000 </br>

🔹 times[i].length == 3 </br>

🔹 1 <= ui, vi <= n </br>

🔹 ui != vi </br>

🔹 0 <= wi <= 100 </br>

🔹 All the pairs (ui, vi) are unique. (i.e., no multiple edges.) </br>

</br>

# Topics 📋 

It might also involves the Floyd-Warshall alhoritm also

🔸 **Depth-First Search**  </br>

🔸 **Breadth-First Search**  </br>

🔸 **Graph**  </br>

🔸 **Heap (Priority Queue)**  </br>

🔸 **Shortest Path** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2094%20%F0%9F%A5%A1%20743.%20Network%20Delay%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20743.%20Network%20Delay%20Time.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2094%20%F0%9F%A5%A1%20743.%20Network%20Delay%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20743.%20Network%20Delay%20Time.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2094%20%F0%9F%A5%A1%20743.%20Network%20Delay%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20743.%20Network%20Delay%20Time.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2094%20%F0%9F%A5%A1%20743.%20Network%20Delay%20Time%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20743.%20Network%20Delay%20Time.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/69334a97-8bef-4329-8074-332e260caf28" width = "700px" height="462px" />

</h1>
