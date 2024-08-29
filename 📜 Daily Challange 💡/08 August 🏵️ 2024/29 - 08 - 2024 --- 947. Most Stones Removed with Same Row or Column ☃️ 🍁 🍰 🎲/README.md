# 947. Most Stones Removed with Same Row or Column

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/?envType=daily-question&envId=2024-08-29"><strong>➥ ☢️ 947 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### On a 2D plane, we place `n` stones at some integer coordinate points. Each coordinate point may have at most one stone.

### A stone can be removed if it shares either `the same row or the same column` as another stone that has not been removed.

### Given an array `stones` of length `n` where `stones[i] = [xi, yi]` represents the location of the `i-th` stone, return *the largest possible number of stones that can be removed*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ stones = [[0,0],[0,1],[1,0],[1,2],[2,1],[2,2]]

  ### 📤 `Output`  ➤ 5

  ### 🔦 `Explanation`  ➤
  
    One way to remove 5 stones is as follows:

    1 ➺ Remove stone [2,2] because it shares the same row as [2,1].

    2 ➺ Remove stone [2,1] because it shares the same column as [0,1].

    3 ➺ Remove stone [1,2] because it shares the same row as [1,0].

    4 ➺ Remove stone [1,0] because it shares the same column as [0,0].

    5 ➺ Remove stone [0,1] because it shares the same row as [0,0].

    Stone [0,0] cannot be removed since it does not share
    a row/column with another stone still on the plane.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ stones = [[0,0],[0,2],[1,1],[2,0],[2,2]]

  ### 📤 `Output`  ➤ 3

  ### 🔦 `Explanation` ➤ 

    One way to make 3 moves is as follows:

    1 ➺ Remove stone [2,2] because it shares the same row as [2,0].

    2 ➺ Remove stone [2,0] because it shares the same column as [0,0].

    3 ➺ Remove stone [0,2] because it shares the same row as [0,0].

    Stones [0,0] and [1,1] cannot be removed since they do
    not share a row/column with another stone still on the plane.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ stones = [[0,0]]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation`  ➤ [0,0] is the only stone on the plane, so you cannot remove it.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`1 <= stones.length <= 1000`** </br>

🔹 **0 <= x<sub>i</sub>, y<sub>i</sub> <= 10<sup>4</sup>** </br>

🔹 **No two stones are at the same coordinate point.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Union Find**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/29%20-%2008%20-%202024%20---%20947.%20Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-947-MostStonesRemovedWith%20SameRowOrColumn.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/29%20-%2008%20-%202024%20---%20947.%20Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-947-MostStonesRemovedWith%20SameRowOrColumn.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/29%20-%2008%20-%202024%20---%20947.%20Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-947-MostStonesRemovedWith%20SameRowOrColumn.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/29%20-%2008%20-%202024%20---%20947.%20Most%20Stones%20Removed%20with%20Same%20Row%20or%20Column%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-947-MostStonesRemovedWith%20SameRowOrColumn.js) |
