# 2045. Second Minimum Time to Reach Destination

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/second-minimum-time-to-reach-destination/description/?envType=daily-question&envId=2024-07-28"><strong>➥ 🫀 2045 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A city is represented as a `bi-directional connected` graph with `n` vertices where each vertex is labeled from `1` to `n` `(inclusive)`. The edges in the graph are represented as a 2D integer array `edges`, where each `edges[i] = [ui, vi]` denotes a bi-directional edge between vertex `u-i` and vertex `v-i`. Every vertex pair is connected by `at most one` edge, and no vertex has an edge to itself. The time taken to traverse any edge is `time` minutes.

### Each vertex has a traffic signal which changes its color from `green` to `red` and vice versa every `change` minutes. All signals change `at the same` time. You can enter a vertex at `any time`, but can leave a vertex `only when the signal is green`. You `cannot wait` at a vertex if the signal is `green`.

### The `second minimum value` is defined as the smallest value `strictly larger` than the minimum value.

- For example the second minimum value of `[2, 3, 4]` is `3`, and the second minimum value of `[2, 2, 4]` is `4`.

### Given `n`, `edges`, `time`, and `change`, return *the second minimum time it will take to go from vertex `1` to vertex `n`*.

### Notes 📝 ˋ°•*⁀➷

- You can go through any vertex `any` number of times, `including` `1` and `n`.

- You can assume that when the journey `starts`, all signals have just turned `green`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

|       |           |
|-------|-----------|
|  ![2045 que 1](https://github.com/user-attachments/assets/98d440cf-bca1-4e70-8e6e-da5ebd166d79)   |   ![2045 que 1 1](https://github.com/user-attachments/assets/86642e5a-520a-4020-a8c3-a897c4d32d39) |

  ### 📥 Input  ➤ n = 5, edges = [[1,2],[1,3],[1,4],[3,4],[4,5]], time = 3, change = 5

  ### 📤 Output  ➤ 13

  ### 🔦 Explanation  ➤ The figure on the left shows the given graph.
    The blue path in the figure on the right is the minimum time path.
    
    The time taken is:
    
    ⚝ Start at 1, time elapsed=0
    
    ⚝ 1 ➺ 4: 3 minutes, time elapsed=3
    
    ⚝ 4 ➺ 5: 3 minutes, time elapsed=6
    
    Hence the minimum time needed is 6 minutes.

    The red path shows the path to get the second minimum time.
    
    ⚝ Start at 1, time elapsed=0
    
    ⚝ 1 ➺ 3: 3 minutes, time elapsed=3
    
    ⚝ 3 ➺ 4: 3 minutes, time elapsed=6
    
    ⚝ Wait at 4 for 4 minutes, time elapsed=10
    
    ⚝ 4 ➺ 5: 3 minutes, time elapsed=13
    
    Hence the second minimum time is 13 minutes. 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![2045 que 2](https://github.com/user-attachments/assets/007f4bbf-9df9-4c9c-9dad-a36ac1f73224)

  ### 📥 Input ➤ n = 2, edges = [[1,2]], time = 3, change = 2

  ### 📤 Output  ➤ 11

  ### 🔦 Explanation ➤ The minimum time path is 1 ➺ 2 with time = 3 minutes.</br> The second minimum time path is 1 ➺ 2 ➺ 1 ➺ 2 with time = 11 minutes.


</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= n <= 10<sup>4</sup>** </br>

🔹 **n - 1 <= edges.length <= min(2 * 10<sup>4</sup>, n * (n - 1) / 2)** </br>

🔹 **`edges[i].length == 2`** </br>

🔹 **1 <= u<sub>i</sub>, v<sub>i</sub> <= n** </br>

🔹 **u<sub>i</sub> != v<sub>i</sub>** </br>

🔹 **There are no duplicate edges.** </br>

🔹 **Each vertex can be reached directly or indirectly from every other vertex.** </br>

🔹 **1 <= time, change <= 10<sup></sup>** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>
🔸 **Shortest Path**  </br>


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/28%20-%2007%20-%202024%20---%202045.%20Second%20Minimum%20Time%20to%20Reach%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-2045-SecondMinimumTimeToReachDestination.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/28%20-%2007%20-%202024%20---%202045.%20Second%20Minimum%20Time%20to%20Reach%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-2045-SecondMinimumTimeToReachDestination.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/28%20-%2007%20-%202024%20---%202045.%20Second%20Minimum%20Time%20to%20Reach%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-2045-SecondMinimumTimeToReachDestination.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/07%20July%20%20%F0%9F%8F%96%EF%B8%8F%202024/28%20-%2007%20-%202024%20---%202045.%20Second%20Minimum%20Time%20to%20Reach%20Destination%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-2045-SecondMinimumTimeToReachDestination.js) |

