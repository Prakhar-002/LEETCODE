# 778. Swim in Rising Water

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/swim-in-rising-water/description/"><strong>➥ 🫀 778 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an `n x n` integer matrix `grid`, where each value `grid[i][j]` represents the elevation at that point (i, j).

### Imagine it starts raining and the water level gradually rises over time. At any given time `t`, the water level is at `t`. This means that any cell with an elevation less than or equal to `t` is considered submerged or "reachable" from other land.

### You can swim from one cell to another if they are 4-directionally adjacent and both have elevations that are at most `t`. You can also swim any distance instantaneously, provided both your current cell and your destination cell meet the elevation constraint. Finally, you must stay within the bounds of the grid while swimming.

### Your task: Determine and return the *minimum time* (`t`) at which you can reach the bottom-right square (`n - 1, n - 1`) starting from the top-left square (`0, 0`).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/ea39e6bb-a28c-4f0c-855d-75a7960655e9" width="" height=""/>

  ### 📥 `Input`  ➤ grid = [[0,2], [1,3]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤
At time 0, you are in grid location (0, 0).
You cannot go anywhere else because 4-directionally adjacent neighbors have a higher elevation than t = 0.
You cannot reach point (1, 1) until time 3.
When the depth of water is 3, we can swim anywhere inside the grid.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/b3ea5835-9b9b-4fe7-ab65-bbf026c971c5" width="" height=""/>

  ### 📥 `Input` ➤ 

```JS
grid = [
  [0,1,2,3,4],
  [24,23,22,21,5], 
  [12,13,14,15,16], 
  [11,17,18,19,20], 
  [10,9,8,7,6]
]
```

  ### 📤 `Output`  ➤  16

  ### 🔦 `Explanation` ➤ The final route is shown.
We need to wait until time 16 so that (0, 0) and (4, 4) are connected.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == grid.length </br>

🔹 n == grid[i].length </br>

🔹 1 <= n <= 50 </br>

🔹 0 <= grid[i][j] < n<sup>2</sup> </br>

🔹 Each value grid[i][j] is unique. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Binary Search**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Matrix**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2097%20%F0%9F%A5%A1%20778.%20Swim%20in%20Rising%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20778.%20Swim%20in%20Rising%20Water.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2097%20%F0%9F%A5%A1%20778.%20Swim%20in%20Rising%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20778.%20Swim%20in%20Rising%20Water.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2097%20%F0%9F%A5%A1%20778.%20Swim%20in%20Rising%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20778.%20Swim%20in%20Rising%20Water.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Advanced%20Graphs/Day%20%E2%9E%BA%2097%20%F0%9F%A5%A1%20778.%20Swim%20in%20Rising%20Water%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20778.%20Swim%20in%20Rising%20Water.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/545db8b1-deb0-41d6-9ee2-2b24c21cd189" width = "700px" height="462px" />

</h1>