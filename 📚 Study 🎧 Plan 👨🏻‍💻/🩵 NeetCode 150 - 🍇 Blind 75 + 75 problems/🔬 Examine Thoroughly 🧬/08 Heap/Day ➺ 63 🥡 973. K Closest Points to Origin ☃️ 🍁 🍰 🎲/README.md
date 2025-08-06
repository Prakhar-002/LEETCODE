# 973. K Closest Points to Origin

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/k-closest-points-to-origin/description/"><strong>➥ ☢️ 973 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of points, `points`, where each `points[i] = [xi, yi]` represents a point on the X-Y plane. You are also given an integer `k`.

### The task is to return the `k` closest points to the origin (0, 0). Closeness is defined using the Euclidean distance, calculated as `√(x1 - x2)² + (y1 - y2)²`.

### You can return the answer in any order. The answer is guaranteed to be unique (except for the order of points in the returned array).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/72eb20cd-a902-4f4e-8854-76c55b81d97a" width="" height=""/>

  ### 📥 `Input`  ➤ points = [[1,3],[-2,2]], k = 1

  ### 📤 `Output`  ➤ [[-2,2]]

  ### 🔦 `Explanation`  ➤ The distance between (1, 3) and the origin is sqrt(10). The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin. We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[3,3],[5,-1],[-2,4]], k = 2

  ### 📤 `Output`  ➤ [[3,3],[-2,4]]

  ### 🔦 `Explanation` ➤ The answer [[-2,4],[3,3]] would also be accepted.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= k <= points.length <= 10<sup>4</sup> </br>

🔹 -10<sup>4</sup> <= xi, yi <= 10<sup>4</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Divide and Conquer**  </br>
🔸 **Geometry**  </br>
🔸 **Sorting**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Quickselect**  </br>

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
