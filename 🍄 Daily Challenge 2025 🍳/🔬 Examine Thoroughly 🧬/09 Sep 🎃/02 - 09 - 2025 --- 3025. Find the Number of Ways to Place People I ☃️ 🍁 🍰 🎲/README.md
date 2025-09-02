# 3025. Find the Number of Ways to Place People I

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/description/?envType=daily-question&envId=2025-09-02"><strong>➥ ☢️ 3025 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D array `points` of size `n x 2` where `points[i] = [xi, yi]` represents the integer coordinates of points on a 2D plane.

### Your task is to count the number of pairs of points (A, B) that satisfy the following criteria:

1. **Upper-Left Position:** Point A must be located on the upper-left side of point B. That is, if A is (xa, ya) and B is (xb, yb), then `xa < xb` and `ya > yb` must be true.
2. **Empty Rectangle:** There should be no other points from the `points` array that lie within the rectangle formed by A and B, including points on the boundary (the line connecting A and B). Note that this includes other points lying directly on the line segment joining A and B.

### Return the total number of such (A, B) "good" pairs.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ points = [[1,1],[2,2],[3,3]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤
There is no way to choose A and B so A is on the upper left side of B.

<img src="https://github.com/user-attachments/assets/b14e9fa3-f206-4c43-bc81-672c6a3821a7" width="" height=""/>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[6,2],[4,4],[2,6]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/869cb7bd-418e-48bc-9d10-c477d73b22b7" width="600" height="165"/>

- The left one is the pair (points[1], points[0]), where points[1] is on the upper left side of points[0] and the rectangle is empty.

- The middle one is the pair (points[2], points[1]), same as the left one it is a valid pair.

- The right one is the pair (points[2], points[0]), where points[2] is on the upper left side of points[0], but points[1] is inside the rectangle so it's not a valid pair.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ points = [[3,1],[1,3],[1,1]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤

<img src="https://github.com/user-attachments/assets/3c0ccf6b-22bb-4725-b095-4df5b697c60f" width="600" height="165"/>

- The left one is the pair (points[2], points[0]), where points[2] is on the upper left side of points[0] and there are no other points on the line they form. Note that it is a valid state when the two points form a line.

- The middle one is the pair (points[1], points[2]), it is a valid pair same as the left one.

- The right one is the pair (points[1], points[0]), it is not a valid pair as points[2] is on the border of the rectangle.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `2 <= n <= 50` </br>
🔹 `points[i].length == 2` </br>
🔹 `0 <= points[i][0], points[i][1] <= 50` </br>
🔹 `All points[i] are distinct.` </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Math**  </br>
🔸 **Geometry**  </br>
🔸 **Sorting**  </br>
🔸 **Enumeration**  </br>

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
