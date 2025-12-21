# Q2. Min Cost to Connect All Points

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/min-cost-to-connect-all-points/description/"><strong>➥ ☢️ Q2 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array `points` where `points[i] = [xi, yi]` represents the integer coordinates of points on a 2D plane.

### The cost of connecting two points `[xi, yi]` and `[xj, yj]` is defined as their Manhattan distance: `|xi - xj| + |yi - yj|`, where `|val|` represents the absolute value of `val`.

### Your task is to return the *minimum cost* required to make all points connected. A set of points is considered "connected" if there exists exactly one simple path between any two points in the set (forming a minimum spanning tree).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img width="214" height="268" alt="1584 que 1" src="https://github.com/user-attachments/assets/8b11cdbc-2c22-40a3-b6b0-2a6f9bb571ef" />

  ### 📥 `Input`  ➤ points = [[0,0],[2,2],[3,10],[5,2],[7,0]]

  ### 📤 `Output`  ➤ 20

  ### 🔦 `Explanation`  ➤
We can connect the points as shown above to get the minimum cost of 20.
Notice that there is a unique path between every pair of points.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img width="214" height="268" alt="1584 que 2" src="https://github.com/user-attachments/assets/c87f829c-cea4-4997-a314-df2eb141fd4c" />

  ### 📥 `Input` ➤ points = [[3,12],[-2,5],[-4,1]]

  ### 📤 `Output`  ➤ 18

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= points.length <= 1000 </br>

🔹 -10<sup>6</sup> <= xi, yi <= 10<sup>6</sup> </br>

🔹 All pairs (xi, yi) are distinct. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Union Find**  </br>
🔸 **Graph**  </br>
🔸 **Minimum Spanning Tree**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2096%20%F0%9F%A5%A1%201584.%20Min%20Cost%20to%20Connect%20All%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%201584.%20Min%20Cost%20to%20Connec.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2096%20%F0%9F%A5%A1%201584.%20Min%20Cost%20to%20Connect%20All%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%201584.%20Min%20Cost%20to%20Connect%20.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2096%20%F0%9F%A5%A1%201584.%20Min%20Cost%20to%20Connect%20All%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%201584.%20Min%20Cost%20to%20Connec.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2096%20%F0%9F%A5%A1%201584.%20Min%20Cost%20to%20Connect%20All%20Points%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%201584.%20Min%20Cost%20to%20Co.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7aaab783-f6ec-409b-8c96-90cf42d6ca35" width = "700px" height="462px" />

</h1>
