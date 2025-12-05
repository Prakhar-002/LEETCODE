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

<img width="400" height="400" alt="3625 Que 1.1" src="https://github.com/user-attachments/assets/1426df67-0c12-4a86-a002-e6d806f18bfe" />

<img width="400" height="400" alt="3625 Que 1.2" src="https://github.com/user-attachments/assets/1400a139-7938-48c3-aa8f-21fb1c6c8289" />

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/03%20-%2012%20-%202025%20---%203625.%20Count%20Number%20of%20Trapezoids%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203625.%20Count%20Number%20of%20Trapezoids%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/03%20-%2012%20-%202025%20---%203625.%20Count%20Number%20of%20Trapezoids%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203625.%20Count%20Number%20of%20Trapezoids%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/03%20-%2012%20-%202025%20---%203625.%20Count%20Number%20of%20Trapezoids%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203625.%20Count%20Number%20of%20Trapezoids%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Dec%20%F0%9F%8E%81/03%20-%2012%20-%202025%20---%203625.%20Count%20Number%20of%20Trapezoids%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203625.%20Count%20Number%20of%20Trapezoids%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/49941dcc-cd5f-4d3f-a72d-4fd02b8cacdf" width = "700px" height="462px" />

</h1> 
