# 2013. Detect Squares

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/detect-squares/description/"><strong>➥ ☢️ 2013 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a stream of points on the X-Y plane. Design an algorithm that:

- Adds new points from the stream into a data structure. Duplicate points are allowed and should be treated as different points.
- Given a query point, counts the number of ways to choose three points from the data structure such that the three points and the query point form an axis-aligned square with positive area.

### An axis-aligned square is a square whose edges are all the same length and are either parallel or perpendicular to the x-axis and y-axis.

### Implement the `DetectSquares` class:

- `DetectSquares()` Initializes the object with an empty data structure.
- `void add(int[] point)` Adds a new point `point = [x, y]` to the data structure.
- `int count(int[] point)` Counts the number of ways to form axis-aligned squares with `point point = [x, y]` as described above.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src ="https://github.com/user-attachments/assets/4d2561cd-e9c4-4494-8ef3-58a8d2bd2534" />

  ### 📥 `Input`  ➤ `["DetectSquares", "add", "add", "add", "count", "count", "add", "count"]
[[], [[3, 10]], [[11, 2]], [[3, 2]], [[11, 10]], [[14, 8]], [[11, 2]], [[11, 10]]]`

  ### 📤 `Output`  ➤ `[null, null, null, null, 1, 0, null, 2]`

  ### 🔦 `Explanation`  ➤ ➺

  - `DetectSquares detectSquares = new DetectSquares();`
  - `detectSquares.add([3, 10]);`
  - `detectSquares.add([11, 2]);`
  - `detectSquares.add([3, 2]);`
  - `detectSquares.count([11, 10]);` // return 1. You can choose: The first, second, and third points
  - `detectSquares.count([14, 8]);`  // return 0. The query point cannot form a square with any points in the data structure.
  - `detectSquares.add([11, 2]);`    // Adding duplicate points is allowed.
  - `detectSquares.count([11, 10]);` // return 2. You can choose: The first, second, and third points or The first, third, and fourth points

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 `point.length == 2` </br>
🔹 `0 <= x, y <= 1000` </br>
🔹 At most 3000 calls in total will be made to `add` and `count`. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Hash Table** </br>
🔸 **Design** </br>
🔸 **Counting** </br>

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
