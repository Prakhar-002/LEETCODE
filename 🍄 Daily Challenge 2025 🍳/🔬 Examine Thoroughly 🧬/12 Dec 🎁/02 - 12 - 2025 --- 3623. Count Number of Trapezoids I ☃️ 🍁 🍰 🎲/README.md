# 3623. Count Number of Trapezoids I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/count-number-of-trapezoids-i/description/?envType=daily-question&envId=2025-12-02"><strong>➥ ☢️ 3623 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D integer array `points`, where `points[i] = [xi, yi]` represents the coordinates of the ith point on the Cartesian plane.

### A horizontal trapezoid is a convex quadrilateral with at least one pair of horizontal sides (i.e. parallel to the x-axis). Two lines are parallel if and only if they have the same slope.

### Return the number of unique horizontal trapezoids that can be formed by choosing any four distinct points from `points`.

### Since the answer may be very large, return it modulo 10<sup>9</sup> + 7.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ points = [[1,0],[2,0],[3,0],[2,2],[3,2]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation`  ➤

<img width="800" height="800" alt="3623 que 1" src="https://github.com/user-attachments/assets/9b81339e-40dd-4ee4-b221-cb7656a8b6a7" />

```Js
There are three distinct ways to pick four points that form a horizontal trapezoid:

Using points [1,0], [2,0], [3,2], and [2,2].
Using points [2,0], [3,0], [3,2], and [2,2].
Using points [1,0], [3,0], [3,2], and [2,2].
```

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[0,0],[1,0],[0,1],[2,1]]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is only one horizontal trapezoid that can be formed.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 4 <= points.length <= 10<sup>5</sup> </br>
🔹 –10<sup>8</sup> <= xi, yi <= 10<sup>8</sup> </br>
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

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/" width = "700px" height="462px" />

</h1>
