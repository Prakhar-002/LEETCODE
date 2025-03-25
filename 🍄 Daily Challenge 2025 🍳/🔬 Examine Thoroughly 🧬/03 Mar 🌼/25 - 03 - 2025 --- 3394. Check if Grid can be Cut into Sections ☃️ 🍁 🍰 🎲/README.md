# 3394. Check if Grid can be Cut into Sections

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/?envType=daily-question&envId=2025-03-25"><strong>➥ ☢️ 3394 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Imagine you have an *n* x *n* grid, where *n* is a positive integer representing its dimensions. The grid's origin is at the bottom-left corner. You are given a list of non-overlapping *rectangles*, each defined by its bottom-left corner (startx, starty) and top-right corner (endx, endy).

Your task is to determine if it's possible to make *either* two horizontal *or* two vertical cuts on the grid such that the following conditions are met:

1.  The cuts divide the grid into three distinct sections.
2.  Each of the three sections contains at least one rectangle.
3.  Every rectangle belongs to exactly one section.

Return `true` if such cuts are possible; otherwise, return `false`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ n = 5, rectangles = [[1,0,5,2],[0,2,2,4],[3,2,5,3],[0,4,4,5]]

  ### 📤 `Output`  ➤ true

<img src="" width="" height=""/>

  ### 🔦 `Explanation`  ➤ The grid is shown in the diagram. We can make horizontal cuts at y = 2 and y = 4. Hence, output is true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input` ➤ n = 4, rectangles = [[0,0,1,1],[2,0,3,4],[0,2,2,3],[3,0,4,3]]

  ### 📤 `Output`  ➤ true

<img src="" width="" height=""/>

  ### 🔦 `Explanation` ➤ We can make vertical cuts at x = 2 and x = 3. Hence, output is true.

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 4, rectangles = [[0,2,2,4],[1,0,3,2],[2,2,3,4],[3,0,4,2],[3,2,4,4]]

  ### 📤 `Output`  ➤ false

  ### 🔦 `Explanation`  ➤ We cannot make two horizontal or two vertical cuts that satisfy the conditions. Hence, output is false.

</br>

# Example 💡 4️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ n = 5, rectangles = [[0,0,1,1],[2,2,3,3],[4,4,5,5]]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤  We can make vertical cut on  1<x<2 and 3<x<4. Similarly we can also perform horizontal cuts at similar intervals. The Important part is there must exist rectangles in these split areas.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 3 <= n <= 10<sup>9</sup> </br>

🔹 3 <= rectangles.length <= 10<sup>5</sup> </br>

🔹 `0 <= rectangles[i][0] < rectangles[i][2] <= n` </br>

🔹 `0 <= rectangles[i][1] < rectangles[i][3] <= n` </br>

🔹 No two rectangles overlap. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Sorting**  </br>

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

<img src ="" width = "700px" height="462px" />

</h1>
