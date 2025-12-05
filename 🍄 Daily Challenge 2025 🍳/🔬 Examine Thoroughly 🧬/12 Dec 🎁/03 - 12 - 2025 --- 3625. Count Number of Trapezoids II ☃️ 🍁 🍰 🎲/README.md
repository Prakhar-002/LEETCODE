# 3625. Count Number of Trapezoids II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-trapezoids-ii/description/?envType=daily-question&envId=2025-12-05"><strong>➥ 🫀 3625 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `points` where `points[i] = [xi, yi]` represents the coordinates of the ith point on the Cartesian plane.

### Return the number of unique trapezoids that can be formed by choosing any four distinct points from `points`.

### A trapezoid is a convex quadrilateral with at least one pair of parallel sides. Two lines are parallel if and only if they have the same slope.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ points = [[-3,2],[3,0],[2,3],[3,2],[2,-3]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation`  ➤

<img width="400" height="800" alt="3625 Que 1" src="https://github.com/user-attachments/assets/1426df67-0c12-4a86-a002-e6d806f18bfe" />

```Js
There are two distinct ways to pick four points that form a trapezoid:

The points [-3,2], [2,3], [3,2], [2,-3] form one trapezoid.
The points [2,3], [3,2], [3,0], [2,-3] form another trapezoid.
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[0,0],[1,0],[0,1],[2,1]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is only one trapezoid which can be formed.

<img width="400" height="400" alt="3625 Que 2" src="https://github.com/user-attachments/assets/690027e7-4e63-4b91-9fc5-e470bd7e81c4" />

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 4 <= points.length <= 500 </br>
🔹 –1000 <= xi, yi <= 1000 </br>
🔹 All points are pairwise distinct. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Math** </br>
🔸 **Geometry** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
