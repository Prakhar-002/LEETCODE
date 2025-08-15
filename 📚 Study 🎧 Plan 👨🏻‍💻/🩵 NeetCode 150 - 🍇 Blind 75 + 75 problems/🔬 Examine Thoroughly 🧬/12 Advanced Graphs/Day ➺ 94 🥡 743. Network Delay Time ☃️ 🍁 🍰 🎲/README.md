# 743. Network Delay Time

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/network-delay-time/description/"><strong>➥ ☢️ 743 Leetcode Medium ☢️ </strong></a>
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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
