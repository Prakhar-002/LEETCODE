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

<img src="https://github.com/user-attachments/assets/f6592ea2-2c83-4383-9fc4-72722dafaffc" width="" height=""/>

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/2afb50fe-1fae-4e53-bd2d-bf615b3a593a" width="" height=""/>

  ### 📥 `Input`  ➤ points = [[1,1],[2,2],[3,3]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ There is no way to place Alice and Bob such that Alice can build a fence with Alice's position as the upper left corner and Bob's position as the lower right corner without other points interfering

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/ec13b79d-cc66-46b9-9cfa-095f07f0aeda" width="" height=""/>

  ### 📥 `Input` ➤ points = [[6,2],[4,4],[2,6]]

  ### 📤 `Output`  ➤ 2

  ### 🔦 `Explanation` ➤ There are two ways to place Alice and Bob such that Alice will not be sad:

- Place Alice at (4, 4) and Bob at (6, 2).
- Place Alice at (2, 6) and Bob at (4, 4).

You cannot place Alice at (2, 6) and Bob at (6, 2) because the person at (4, 4) will be inside the fence.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

<img src="https://github.com/user-attachments/assets/c0859083-acc0-4480-b013-8da1fbee966a" width="" height=""/>

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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/03%20-%2009%20-%202025%20---%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/03%20-%2009%20-%202025%20---%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/03%20-%2009%20-%202025%20---%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/09%20Sep%20%F0%9F%8E%83/03%20-%2009%20-%202025%20---%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%203027.%20Find%20the%20Number%20of%20Ways%20to%20Place%20People%20II.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/715e3e3d-e0c4-4192-b079-84e6961ae8f0" width = "700px" height="462px" />

</h1>
