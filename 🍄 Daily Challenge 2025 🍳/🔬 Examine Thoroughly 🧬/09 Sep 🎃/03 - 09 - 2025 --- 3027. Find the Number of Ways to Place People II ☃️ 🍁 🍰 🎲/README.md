# 3027. Find the Number of Ways to Place People II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/find-the-number-of-ways-to-place-people-ii/description/?envType=daily-question&envId=2025-09-03"><strong>➥ 🫀 3027 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given a 2D array `points` of size `n x 2`, representing the integer coordinates of `n` points on a 2D plane. `points[i] = [xi, yi]` where `xi` and `yi` are the coordinates of the i<sup>th</sup> point.

### Imagine you have `n` people to place, including Alice and Bob. Your goal is to place exactly one person at each of the `n` given points.

### Alice, wanting some privacy, intends to build a rectangular fence.  She will choose her position and Bob's position such that Alice's position forms the *upper-left corner*, and Bob's position forms the *lower-right corner* of the rectangle (fence).  The sides of the rectangle are parallel to the axes.

### However, Alice will be sad if there is *any* other person located either:

- Strictly *inside* the fence, or
- Directly *on* the boundary (fence line) *except* for Alice and Bob.

### Your task is to return the number of pairs of points (representing potential placements for Alice and Bob) where Alice does *not* become sad when building the rectangular fence. Remember, Alice's location must be the upper-left and Bob's location must be the lower-right corner.

<img src="" width="" height=""/>

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤ points = [[1,1],[2,2],[3,3]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ There is no way to place Alice and Bob such that Alice can build a fence with Alice's position as the upper left corner and Bob's position as the lower right corner without other points interfering

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ points = [[6,2],[4,4],[2,6]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ There are two ways to place Alice and Bob such that Alice will not be sad:

- Place Alice at (4, 4) and Bob at (6, 2).
- Place Alice at (2, 6) and Bob at (4, 4).

You cannot place Alice at (2, 6) and Bob at (6, 2) because the person at (4, 4) will be inside the fence.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ points = [[3,1],[1,3],[1,1]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ There are two ways to place Alice and Bob such that Alice will not be sad:

- Place Alice at (1, 1) and Bob at (3, 1).
- Place Alice at (1, 3) and Bob at (1, 1).

You cannot place Alice at (1, 3) and Bob at (3, 1) because the person at (1, 1) will be on the fence.

Note that it does not matter if the fence encloses any area; the first and second fences in the image are valid.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= n <= 1000 </br>

🔹 points[i].length == 2 </br>

🔹 -10<sup>9</sup> <= points[i][0], points[i][1] <= 10<sup>9</sup> </br>

🔹 All points[i] are distinct. </br>

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
